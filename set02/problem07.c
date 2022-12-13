#include<stdio.h>
struct triangle
{
float base, altitude, area;
}
typedef struct _triangle 
Triangle input_triangle();
void find_area(Traingle *t);
void output(Triangle t);
int main(){
  triangle base,altitude,area;
  
}
#include <stdio.h>
struct triangle
{
    float base;
    float height;
    float area;
};
typedef struct triangle Triangle;

int main()
{
    Triangle t;
    scanf("%f", &t.base);
    scanf("%d", &t.height);
    return 0;
  }