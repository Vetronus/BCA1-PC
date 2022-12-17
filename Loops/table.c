#include<stdio.h>
#include<stdlib.h>

// WAP in C to print table of number given by user using for loop

int main(){
    system("clear");
    int num = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(int i=1; i<=10; i++){
        printf("%d X %d = %d \n", num, i, (num*i));
    }
    return 0;
}