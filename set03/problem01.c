#include<stdio.h>
void input(float base, float height);
float find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main(){
  float base,height,area;
  input(base,height);
  area = find_area(base,height,&area);
  output(base,height,area);
}
void input(float base, float height){
  
  printf("enter base");
  scanf("%f",base);
  printf("enter height");
  scanf("%f",height);

}
float find_area(float base , float height, float *area){
  area=0.5*(base)*(height);
  return area;
  }
void output(float base, float height, float area){
  printf("The area of the traingle with %f and %f is %f",base,height,area);
}