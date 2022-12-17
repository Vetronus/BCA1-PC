#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");
    int num = 1, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    switch (num)
    {
        case 1: /* constant-expression */
            /* code */
            printf("1st case");
            break;
        
        case 2:
            printf("2nd case");
            break;

        default:
            break;
    }
    return 0;
}