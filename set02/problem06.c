#include<stdio.h>
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);
int main(){
  int n;
  float avg;
  n=input_n();
  int a[n];
  input(n, a);
  
  avg=odd_average( n, a);
  output(avg);
}
 int input_n(){
   int n;
  printf("Enter the size of the array n :\n");
  scanf("%d",&n);
  return n;
}
   
  void input(int n, int a[n]){
  
  printf("enter values of an array\n");
  
  for (int i=0;i<n;i=i+1)
    {
      scanf("%d",&a[i]);
      
    }
    }
    float odd_average(int n, int a[n]){
      int sum=0;
      int count=0;
      float avg;
      for(int i=0;i<n;i++){
        if (a[i]%2!=0){
          sum+=a[i];
          count+=1;
          
        }}
        avg=sum/count;
        return avg;
    
      
    }
    void output(float avg){
      
      
      printf("%f",avg);

    }