#include "SSD1306.h"
#include "KY040.h"
#include "trim.h"

SSD1306 d(0x3c, D3, D2); // i2c address, SDA, SCL
KY040 encoder(D6, D7, D5); // CLK, DT, SW

// FONT CONSTANTS
static const int Monospaced_Plain_10_CHAR_HEIGHT = 13;
static const int Monospaced_Plain_10_CHAR_WIDTH = 6;
static const char INPUT_CHARACTERS[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'Z', 'Y', 'Z',
                        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                        ' ', '.', ',', ';', ':', '/', '\\', '|', '\'', '"', '<', '>', '[', ']', '{', '}', '_', '-', '+', '=', '`', '~',
                        '?', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')'
                      };
static const int NUM_INPUT_CHARACTERS = 95;

// SETTINGS SCREEN CONSTANTS
const char* SETTINGS_TITLE = "Network Settings";
const char* SETTINGS_SSID = "SSID:";
const char* SETTINGS_PASS = "PASS:";
const char* SETTINGS_KEY = "KEY:";
const int MAX_SETTINGS_LENGTH = 16;

// DEFAULT SETTINGS
char* WIFI_SSID = "Nathan's Phone";
char* WIFI_PASS = "1stP@$$w0r";
char* THINGSPEAK_KEY = "429VUF9NBUDZ5F1G";

void isr() {
  encoder.interrupt();
}

void setup() {
  Serial.begin(115200);
  Serial.println("old_sample started!");

  attachInterrupt(12, isr, FALLING);
    
  d.init();

  settingsEditor();
}

void loop() {}

void settingsEditor() {  
  d.clear();

  // TITLE BAR
  d.setFont(Dialog_Bold_10);
  d.setTextAlignment(TEXT_ALIGN_CENTER);
  d.setColor(WHITE);
  d.fillRect(0, 0, 128, 13);
  d.setColor(BLACK);
  d.drawString(128/2, 0, SETTINGS_TITLE);
  
  // SSID:, PASSWORD:, KEY:
  d.setFont(Monospaced_Plain_10);
  d.setTextAlignment(TEXT_ALIGN_LEFT);
  d.setColor(WHITE);
  d.drawString(0, 14 + (0 * Monospaced_Plain_10_CHAR_HEIGHT), SETTINGS_SSID);
  d.drawString(0, 14 + (1 * Monospaced_Plain_10_CHAR_HEIGHT), SETTINGS_PASS);
  d.drawString(0, 14 + (2 * Monospaced_Plain_10_CHAR_HEIGHT), SETTINGS_KEY);

  // ssid, pass, key
  d.drawString(strlen(SETTINGS_SSID) * Monospaced_Plain_10_CHAR_WIDTH, 14 + (0 * Monospaced_Plain_10_CHAR_HEIGHT), WIFI_SSID);
  d.drawString(strlen(SETTINGS_PASS) * Monospaced_Plain_10_CHAR_WIDTH, 14 + (1 * Monospaced_Plain_10_CHAR_HEIGHT), WIFI_PASS);
  d.drawString(strlen(SETTINGS_KEY) * Monospaced_Plain_10_CHAR_WIDTH,  14 + (2 * Monospaced_Plain_10_CHAR_HEIGHT), THINGSPEAK_KEY);

  // ACTIONS BAR
  d.fillRect(0, 54, 128, 10);
  d.setColor(BLACK);
  d.setTextAlignment(TEXT_ALIGN_CENTER);
  d.drawString(64, 53, "SAVE");
  d.drawString(64 - 37, 53, "REVERT");
  d.drawString(64 + 37, 53, "CANCEL");
  d.setTextAlignment(TEXT_ALIGN_LEFT);

  d.display();

  editSetting(SETTINGS_SSID, WIFI_SSID, 14 + (0 * Monospaced_Plain_10_CHAR_HEIGHT));
  editSetting(SETTINGS_PASS, WIFI_PASS, 14 + (1 * Monospaced_Plain_10_CHAR_HEIGHT));
  editSetting(SETTINGS_KEY,  THINGSPEAK_KEY,  14 + (2 * Monospaced_Plain_10_CHAR_HEIGHT));

  Serial.print("WIFI_SSID: ");
  Serial.println(WIFI_SSID);

  Serial.print("WIFI_PASS: ");
  Serial.println(WIFI_PASS);

  Serial.print("THINGSPEAK_KEY: ");
  Serial.println(THINGSPEAK_KEY);

  d.setColor(INVERSE);

  while (1) {
    // flash REVERT
    for (int i = 0; i < 5; i++) {
      d.fillRect(9, 54, 37, 10);
      d.display();
      delay(500);
      d.fillRect(9, 54, 37, 10);
      d.display();
      delay(500);
    }
  
    // flash SAVE
    for (int i = 0; i < 5; i++) {
      d.fillRect(52, 54, 24, 10);
      d.display();
      delay(500);
      d.fillRect(52, 54, 24, 10);
      d.display();
      delay(500);
    }
  
    // flash CANCEL
    for (int i = 0; i < 5; i++) {
      d.fillRect(83, 54, 37, 10);
      d.display();
      delay(500);
      d.fillRect(83, 54, 37, 10);
      d.display();
      delay(500);
    } 
  }
}







void editSetting(const char* settings_label, char* setting, int y) {
  char _setting[MAX_SETTINGS_LENGTH];
  for (int i = 0; i < MAX_SETTINGS_LENGTH; i++) _setting[i] = 62; // set all characters to spaces
  
  for (int i = 0; i < strlen(setting); i++) {
    for (int j = 0; j < NUM_INPUT_CHARACTERS; j++) {
      if (INPUT_CHARACTERS[j] == setting[i]) {
        _setting[i] = j;
        break;
      }
    }
  }
  
  
  d.setFont(Monospaced_Plain_10);
  d.setTextAlignment(TEXT_ALIGN_LEFT);
  d.setColor(INVERSE);

  int editing_char_index = 0; // start editing first char
  int prev_encoder_val = encoder.getPosition();
  boolean editing = true;
  while (editing) {
    encoder.tick();
    
    if (encoder.isLongPressed()) editing = false;

    // button pressed
    if (encoder.isUniquePressed()) {
      // move editing box to next char
      editing_char_index = (editing_char_index + 1) % MAX_SETTINGS_LENGTH;
    }

    if (_setting[editing_char_index] + (encoder.getPosition() - prev_encoder_val) >= 0 && _setting[editing_char_index] + (encoder.getPosition() - prev_encoder_val) < NUM_INPUT_CHARACTERS) {
      // only use new encoder value if it keeps editing_char_index inside INPUT_CHARACTERS array
      _setting[editing_char_index] += (encoder.getPosition() - prev_encoder_val);
    }
    prev_encoder_val = encoder.getPosition();

    
    // TODO: only redisplay it if the setting changed
    // clear old setting from screen
    d.setColor(BLACK);
    d.fillRect(strlen(settings_label) * Monospaced_Plain_10_CHAR_WIDTH, y, MAX_SETTINGS_LENGTH * Monospaced_Plain_10_CHAR_WIDTH, Monospaced_Plain_10_CHAR_HEIGHT);

    // draw actual setting
    for (int i = 0; i < MAX_SETTINGS_LENGTH; i++) {
      d.setColor(WHITE);
      d.drawString(strlen(settings_label) * Monospaced_Plain_10_CHAR_WIDTH + (Monospaced_Plain_10_CHAR_WIDTH * i), y, String(INPUT_CHARACTERS[_setting[i]]));
    }

    // draw editing box
    if (editing) {
      d.setColor(INVERSE);
      d.fillRect(strlen(settings_label) * Monospaced_Plain_10_CHAR_WIDTH + (Monospaced_Plain_10_CHAR_WIDTH * editing_char_index), y, Monospaced_Plain_10_CHAR_WIDTH, Monospaced_Plain_10_CHAR_HEIGHT);      
    }

    d.display();
  }

  // convert _setting back to actual string
  for (int i = 0; i < MAX_SETTINGS_LENGTH; i++) _setting[i] = INPUT_CHARACTERS[_setting[i]];
  
  trim(_setting);

  strcpy(setting, _setting);
}

