
#include<stdio.h>
int main(){
       double userInputValue;
       int result;
       printf("Please input which value You Want to Convert Floor ::");
       scanf("%lf",&userInputValue);
       result=floor(userInputValue);
       printf("Floor Value is::%lf=%d",userInputValue,result);


return 0;
}
