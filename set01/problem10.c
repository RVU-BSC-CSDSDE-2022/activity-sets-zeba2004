#include<stdio.h>
#include<string.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main(){
  char string1[10],string2[10];
int result;
   input_two_strings( &string1,  &string2);
  result= stringcompare( &string1,  &string2);
 output( &string1,  &string2,  result);
}
void input_two_strings(char *string1, char *string2){
  printf("enter string1:\t");
  scanf("%s",string1);
  printf("enter string2:\t");
  scanf("%s",string2);
   return string1,string2;
}
int stringcompare(char *string1, char *string2){
  int i,result;
  for(i=0;string1[i]!='\0' || string2[i]!='\0';i++){
    if(string1[i]!=string2[i]){
      if(string1[i]<string2[i]){
        return-1;
      }
      else{
        return +1;
      }
    }
   else{
     return 0;
   } 
  }
  
}
void output(char *string1, char *string2, int result){
  if(result==0){
    printf("both words are same");
  }
  else if(result==-1){
    
    printf("%s is greater than %s",string2,string1);
  }
  else{
    printf("%s is greater than %s",string1,string2);
  }
}