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
printf("enter the name");
scanf("%c",name);
}
int has_nice_name(char *c){
  int count=0;
  int count1=0;
  for(int i=0;i<=50;i++){
    if (c=='a'|| c=='e' || c=='o' || c=='i' || c=='u'){
      count++;
    }
    else{
      count1++;
    }
  }
  return count,count1;
  
}
void output(int res){
  int count,count1;
  if(count>=2 && count1>=2){
    res=1;
  }
  else{
    res=0;
  }
  if(res==1){
    printf("The camel has a nice name");
  }
  else{
    printf("The camel does not have a nice name");
  }
}