#include<stdio.h>
void input_camel_details(float *stomach_radius, float *height, float *length);
int find_mood(float stomach_radius, float height, float length);
void output(float stomach_radius, float height, float length, int mood);
int main(){
  int stomach_radius,height,length,mood;
  input_camel_details(&stomach_radius,&height,&length);
    mood=find_mood(stomach_radius, height, length);
  output(stomach_radius, height, length,  mood);
}
void input_camel_details(float *stomach_radius, float *height, float *length){
  
  printf("enter stomach_radius");
   scanf("%f",stomach_radius);
  
  printf("enter height");
  scanf("%f",height);
  
  printf("enter length");
  scanf("%f",length);
  return stomach_radius,height,length;
}
int find_mood(float stomach_radius, float height, float length){
  int mood;
  if(stomach_radius<height && stomach_radius<length){
      return 1;
     
  }
  else if(height<length && height<stomach_radius){
     return 2;
    
    }
  else{
     return 3;
    
    }
  
 
  
  }
void output(float stomach_radius, float height, float length, int mood){
  
  if(mood==1){
    printf("The camel is sick");
    }
    
  
   else if(mood==2){
    printf("The camel is happy");
     }
  
      
   else{
    printf("The camel is tense");
    
  }
 
}