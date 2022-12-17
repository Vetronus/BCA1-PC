#include<stdio.h>
#include<stdlib.h>

int factorial(int n){
    if(n == 1) return 1;
    return n*factorial(n-1);
}

int fibo(n){
    if(n==1) return 0;
    if(n==2) return 1;
    return (fibo(n-1) + fibo(n-2));
}

int main(){
    system("clear");
    int n = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, factorial(n));
    printf("The fibonacci of %d is %d\n", n, fibo(n));
    return 0;
}