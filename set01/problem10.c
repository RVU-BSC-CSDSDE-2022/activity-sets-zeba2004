#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
int main(){
  char string1[50];
  char string2[50];
  int result;
  input_two_strings(&string1,&string2);
  result=stringcompare(&string1,&string2);
  output(&string1,&string2,result);
}
void input_two_strings(char *string1, char *string2){
  printf("enter string1 :");
  scanf("%s",string1);
  printf("enter string2 :");
  scanf("%s",string2);
}
int stringcompare(char *string1, char *string2){
  int result;
  for(int i=0;i<50;i++){
  if(string1[i]>string2[i]){
    result=+1;
  }
  else if(string1[i]<string2[i]){
    result=-1;
  }
  else{
    result=0;
  }  }
  return result;
  }
void output(char *string1, char *string2, int result){
  if(result==0){
    printf("same");
  }
  else if(result==-1){
    printf("%s is greater than %s",string2,string1);
  }