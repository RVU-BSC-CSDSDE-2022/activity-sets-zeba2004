#include<stdio.h>
#include<math.h>
struct camel {
float radius;
float height;
float length;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel c);
void output(Camel c,float weight);

int main(){
  Camel c;
  c=input();
 float weight;
  weight=find_weight(c);
  output(c,weight);
  return 0;
}
Camel input(){
  Camel c;
  printf("enter the radius");
  scanf("%f",&c.radius);
  printf("enter the height");
  scanf("%f",&c.height);
  printf("enter the length");
  scanf("%f",&c.length);
  return c;
}
float find_weight(Camel c){
  float radius;
  float height;
  float length;
  float pi=3.14;
  float weight;
  weight = pi*pow(c.radius,3)*sqrt(c.height*c.length);
  return weight;}

void output(Camel c,float weight){
  printf("The weight of the camel with radius:%f, height: %f, length: %f is %f",c.radius,c.height,c.length,weight);
}
  