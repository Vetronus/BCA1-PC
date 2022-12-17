#include<stdio.h>
#include<stdlib.h>

// WAP to find the greatest number among the 3 numbers entered by the user

int main(){
    system("clear");
    int n1 = 0, n2=0, n3=0;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("Enter the third number: ");
    scanf("%d", &n3);
    if(n1 > n2 && n1 > n3) printf("First number is the greates: %d \n", n1);
    if(n2 > n1 && n2 > n3) printf("Second number is the greates: %d \n", n2);
    if(n3 > n1 && n3 > n2) printf("Third number is the greates: %d \n", n3);
    else printf("No single number is greates \n");
    return 0;
}