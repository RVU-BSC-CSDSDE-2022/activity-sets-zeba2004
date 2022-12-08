#include<stdio.h>
#include<math.h>
void input_camel_details(float *stomach_radius, float *height, float *length);
float find_weight(float stomach_radius, float height, float length);
void output(float stomach_radius, float height, float length, float weight);
int main(){
  float stomach_radius,height,length,weight;
    input_camel_details(&stomach_radius,&height,&length);
    weight=find_weight(stomach_radius, height, length);
    output(stomach_radius, height,length, weight);
  
}
void input_camel_details(float *stomach_radius, float *height, float *length){
   
  printf("enter stomach_radius");
  scanf("%f",stomach_radius);
   
  printf("enter height");
  scanf("%f",height);
    
  printf("enter length");
  scanf("%f",length); 
  
}
float find_weight(float stomach_radius, float height, float length){
  float pi=3.14;
  float weight;
  // float(height)*(length);
  // float (sqrt(3)*(height)*(length));
  weight=pi*pow(stomach_radius,3)*sqrt(height * length);
  return weight;

}
void output(float stomach_radius, float height, float length, float weight){
  printf("The weight of the camel with stomach_radius:%f, height: %f, length: %f is : %f",stomach_radius,height,length,weight);
  
}