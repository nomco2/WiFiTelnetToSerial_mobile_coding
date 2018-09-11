
String delete_space_and_etc(String string_data){
  char processing_char[10];
  String return_string;
  string_data.toCharArray(processing_char, string_data.length());
  for(int i = 0; i<string_data.length(); i++){
    if(processing_char[i] != ' '){
      if(processing_char[i] != '{'){
        if(processing_char[i] != '\n'){
          if(processing_char[i] != ';'){
            return_string += processing_char[i];
          }
        }
      }
    }
  }
  return return_string;
}


int string_to_digital_pin(int pin_num){
  switch(pin_num){
    case 0:
      return D0;
      break;
    case 1:
      return D1;
      break;
    case 2:
      return D2;
      break;
    case 3:
      return D3;
      break;
    case 4:
      return D4;
      break;
    case 5:
      return D5;
      break;
    case 6:
      return D6;
      break;
    case 7:
      return D7;
      break;
    case 8:
      return D8;
      break;
    case 9:
      return D9;
      break;
    case 10:
      return D10;
      break;
  }
}




