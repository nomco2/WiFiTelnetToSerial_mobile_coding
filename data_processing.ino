void string_processing(String datas){
  int length_datas = datas.length();
  char datas2[length_datas];

  datas.toCharArray(datas2,length_datas);


  int open_curly_brackets = 0; //중괄호 열기 개수
  int close_curly_brackets = 0; //중괄호 닫기 개수
  int first_curly_brackets_start_number = 0; //재귀함수에 넣기위한 처음 중괄호가 시작되는 array number
    
  for(int i =0; i< length_datas; i++){
//    Serial.print(datas2[i]);


    if(datas2[i] == '('){
      int codition_start = i;
      while(datas2[i++] != ')'){
//        Serial.print(datas2[i]);
      }
//      Serial.println();
      int codition_end = i-1;
      condition_checker(datas2, codition_start, codition_end);
      
    }
    //중괄호 찾아서 재귀함수 집어넣는 것
    if(datas2[i] == '{'){
      open_curly_brackets++;
    }else if(datas2[i] == '}'){
      close_curly_brackets++;
      
      //열고 닫는 개수가 같아지면 = 더이상 포함되어 있는게 없으면
      if(open_curly_brackets == close_curly_brackets){
        
      }

      //재귀함수로 돌리고 리셋
      open_curly_brackets = 0;
      close_curly_brackets  = 0;
    }
  }//char 분석하는 for문 끝


}//string_processing 함수 끝


void recursion_processing(char *datas2){
  
}

boolean condition_checker(char *datas2, int condition_start, int condition_end){
    
      String variables[10];
      int variable_counter = 0;
      for(int i= condition_start+1; i< condition_end; i++){
//          Serial.print(datas2[i]);
            if(datas2[i] == ' '){
              variable_counter++;
            }else{
              variables[variable_counter] += datas2[i];
            }
            
        }
        Serial.println(variables[0]);
        Serial.println(variables[1]);
        Serial.println(variables[2]);


      switch(datas2[condition_start-2]){
        case 'f' : //if문
          
          break;
        case 'r' : //for문
          break;
        case 'e' : //while문

          break;
        
      }

        
      return false;
}


