#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
int main(){
  float x1,y1,x2,y2,x3,y3;
  int result;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  result=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
  printf("enter x1,y1");
  scanf("%f %f",x1,y1);
   printf("enter x2,y2");
  scanf("%f %f",x2,y2);
   printf("enter x3,y3");
  scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
  float a,b,c;
  int result;
  a=sqrt( (x2-x1) * (x2-x1) - (y2-y1) * (y2-y1));
  b=sqrt( (x3-x2) * (x3-x2) - (y3-y2) * (y2-y1));
  c=sqrt( (x3-x1) * (x3-x1) - (y3-y1) * (y3-y1));
  if(a+b>c || b+c>a || c+a>b){
     result=0; 
  }
  else{
      result=1;
   }
  return result;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
  if(result=0){
    printf("triangle with points %f,%f and %f,%f and %f,%f is triangle",x1,y1,x2,y2,x3,y3);
  }
  else {
    printf("not a triangle");
  }
}