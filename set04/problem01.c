#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den,int res);
int main(){
  int num1,den1,num2,den2;
  int res_num;
  int res_den;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&res_num,&res_den);
}
void input(int *num1, int *den1, int *num2, int *den2){
  printf("enter num1");
  scanf("%d",num1);
  printf("enter num2");
  scanf("%d",num2);
  printf("enter den1");
  scanf("%d",den1);
  printf("enter den2");
  scanf("%d",den2);
  
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den){
  int max;
   max = (num1 > num2) ? num1 : num2;
    while (1) {
        if ((max % num1 == 0) && (max % num2 == 0)) {
         return max;
        }
        ++max;
    }
    *res_den=max;
    *res_num=(num1*max)/den1+(num2*max)/den2;
  void output(num1,den1,num2,den2,res_num,res_den);
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den,int res){
  printf("the sum of %d/%d and %d/%d is %d/%d",num1,den1,num2,den2,res_num,res_den);
}