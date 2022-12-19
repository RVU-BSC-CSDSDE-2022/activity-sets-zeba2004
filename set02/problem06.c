#include<stdio.h>
void input_string(int *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
int main(){
   int a;
  char str;
  char rev_str;
  char reverse_a;
  input_string(&a);
  
  output(&a,&reverse_a);
}
void input_string(int *a){

  printf("enter length of string a:");
  scanf("%d",a);
  str_reverse(&str,&rev_str);
}
void str_reverse(char *str, char *rev_str){
  
  printf("enter str");
  scanf("%s",str);
  for(int i=0;i<a/2;i++){
    rev_str=str[i];
    str[i]=str[n-1-i];
    str[n-1-i]=rev_str;
  }
  output(&a,&reverse_a);
}
void output(char *a, char *reverse_a){
  printf("%s",str);
}