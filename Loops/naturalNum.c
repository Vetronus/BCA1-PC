#include<stdio.h>
#include<stdlib.h>

// WAP to find the sum of all natural numbers between 1 to n

int main(){
    system("clear");
    int num = 1, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        sum += i;
    }
    printf("The sum is %d \n", sum);
    return 0;
}