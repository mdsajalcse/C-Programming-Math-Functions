#include<stdio.h>
int main(){

  double inputValue;
  int result;
  printf("Enter Your Value:::");
  scanf("%lf",&inputValue);
  result=ceil(inputValue);
  printf("Ceiling Value is::%lf=%d",inputValue,result);


return 0;
}
