#include <stdio.h>
#include <stdlib.h>

// Programme 11
// WAMDP for calculator functions of addition, subtraction, multiplication
// division, average and persentage

int main()
{
    system("clear");
    int s = 1, a = 0, b = 0;
    printf("Enter 1 for addition. \n");
    printf("Enter 2 for subtraction. \n");
    printf("Enter 3 for multiplication. \n");
    printf("Enter 4 for division. \n");
    printf("Enter 5 for average. \n");
    printf("Enter 6 for persentage. \n");
    printf("Enter your choice: ");
    scanf("%d", &s);
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    switch (s)
    {
    case 1:
        printf("The result is: %d \n", (a + b));
        break;

    case 2:
        printf("The result is: %d \n", (a - b));
        break;

    case 3:
        printf("The result is: %d \n", (a*b));
        break;

    case 4:
        printf("The result is: %d \n", (a/b));
        break;

    case 5:
        printf("The result is: %d \n", ((a+b)/2));
        break;

    case 6:
        printf("The result is: %d Percent.\n", ((a*100)/b));
        break;

    default:
        break;
    }
    return 0;
}