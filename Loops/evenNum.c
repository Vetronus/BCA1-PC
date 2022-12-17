#include<stdio.h>
#include<stdlib.h>

// WAP to print even numbers between 1 to 50

int main(){
    system("clear");
    int num = 50;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        if(!(i%2 == 0)) printf("%d \n", i);
    }
    return 0;
}