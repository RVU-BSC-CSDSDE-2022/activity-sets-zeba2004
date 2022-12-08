#include<stdio.h>
void input(char *name);
int has_nice_name(char *c);
void output(int res);
int main(){
  char name;
  char c;
  int res;
input(&name);
res=has_nice_name(&c);
output(res);
}
void input(char *name){
  printf("enter name");
  scanf("%c",&name);
  return name;
}
int has_nice_name(char *c){
  int count=0;
  int sum=0;
  char name;
  if(c[name]=='a'|| c[name]=='e'|| c[name]=='i'|| c[name]=='o'|| c[name]=='u'){
     count++;
  }
  else{
    sum++;
  }
}

void output(int res){
  int count=0;
  int sum=0;
  res=count+sum;
  if(res==4){
    printf("camel is happy");
  }
  else{
    printf("camel is not happy");
  }
}