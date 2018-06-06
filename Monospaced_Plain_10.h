// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const char Monospaced_Plain_10[] PROGMEM = {
  0x06, // Width: 6
  0x0D, // Height: 13
  0x20, // First Char: 32
  0xE0, // Numbers of Chars: 224

  // Jump Table:
  0xFF, 0xFF, 0x00, 0x06,  // 32:65535
  0x00, 0x00, 0x08, 0x06,  // 33:0
  0x00, 0x08, 0x09, 0x06,  // 34:8
  0x00, 0x11, 0x0B, 0x06,  // 35:17
  0x00, 0x1C, 0x0C, 0x06,  // 36:28
  0x00, 0x28, 0x0C, 0x06,  // 37:40
  0x00, 0x34, 0x0C, 0x06,  // 38:52
  0x00, 0x40, 0x07, 0x06,  // 39:64
  0x00, 0x47, 0x08, 0x06,  // 40:71
  0x00, 0x4F, 0x08, 0x06,  // 41:79
  0x00, 0x57, 0x0B, 0x06,  // 42:87
  0x00, 0x62, 0x0B, 0x06,  // 43:98
  0x00, 0x6D, 0x06, 0x06,  // 44:109
  0x00, 0x73, 0x07, 0x06,  // 45:115
  0x00, 0x7A, 0x06, 0x06,  // 46:122
  0x00, 0x80, 0x09, 0x06,  // 47:128
  0x00, 0x89, 0x0C, 0x06,  // 48:137
  0x00, 0x95, 0x0C, 0x06,  // 49:149
  0x00, 0xA1, 0x0A, 0x06,  // 50:161
  0x00, 0xAB, 0x0A, 0x06,  // 51:171
  0x00, 0xB5, 0x0B, 0x06,  // 52:181
  0x00, 0xC0, 0x0A, 0x06,  // 53:192
  0x00, 0xCA, 0x0C, 0x06,  // 54:202
  0x00, 0xD6, 0x09, 0x06,  // 55:214
  0x00, 0xDF, 0x0A, 0x06,  // 56:223
  0x00, 0xE9, 0x0C, 0x06,  // 57:233
  0x00, 0xF5, 0x06, 0x06,  // 58:245
  0x00, 0xFB, 0x06, 0x06,  // 59:251
  0x01, 0x01, 0x0C, 0x06,  // 60:257
  0x01, 0x0D, 0x0B, 0x06,  // 61:269
  0x01, 0x18, 0x0B, 0x06,  // 62:280
  0x01, 0x23, 0x09, 0x06,  // 63:291
  0x01, 0x2C, 0x0C, 0x06,  // 64:300
  0x01, 0x38, 0x0C, 0x06,  // 65:312
  0x01, 0x44, 0x0C, 0x06,  // 66:324
  0x01, 0x50, 0x0C, 0x06,  // 67:336
  0x01, 0x5C, 0x0C, 0x06,  // 68:348
  0x01, 0x68, 0x0A, 0x06,  // 69:360
  0x01, 0x72, 0x09, 0x06,  // 70:370
  0x01, 0x7B, 0x0C, 0x06,  // 71:379
  0x01, 0x87, 0x0C, 0x06,  // 72:391
  0x01, 0x93, 0x0C, 0x06,  // 73:403
  0x01, 0x9F, 0x0A, 0x06,  // 74:415
  0x01, 0xA9, 0x0C, 0x06,  // 75:425
  0x01, 0xB5, 0x0C, 0x06,  // 76:437
  0x01, 0xC1, 0x0C, 0x06,  // 77:449
  0x01, 0xCD, 0x0C, 0x06,  // 78:461
  0x01, 0xD9, 0x0C, 0x06,  // 79:473
  0x01, 0xE5, 0x0B, 0x06,  // 80:485
  0x01, 0xF0, 0x0C, 0x06,  // 81:496
  0x01, 0xFC, 0x0C, 0x06,  // 82:508
  0x02, 0x08, 0x0C, 0x06,  // 83:520
  0x02, 0x14, 0x0B, 0x06,  // 84:532
  0x02, 0x1F, 0x0C, 0x06,  // 85:543
  0x02, 0x2B, 0x0B, 0x06,  // 86:555
  0x02, 0x36, 0x0B, 0x06,  // 87:566
  0x02, 0x41, 0x0C, 0x06,  // 88:577
  0x02, 0x4D, 0x0B, 0x06,  // 89:589
  0x02, 0x58, 0x0C, 0x06,  // 90:600
  0x02, 0x64, 0x08, 0x06,  // 91:612
  0x02, 0x6C, 0x0A, 0x06,  // 92:620
  0x02, 0x76, 0x08, 0x06,  // 93:630
  0x02, 0x7E, 0x09, 0x06,  // 94:638
  0x02, 0x87, 0x0C, 0x06,  // 95:647
  0x02, 0x93, 0x05, 0x06,  // 96:659
  0x02, 0x98, 0x0C, 0x06,  // 97:664
  0x02, 0xA4, 0x0C, 0x06,  // 98:676
  0x02, 0xB0, 0x0A, 0x06,  // 99:688
  0x02, 0xBA, 0x0C, 0x06,  // 100:698
  0x02, 0xC6, 0x0C, 0x06,  // 101:710
  0x02, 0xD2, 0x09, 0x06,  // 102:722
  0x02, 0xDB, 0x0C, 0x06,  // 103:731
  0x02, 0xE7, 0x0A, 0x06,  // 104:743
  0x02, 0xF1, 0x0C, 0x06,  // 105:753
  0x02, 0xFD, 0x08, 0x06,  // 106:765
  0x03, 0x05, 0x0A, 0x06,  // 107:773
  0x03, 0x0F, 0x0A, 0x06,  // 108:783
  0x03, 0x19, 0x0C, 0x06,  // 109:793
  0x03, 0x25, 0x0A, 0x06,  // 110:805
  0x03, 0x2F, 0x0C, 0x06,  // 111:815
  0x03, 0x3B, 0x0C, 0x06,  // 112:827
  0x03, 0x47, 0x0C, 0x06,  // 113:839
  0x03, 0x53, 0x0B, 0x06,  // 114:851
  0x03, 0x5E, 0x0A, 0x06,  // 115:862
  0x03, 0x68, 0x0A, 0x06,  // 116:872
  0x03, 0x72, 0x0A, 0x06,  // 117:882
  0x03, 0x7C, 0x09, 0x06,  // 118:892
  0x03, 0x85, 0x0B, 0x06,  // 119:901
  0x03, 0x90, 0x0A, 0x06,  // 120:912
  0x03, 0x9A, 0x09, 0x06,  // 121:922
  0x03, 0xA3, 0x0A, 0x06,  // 122:931
  0x03, 0xAD, 0x0A, 0x06,  // 123:941
  0x03, 0xB7, 0x08, 0x06,  // 124:951
  0x03, 0xBF, 0x0B, 0x06,  // 125:959
  0x03, 0xCA, 0x0B, 0x06,  // 126:970
  0x03, 0xD5, 0x0A, 0x06,  // 127:981
  0x03, 0xDF, 0x0A, 0x06,  // 128:991
  0x03, 0xE9, 0x0A, 0x06,  // 129:1001
  0x03, 0xF3, 0x0A, 0x06,  // 130:1011
  0x03, 0xFD, 0x0A, 0x06,  // 131:1021
  0x04, 0x07, 0x0A, 0x06,  // 132:1031
  0x04, 0x11, 0x0A, 0x06,  // 133:1041
  0x04, 0x1B, 0x0A, 0x06,  // 134:1051
  0x04, 0x25, 0x0A, 0x06,  // 135:1061
  0x04, 0x2F, 0x0A, 0x06,  // 136:1071
  0x04, 0x39, 0x0A, 0x06,  // 137:1081
  0x04, 0x43, 0x0A, 0x06,  // 138:1091
  0x04, 0x4D, 0x0A, 0x06,  // 139:1101
  0x04, 0x57, 0x0A, 0x06,  // 140:1111
  0x04, 0x61, 0x0A, 0x06,  // 141:1121
  0x04, 0x6B, 0x0A, 0x06,  // 142:1131
  0x04, 0x75, 0x0A, 0x06,  // 143:1141
  0x04, 0x7F, 0x0A, 0x06,  // 144:1151
  0x04, 0x89, 0x0A, 0x06,  // 145:1161
  0x04, 0x93, 0x0A, 0x06,  // 146:1171
  0x04, 0x9D, 0x0A, 0x06,  // 147:1181
  0x04, 0xA7, 0x0A, 0x06,  // 148:1191
  0x04, 0xB1, 0x0A, 0x06,  // 149:1201
  0x04, 0xBB, 0x0A, 0x06,  // 150:1211
  0x04, 0xC5, 0x0A, 0x06,  // 151:1221
  0x04, 0xCF, 0x0A, 0x06,  // 152:1231
  0x04, 0xD9, 0x0A, 0x06,  // 153:1241
  0x04, 0xE3, 0x0A, 0x06,  // 154:1251
  0x04, 0xED, 0x0A, 0x06,  // 155:1261
  0x04, 0xF7, 0x0A, 0x06,  // 156:1271
  0x05, 0x01, 0x0A, 0x06,  // 157:1281
  0x05, 0x0B, 0x0A, 0x06,  // 158:1291
  0x05, 0x15, 0x0A, 0x06,  // 159:1301
  0xFF, 0xFF, 0x00, 0x06,  // 160:65535
  0x05, 0x1F, 0x08, 0x06,  // 161:1311
  0x05, 0x27, 0x0A, 0x06,  // 162:1319
  0x05, 0x31, 0x0C, 0x06,  // 163:1329
  0x05, 0x3D, 0x0A, 0x06,  // 164:1341
  0x05, 0x47, 0x0B, 0x06,  // 165:1351
  0x05, 0x52, 0x08, 0x06,  // 166:1362
  0x05, 0x5A, 0x0A, 0x06,  // 167:1370
  0x05, 0x64, 0x09, 0x06,  // 168:1380
  0x05, 0x6D, 0x0B, 0x06,  // 169:1389
  0x05, 0x78, 0x07, 0x06,  // 170:1400
  0x05, 0x7F, 0x0C, 0x06,  // 171:1407
  0x05, 0x8B, 0x0B, 0x06,  // 172:1419
  0x05, 0x96, 0x07, 0x06,  // 173:1430
  0x05, 0x9D, 0x0B, 0x06,  // 174:1437
  0x05, 0xA8, 0x07, 0x06,  // 175:1448
  0x05, 0xAF, 0x07, 0x06,  // 176:1455
  0x05, 0xB6, 0x0C, 0x06,  // 177:1462
  0x05, 0xC2, 0x09, 0x06,  // 178:1474
  0x05, 0xCB, 0x09, 0x06,  // 179:1483
  0x05, 0xD4, 0x07, 0x06,  // 180:1492
  0x05, 0xDB, 0x0C, 0x06,  // 181:1499
  0x05, 0xE7, 0x0A, 0x06,  // 182:1511
  0x05, 0xF1, 0x05, 0x06,  // 183:1521
  0x05, 0xF6, 0x08, 0x06,  // 184:1526
  0x05, 0xFE, 0x09, 0x06,  // 185:1534
  0x06, 0x07, 0x09, 0x06,  // 186:1543
  0x06, 0x10, 0x09, 0x06,  // 187:1552
  0x06, 0x19, 0x0C, 0x06,  // 188:1561
  0x06, 0x25, 0x0C, 0x06,  // 189:1573
  0x06, 0x31, 0x0C, 0x06,  // 190:1585
  0x06, 0x3D, 0x0A, 0x06,  // 191:1597
  0x06, 0x47, 0x0C, 0x06,  // 192:1607
  0x06, 0x53, 0x0C, 0x06,  // 193:1619
  0x06, 0x5F, 0x0C, 0x06,  // 194:1631
  0x06, 0x6B, 0x0C, 0x06,  // 195:1643
  0x06, 0x77, 0x0C, 0x06,  // 196:1655
  0x06, 0x83, 0x0C, 0x06,  // 197:1667
  0x06, 0x8F, 0x0C, 0x06,  // 198:1679
  0x06, 0x9B, 0x0C, 0x06,  // 199:1691
  0x06, 0xA7, 0x0A, 0x06,  // 200:1703
  0x06, 0xB1, 0x0A, 0x06,  // 201:1713
  0x06, 0xBB, 0x0A, 0x06,  // 202:1723
  0x06, 0xC5, 0x0C, 0x06,  // 203:1733
  0x06, 0xD1, 0x0C, 0x06,  // 204:1745
  0x06, 0xDD, 0x0C, 0x06,  // 205:1757
  0x06, 0xE9, 0x0C, 0x06,  // 206:1769
  0x06, 0xF5, 0x0C, 0x06,  // 207:1781
  0x07, 0x01, 0x0C, 0x06,  // 208:1793
  0x07, 0x0D, 0x0C, 0x06,  // 209:1805
  0x07, 0x19, 0x0C, 0x06,  // 210:1817
  0x07, 0x25, 0x0C, 0x06,  // 211:1829
  0x07, 0x31, 0x0C, 0x06,  // 212:1841
  0x07, 0x3D, 0x0C, 0x06,  // 213:1853
  0x07, 0x49, 0x0C, 0x06,  // 214:1865
  0x07, 0x55, 0x0A, 0x06,  // 215:1877
  0x07, 0x5F, 0x0C, 0x06,  // 216:1887
  0x07, 0x6B, 0x0C, 0x06,  // 217:1899
  0x07, 0x77, 0x0C, 0x06,  // 218:1911
  0x07, 0x83, 0x0C, 0x06,  // 219:1923
  0x07, 0x8F, 0x0C, 0x06,  // 220:1935
  0x07, 0x9B, 0x0B, 0x06,  // 221:1947
  0x07, 0xA6, 0x0B, 0x06,  // 222:1958
  0x07, 0xB1, 0x0C, 0x06,  // 223:1969
  0x07, 0xBD, 0x0C, 0x06,  // 224:1981
  0x07, 0xC9, 0x0C, 0x06,  // 225:1993
  0x07, 0xD5, 0x0C, 0x06,  // 226:2005
  0x07, 0xE1, 0x0C, 0x06,  // 227:2017
  0x07, 0xED, 0x0C, 0x06,  // 228:2029
  0x07, 0xF9, 0x0C, 0x06,  // 229:2041
  0x08, 0x05, 0x0C, 0x06,  // 230:2053
  0x08, 0x11, 0x0A, 0x06,  // 231:2065
  0x08, 0x1B, 0x0C, 0x06,  // 232:2075
  0x08, 0x27, 0x0C, 0x06,  // 233:2087
  0x08, 0x33, 0x0C, 0x06,  // 234:2099
  0x08, 0x3F, 0x0C, 0x06,  // 235:2111
  0x08, 0x4B, 0x0C, 0x06,  // 236:2123
  0x08, 0x57, 0x0C, 0x06,  // 237:2135
  0x08, 0x63, 0x0C, 0x06,  // 238:2147
  0x08, 0x6F, 0x0C, 0x06,  // 239:2159
  0x08, 0x7B, 0x0C, 0x06,  // 240:2171
  0x08, 0x87, 0x0A, 0x06,  // 241:2183
  0x08, 0x91, 0x0C, 0x06,  // 242:2193
  0x08, 0x9D, 0x0C, 0x06,  // 243:2205
  0x08, 0xA9, 0x0C, 0x06,  // 244:2217
  0x08, 0xB5, 0x0C, 0x06,  // 245:2229
  0x08, 0xC1, 0x0C, 0x06,  // 246:2241
  0x08, 0xCD, 0x09, 0x06,  // 247:2253
  0x08, 0xD6, 0x0C, 0x06,  // 248:2262
  0x08, 0xE2, 0x0A, 0x06,  // 249:2274
  0x08, 0xEC, 0x0A, 0x06,  // 250:2284
  0x08, 0xF6, 0x0A, 0x06,  // 251:2294
  0x09, 0x00, 0x0A, 0x06,  // 252:2304
  0x09, 0x0A, 0x09, 0x06,  // 253:2314
  0x09, 0x13, 0x0C, 0x06,  // 254:2323
  0x09, 0x1F, 0x0B, 0x06,  // 255:2335

  // Font Data:
  0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x02,  // 33
  0x00,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x1C, // 34
  0x80,0x00,0xD0,0x03,0xBC,0x00,0xD0,0x03,0xBC,0x00,0x10, // 35
  0x00,0x00,0x38,0x02,0x24,0x02,0xFC,0x07,0x44,0x02,0xC0,0x01,  // 36
  0x00,0x00,0x98,0x00,0xA4,0x00,0x58,0x01,0xC0,0x02,0xA0,0x02,  // 37
  0x00,0x00,0xC0,0x01,0x3C,0x03,0x24,0x02,0xC4,0x02,0x00,0x01,  // 38
  0x00,0x00,0x00,0x00,0x00,0x00,0x1C, // 39
  0x00,0x00,0x00,0x00,0xF0,0x01,0x0C,0x06,  // 40
  0x00,0x00,0x00,0x00,0x0C,0x06,0xF0,0x01,  // 41
  0x00,0x00,0x28,0x00,0x30,0x00,0x7C,0x00,0x30,0x00,0x28, // 42
  0x00,0x00,0x40,0x00,0x40,0x00,0xF0,0x01,0x40,0x00,0x40, // 43
  0x00,0x00,0x00,0x04,0x00,0x03,  // 44
  0x00,0x00,0x00,0x00,0x80,0x00,0x80, // 45
  0x00,0x00,0x00,0x00,0x00,0x02,  // 46
  0x00,0x00,0x00,0x06,0xC0,0x01,0x30,0x00,0x0C, // 47
  0x00,0x00,0xF8,0x01,0x0C,0x03,0x24,0x02,0x0C,0x03,0xF8,0x01,  // 48
  0x00,0x00,0x04,0x02,0x04,0x02,0xFC,0x03,0x00,0x02,0x00,0x02,  // 49
  0x00,0x02,0x04,0x03,0x84,0x02,0x44,0x02,0x38,0x02,  // 50
  0x00,0x02,0x04,0x02,0x24,0x02,0x24,0x02,0xD8,0x01,  // 51
  0x00,0x00,0xC0,0x00,0xB0,0x00,0x88,0x00,0xFC,0x03,0x80, // 52
  0x00,0x02,0x3C,0x02,0x24,0x02,0x24,0x02,0xC0,0x01,  // 53
  0x00,0x00,0xF8,0x01,0x2C,0x02,0x24,0x02,0x24,0x02,0xC0,0x01,  // 54
  0x04,0x00,0x04,0x00,0x84,0x03,0x74,0x00,0x0C, // 55
  0x00,0x00,0xD8,0x01,0x24,0x02,0x24,0x02,0xD8,0x01,  // 56
  0x00,0x00,0x38,0x00,0x44,0x02,0x44,0x02,0x44,0x03,0xF8,0x01,  // 57
  0x00,0x00,0x00,0x00,0x20,0x02,  // 58
  0x00,0x00,0x00,0x04,0x10,0x03,  // 59
  0x00,0x00,0x40,0x00,0xC0,0x00,0xA0,0x00,0x20,0x01,0x10,0x01,  // 60
  0xA0,0x00,0xA0,0x00,0xA0,0x00,0xA0,0x00,0xA0,0x00,0xA0, // 61
  0x00,0x00,0x10,0x01,0x20,0x01,0xA0,0x00,0xC0,0x00,0x40, // 62
  0x00,0x00,0x04,0x00,0xC4,0x02,0x24,0x00,0x18, // 63
  0x00,0x00,0xE0,0x03,0x10,0x04,0xC8,0x09,0x28,0x0A,0x28,0x0A,  // 64
  0x00,0x02,0xE0,0x01,0x9C,0x00,0x9C,0x00,0xE0,0x01,0x00,0x02,  // 65
  0x00,0x00,0xFC,0x03,0x24,0x02,0x24,0x02,0x58,0x02,0xC0,0x01,  // 66
  0x00,0x00,0xF8,0x01,0x0C,0x03,0x04,0x02,0x04,0x02,0x0C,0x03,  // 67
  0x00,0x00,0xFC,0x03,0x04,0x02,0x04,0x02,0x0C,0x03,0xF0,0x01,  // 68
  0x00,0x00,0xFC,0x03,0x24,0x02,0x24,0x02,0x24,0x02,  // 69
  0x00,0x00,0xFC,0x03,0x24,0x00,0x24,0x00,0x24, // 70
  0x00,0x00,0xF0,0x01,0x0C,0x03,0x04,0x02,0x44,0x02,0xCC,0x03,  // 71
  0x00,0x00,0xFC,0x03,0x20,0x00,0x20,0x00,0x20,0x00,0xFC,0x03,  // 72
  0x00,0x00,0x04,0x02,0x04,0x02,0xFC,0x03,0x04,0x02,0x04,0x02,  // 73
  0x00,0x00,0x00,0x02,0x04,0x02,0x04,0x02,0xFC,0x01,  // 74
  0x00,0x00,0xFC,0x03,0x20,0x00,0x70,0x00,0x88,0x01,0x04,0x02,  // 75
  0x00,0x00,0xFC,0x03,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,  // 76
  0x00,0x00,0xFC,0x03,0x3C,0x00,0x60,0x00,0x1C,0x00,0xFC,0x03,  // 77
  0x00,0x00,0xFC,0x03,0x1C,0x00,0x60,0x00,0x80,0x03,0xFC,0x03,  // 78
  0x00,0x00,0xF8,0x01,0x04,0x02,0x04,0x02,0x0C,0x03,0xF8,0x01,  // 79
  0x00,0x00,0xFC,0x03,0x44,0x00,0x44,0x00,0x44,0x00,0x38, // 80
  0x00,0x00,0xF8,0x01,0x04,0x02,0x04,0x02,0x0C,0x07,0xF8,0x01,  // 81
  0x00,0x00,0xFC,0x03,0x44,0x00,0x44,0x00,0xB8,0x01,0x00,0x02,  // 82
  0x00,0x00,0x38,0x02,0x24,0x02,0x24,0x02,0x44,0x02,0xCC,0x01,  // 83
  0x00,0x00,0x04,0x00,0x04,0x00,0xFC,0x03,0x04,0x00,0x04, // 84
  0x00,0x00,0xFC,0x01,0x00,0x02,0x00,0x02,0x00,0x02,0xFC,0x01,  // 85
  0x04,0x00,0x78,0x00,0x80,0x03,0x80,0x03,0x78,0x00,0x04, // 86
  0x7C,0x00,0x80,0x03,0xF0,0x00,0x70,0x00,0xC0,0x03,0x3C, // 87
  0x00,0x02,0x0C,0x01,0xF0,0x00,0x70,0x00,0x8C,0x01,0x00,0x02,  // 88
  0x00,0x00,0x0C,0x00,0x30,0x00,0xE0,0x03,0x10,0x00,0x0C, // 89
  0x00,0x00,0x04,0x03,0x84,0x02,0x64,0x02,0x1C,0x02,0x0C,0x02,  // 90
  0x00,0x00,0x00,0x00,0xFC,0x0F,0x04,0x08,  // 91
  0x00,0x00,0x0C,0x00,0x70,0x00,0x80,0x01,0x00,0x06,  // 92
  0x00,0x00,0x00,0x00,0x04,0x08,0xFC,0x0F,  // 93
  0x00,0x00,0x18,0x00,0x04,0x00,0x04,0x00,0x18, // 94
  0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,0x00,0x10,  // 95
  0x00,0x00,0x00,0x00,0x06, // 96
  0x00,0x00,0x90,0x01,0x50,0x02,0x50,0x02,0x50,0x02,0xE0,0x03,  // 97
  0x00,0x00,0xFC,0x03,0x10,0x02,0x10,0x02,0x10,0x02,0xE0,0x01,  // 98
  0x00,0x00,0xE0,0x01,0x10,0x02,0x10,0x02,0x10,0x02,  // 99
  0x00,0x00,0xE0,0x01,0x10,0x02,0x10,0x02,0x10,0x02,0xFC,0x03,  // 100
  0x00,0x00,0xE0,0x01,0x50,0x02,0x50,0x02,0x50,0x02,0x60,0x02,  // 101
  0x00,0x00,0x10,0x00,0xFC,0x03,0x14,0x00,0x14, // 102
  0x00,0x00,0xE0,0x01,0x10,0x0A,0x10,0x0A,0x10,0x0A,0xF0,0x07,  // 103
  0x00,0x00,0xFC,0x03,0x10,0x00,0x10,0x00,0xF0,0x03,  // 104
  0x00,0x00,0x00,0x02,0x10,0x02,0xF4,0x03,0x00,0x02,0x00,0x02,  // 105
  0x00,0x00,0x10,0x08,0x10,0x08,0xF4,0x07,  // 106
  0x00,0x00,0xFC,0x03,0x40,0x00,0xA0,0x00,0x10,0x03,  // 107
  0x00,0x00,0x04,0x00,0xFC,0x03,0x00,0x02,0x00,0x02,  // 108
  0x00,0x00,0xF0,0x03,0x10,0x00,0xF0,0x03,0x10,0x00,0xF0,0x03,  // 109
  0x00,0x00,0xF0,0x03,0x10,0x00,0x10,0x00,0xF0,0x03,  // 110
  0x00,0x00,0xE0,0x01,0x10,0x02,0x10,0x02,0x10,0x02,0xE0,0x01,  // 111
  0x00,0x00,0xF0,0x0F,0x10,0x02,0x10,0x02,0x10,0x02,0xE0,0x01,  // 112
  0x00,0x00,0xE0,0x01,0x10,0x02,0x10,0x02,0x10,0x02,0xF0,0x0F,  // 113
  0x00,0x00,0x00,0x00,0xF0,0x03,0x20,0x00,0x10,0x00,0x10, // 114
  0x00,0x00,0x70,0x02,0x50,0x02,0x90,0x02,0x90,0x01,  // 115
  0x00,0x00,0x10,0x00,0xFC,0x03,0x10,0x02,0x10,0x02,  // 116
  0x00,0x00,0xF0,0x03,0x00,0x02,0x00,0x02,0xF0,0x03,  // 117
  0x00,0x00,0x70,0x00,0x80,0x03,0x80,0x03,0x70, // 118
  0x70,0x00,0x80,0x03,0xC0,0x01,0xC0,0x01,0xC0,0x03,0x30, // 119
  0x00,0x00,0x10,0x03,0xE0,0x00,0xE0,0x00,0x10,0x03,  // 120
  0x00,0x00,0x70,0x08,0x80,0x0D,0x80,0x03,0x70, // 121
  0x00,0x00,0x10,0x03,0x90,0x02,0x50,0x02,0x30,0x02,  // 122
  0x00,0x00,0x80,0x00,0x80,0x00,0x7C,0x0F,0x04,0x08,  // 123
  0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x0F,  // 124
  0x00,0x00,0x00,0x00,0x04,0x08,0x7C,0x0F,0x80,0x00,0x80, // 125
  0x00,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x40,0x00,0x40, // 126
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 127
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 128
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 129
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 130
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 131
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 132
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 133
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 134
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 135
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 136
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 137
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 138
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 139
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 140
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 141
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 142
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 143
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 144
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 145
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 146
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 147
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 148
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 149
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 150
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 151
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 152
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 153
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 154
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 155
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 156
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 157
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 158
  0xF8,0x0F,0x08,0x08,0x08,0x08,0x08,0x08,0xF8,0x0F,  // 159
  0x00,0x00,0x00,0x00,0x00,0x00,0xE4,0x03,  // 161
  0x00,0x00,0xE0,0x01,0x10,0x02,0xFC,0x07,0x10,0x02,  // 162
  0x00,0x00,0x40,0x02,0xF8,0x03,0x44,0x02,0x44,0x02,0x04,0x02,  // 163
  0x00,0x00,0xE0,0x01,0x20,0x01,0x20,0x01,0xE0,0x01,  // 164
  0x00,0x00,0x6C,0x00,0x70,0x00,0xC0,0x03,0x70,0x00,0x6C, // 165
  0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x0F,  // 166
  0x00,0x00,0x7C,0x04,0x94,0x04,0x24,0x05,0xC4,0x03,  // 167
  0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04, // 168
  0xE0,0x00,0xF8,0x03,0x18,0x03,0x18,0x03,0x18,0x03,0xE0, // 169
  0x00,0x00,0xF4,0x00,0xD4,0x00,0xFC, // 170
  0x00,0x00,0xC0,0x00,0xA0,0x00,0xD0,0x01,0xE0,0x00,0x10,0x01,  // 171
  0x00,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0xE0, // 172
  0x00,0x00,0x00,0x00,0x80,0x00,0x80, // 173
  0xE0,0x00,0x18,0x03,0xF8,0x02,0x78,0x02,0x18,0x03,0xE0, // 174
  0x00,0x00,0x00,0x00,0x04,0x00,0x04, // 175
  0x00,0x00,0x18,0x00,0x24,0x00,0x18, // 176
  0x00,0x00,0x40,0x02,0x40,0x02,0xF0,0x02,0x40,0x02,0x40,0x02,  // 177
  0x00,0x00,0x00,0x00,0x64,0x00,0x54,0x00,0x4C, // 178
  0x00,0x00,0x00,0x00,0x44,0x00,0x54,0x00,0x6C, // 179
  0x00,0x00,0x00,0x00,0x04,0x00,0x02, // 180
  0x00,0x00,0xF0,0x0F,0x00,0x02,0x00,0x02,0xF0,0x03,0x00,0x02,  // 181
  0x00,0x00,0x38,0x00,0x7C,0x00,0xFC,0x07,0xFC,0x07,  // 182
  0x00,0x00,0x00,0x00,0x40, // 183
  0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x0C,  // 184
  0x00,0x00,0x00,0x00,0x44,0x00,0x7C,0x00,0x40, // 185
  0x00,0x00,0xB8,0x00,0xC4,0x00,0xC4,0x00,0xB8, // 186
  0x00,0x00,0x20,0x01,0xC0,0x00,0x20,0x01,0xC0, // 187
  0x00,0x00,0x52,0x00,0x5E,0x00,0x30,0x03,0xA0,0x07,0x00,0x02,  // 188
  0x00,0x00,0xA4,0x00,0xBC,0x00,0xE0,0x0C,0xC0,0x0A,0xC0,0x09,  // 189
  0x00,0x00,0x62,0x00,0x66,0x03,0x5A,0x03,0xC0,0x07,0x20,0x02,  // 190
  0x00,0x00,0x80,0x01,0x40,0x02,0x34,0x02,0x00,0x02,  // 191
  0x00,0x02,0xE0,0x01,0x9D,0x00,0x9E,0x00,0xE0,0x01,0x00,0x02,  // 192
  0x00,0x02,0xE0,0x01,0x9E,0x00,0x9D,0x00,0xE0,0x01,0x00,0x02,  // 193
  0x00,0x02,0xE0,0x01,0x9D,0x00,0x9D,0x00,0xE2,0x01,0x00,0x02,  // 194
  0x00,0x02,0xE0,0x01,0x9D,0x00,0x9D,0x00,0xE1,0x01,0x00,0x02,  // 195
  0x00,0x00,0x80,0x03,0xF9,0x00,0x84,0x00,0xF9,0x00,0x80,0x03,  // 196
  0x00,0x00,0x80,0x03,0xFB,0x00,0x8D,0x00,0xF3,0x00,0x80,0x03,  // 197
  0x00,0x03,0xF8,0x00,0x84,0x00,0xFC,0x03,0x24,0x02,0x24,0x02,  // 198
  0x00,0x00,0xF8,0x01,0x0C,0x03,0x04,0x0B,0x04,0x0F,0x0C,0x01,  // 199
  0x00,0x00,0xFC,0x03,0x25,0x02,0x26,0x02,0x24,0x02,  // 200
  0x00,0x00,0xFC,0x03,0x26,0x02,0x25,0x02,0x24,0x02,  // 201
  0x00,0x00,0xFC,0x03,0x25,0x02,0x25,0x02,0x26,0x02,  // 202
  0x00,0x00,0xFC,0x03,0x25,0x02,0x24,0x02,0x25,0x02,0x24,0x02,  // 203
  0x00,0x00,0x04,0x02,0x04,0x02,0xFF,0x03,0x04,0x02,0x04,0x02,  // 204
  0x00,0x00,0x04,0x02,0x04,0x02,0xFF,0x03,0x04,0x02,0x04,0x02,  // 205
  0x00,0x00,0x04,0x02,0x06,0x02,0xFD,0x03,0x06,0x02,0x04,0x02,  // 206
  0x00,0x00,0x04,0x02,0x05,0x02,0xFC,0x03,0x05,0x02,0x04,0x02,  // 207
  0x20,0x00,0xFC,0x03,0x24,0x02,0x04,0x02,0x0C,0x03,0xF0,0x01,  // 208
  0x00,0x00,0xFC,0x03,0x1D,0x00,0x61,0x00,0x81,0x03,0xFC,0x03,  // 209
  0x00,0x00,0xF8,0x01,0x04,0x02,0x07,0x02,0x0C,0x03,0xF8,0x01,  // 210
  0x00,0x00,0xF8,0x01,0x04,0x02,0x07,0x02,0x0C,0x03,0xF8,0x01,  // 211
  0x00,0x00,0xF8,0x01,0x06,0x02,0x05,0x02,0x0E,0x03,0xF8,0x01,  // 212
  0x00,0x00,0xF8,0x01,0x05,0x02,0x05,0x02,0x0D,0x03,0xF8,0x01,  // 213
  0x00,0x00,0xF8,0x01,0x05,0x02,0x04,0x02,0x0D,0x03,0xF8,0x01,  // 214
  0x00,0x00,0x30,0x01,0xE0,0x00,0xE0,0x00,0x30,0x01,  // 215
  0x00,0x02,0xF8,0x01,0x84,0x03,0x64,0x02,0x1C,0x02,0xFC,0x01,  // 216
  0x00,0x00,0xFC,0x01,0x00,0x02,0x03,0x02,0x00,0x02,0xFC,0x01,  // 217
  0x00,0x00,0xFC,0x01,0x00,0x02,0x03,0x02,0x00,0x02,0xFC,0x01,  // 218
  0x00,0x00,0xFC,0x01,0x02,0x02,0x01,0x02,0x02,0x02,0xFC,0x01,  // 219
  0x00,0x00,0xFC,0x01,0x01,0x02,0x00,0x02,0x01,0x02,0xFC,0x01,  // 220
  0x00,0x00,0x0C,0x00,0x30,0x00,0xE1,0x03,0x10,0x00,0x0C, // 221
  0x00,0x00,0xFC,0x03,0x90,0x00,0x90,0x00,0x90,0x00,0x60, // 222
  0x00,0x00,0xF8,0x03,0x04,0x00,0x64,0x02,0x5C,0x02,0x80,0x01,  // 223
  0x00,0x00,0x90,0x01,0x52,0x02,0x54,0x02,0x50,0x02,0xE0,0x03,  // 224
  0x00,0x00,0x90,0x01,0x50,0x02,0x58,0x02,0x56,0x02,0xE0,0x03,  // 225
  0x00,0x00,0x90,0x01,0x5C,0x02,0x52,0x02,0x54,0x02,0xE0,0x03,  // 226
  0x00,0x00,0x90,0x01,0x54,0x02,0x54,0x02,0x54,0x02,0xE0,0x03,  // 227
  0x00,0x00,0x90,0x01,0x54,0x02,0x50,0x02,0x54,0x02,0xE0,0x03,  // 228
  0x00,0x00,0x90,0x01,0x56,0x02,0x59,0x02,0x56,0x02,0xE0,0x03,  // 229
  0x00,0x00,0xD0,0x03,0x50,0x02,0xE0,0x01,0x50,0x02,0x70,0x02,  // 230
  0x00,0x00,0xE0,0x01,0x10,0x03,0x10,0x0F,0x10,0x01,  // 231
  0x00,0x00,0xE0,0x01,0x52,0x02,0x54,0x02,0x50,0x02,0x60,0x02,  // 232
  0x00,0x00,0xE0,0x01,0x50,0x02,0x54,0x02,0x52,0x02,0x60,0x02,  // 233
  0x00,0x00,0xE0,0x01,0x54,0x02,0x52,0x02,0x54,0x02,0x60,0x02,  // 234
  0x00,0x00,0xE0,0x01,0x54,0x02,0x50,0x02,0x54,0x02,0x60,0x02,  // 235
  0x00,0x00,0x00,0x02,0x16,0x02,0xF8,0x03,0x00,0x02,0x00,0x02,  // 236
  0x00,0x00,0x00,0x02,0x10,0x02,0xF4,0x03,0x02,0x02,0x00,0x02,  // 237
  0x00,0x00,0x00,0x02,0x14,0x02,0xF6,0x03,0x08,0x02,0x00,0x02,  // 238
  0x00,0x00,0x00,0x02,0x14,0x02,0xF0,0x03,0x04,0x02,0x00,0x02,  // 239
  0x00,0x00,0xE0,0x01,0x14,0x02,0x1C,0x02,0x14,0x02,0xE0,0x01,  // 240
  0x00,0x00,0xF0,0x03,0x14,0x00,0x14,0x00,0xF0,0x03,  // 241
  0x00,0x00,0xE0,0x01,0x12,0x02,0x14,0x02,0x10,0x02,0xE0,0x01,  // 242
  0x00,0x00,0xE0,0x01,0x10,0x02,0x14,0x02,0x12,0x02,0xE0,0x01,  // 243
  0x00,0x00,0xE0,0x01,0x14,0x02,0x12,0x02,0x14,0x02,0xE0,0x01,  // 244
  0x00,0x00,0xE0,0x01,0x14,0x02,0x14,0x02,0x14,0x02,0xE0,0x01,  // 245
  0x00,0x00,0xE0,0x01,0x14,0x02,0x10,0x02,0x14,0x02,0xE0,0x01,  // 246
  0x40,0x00,0x40,0x00,0x50,0x01,0x40,0x00,0x40, // 247
  0x00,0x00,0xE0,0x03,0x90,0x03,0x50,0x02,0x30,0x02,0xF0,0x01,  // 248
  0x00,0x00,0xF2,0x03,0x04,0x02,0x08,0x02,0xF0,0x03,  // 249
  0x00,0x00,0xF0,0x03,0x08,0x02,0x04,0x02,0xF0,0x03,  // 250
  0x00,0x00,0xF0,0x03,0x04,0x02,0x04,0x02,0xF0,0x03,  // 251
  0x00,0x00,0xF0,0x03,0x04,0x02,0x00,0x02,0xF4,0x03,  // 252
  0x00,0x00,0x70,0x08,0x84,0x0D,0x82,0x03,0x70, // 253
  0x00,0x00,0xFC,0x0F,0x10,0x02,0x10,0x02,0x10,0x02,0xE0,0x01,  // 254
  0x00,0x00,0x30,0x08,0xC4,0x08,0x00,0x07,0xC4,0x01,0x30  // 255
};

