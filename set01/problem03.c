#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main(){
 int a,b,sum;
 a=input();
 b=input();
 add(a,b);
 output(a,b,sum);
  } 

int input(){
  int n;
  printf("enter n");
  scanf("%d",&n);
  return n;
  }

int add(int a,int b){

}

void output(int a,int b,int sum){
  
 sum=a+b;
 printf("the sum of %d and %d is %d",a,b,sum); 
  return sum;
}