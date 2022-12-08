#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main(){
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene( a, b, c);
  output( a, b,c, isscalene);
}
input_side(){
  int n;
  printf("enter n");
  scanf("%d",&n);
  return n;
  
}
int check_scalene(int a, int b, int c){
   int isscalene;
  
  if(a==b || b==c || c==a){
    isscalene=1;
    }
    
  else{
   isscalene=2;
  }
  
   return isscalene;
  
}
void output(int a, int b, int c, int isscalene){
  if(isscalene==1){
    printf("The triangle with sides %d %d and %d is notscalene",a,b,c);}
    
  else{
   printf("The triangle with sides %d %d and %d is scalene",a,b,c);}
  
  
  
}