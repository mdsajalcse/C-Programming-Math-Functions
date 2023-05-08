#include<stdio.h>
void main(){
    int num, num1, sum, sub, mul, div, mod ;
    num = 10;
    num1 = 5;
    sum = num + num1;
    sub = num - num1;
    mul = num * num1;
    div = num / num1;
    mod = num % num1;

    printf("Ans of sum is: %d\n" ,sum );
    printf("Ans of sub is: %d\n" ,sub );
    printf("Ans of multiplication is: %d\n" ,mul);
    printf("Ans of division is: %d\n" ,div );
    printf("Ans of mod is: %d" ,mod);
}
