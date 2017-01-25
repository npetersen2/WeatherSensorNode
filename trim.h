void trim(char* in) {  
  // if all spaces, return ""
  bool all_spaces = true;
  for (int i = 0; i < strlen(in); i++) {
    if (in[i] != ' ') {
      all_spaces = false;
      break;
    }
  }
  if (all_spaces) {
    in = 0;
    return;
  }
  
  int spaces_in_front = 0;
  for (int i = 0; i < strlen(in); i++) {
    if (in[i] != ' ') {
      spaces_in_front = i;
      break;
    }
  }
  
  int spaces_in_rear = 0;
  for (int i = strlen(in) - 1; i >= 0; i--) {
    if (in[i] != ' ') {
      spaces_in_rear = strlen(in) - 1 - i;
      break;
    }
  }

  char _ret[strlen(in) - spaces_in_front - spaces_in_rear + 1];
  _ret[strlen(in) - spaces_in_front - spaces_in_rear] = 0;

  
  for (int i = spaces_in_front, j = 0; i < strlen(in) - spaces_in_rear; i++, j++) {
    _ret[j] = in[i]; 
  }

  strcpy(in, _ret);
}
