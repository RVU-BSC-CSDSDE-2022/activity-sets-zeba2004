#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);

int main(){
  float n,sqrroot,ini,sqr,nw;
  n=input();
  sqrroot =square_root(n);
  output(n,sqrroot);
}
float input(){
  float n;
  printf("enter n:\t");
  scanf("%f",&n);
  return n;
}
float square_root(float n){
float sqr,ini,nw;
ini=n/2;
while(1){
  nw=(ini+(n/ini))/2.0;
  if(nw==ini){
    sqr=nw;
    break;
  }
  else{
    ini=nw;
    
  }
}
  return sqr;}
  
 
  
void output(float n, float sqrroot){
  printf("The square root of number %f = %f\n",n,sqrroot);
  
}