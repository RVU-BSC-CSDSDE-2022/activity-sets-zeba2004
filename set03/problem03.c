#include<stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);
int main(){
  int n;
  int result;
  n=input_number();
  result=is_prime(n);
  output(n,result);
}
int input_number(){
  int n;
  printf("enter n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n){
  int result=0;
  for(int i=1;i<=9;i++){
    if(n%i==0){
      result=result+1;
      if(i==3){
        break;
      }
    }
    else{
      result=0;
    }
  }
  return result;
}
void output(int n, int result){
  if(result==1){
    printf("%d is prime",n);   
  }
  else{
    printf("%d is not prime",n);
  }
}