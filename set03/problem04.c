#include<stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int main(){
  int n;
  int fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
}
int input(){
  int n;
  printf("enter n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n){
 int n1=0;
int n2=1;
 int fibo;
  int i;
  for(i=2;i<n;i++){
    fibo=n2+n1;}
    // printf("%d",fibo);
    n1=n2;
    n2=fibo;
  
  return fibo;
}
void output(int n, int fibo){
  printf("%d",fibo(5));
}