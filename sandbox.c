#include <stdio.h>
#include <stdlib.h>
// WAP to print prime numbers upto 300.
int main()
{
    system("clear");
    int i, j, rows, k, m = 1;
    printf(" Enter a number to define the rows: ");
    scanf("%d", &rows);
    printf("\n");
    
    for ( i =1; i <= rows; i++)  
    {  
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");  
    }  
}