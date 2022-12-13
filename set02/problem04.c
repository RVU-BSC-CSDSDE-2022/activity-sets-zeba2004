#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int main(){
  int n,sum;
  int i=1;
  int num;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  // sum=sum_composite_numbers(n,a); 
  output(sum);
}
int input_array_size(){
  int n;
  printf("enter size of array n:\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n]){
 printf("\ninput elements of array "); 
    for(int i=0;i<n;i++){ 
        scanf("%d",&a[i]); }
  }
int sum_composite_numbers(int n, int a[n]){
 for(int i=1;i<n;i++){
   if
 }
  
  
  
  

void output(int sum){
  printf("sum is %d",sum);
}