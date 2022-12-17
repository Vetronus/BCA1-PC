#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Programme 12
// WAMDP for armstrong number, prime number and reverse integer

int main()
{
    system("clear");
    int s = 0, n = 0;
    int sum = 0, temp = 0, p = 0, backup = 0;
    printf("Enter 1 to calculate armstrong number. \n");
    printf("Enter 2 to display prime number upto n. \n");
    printf("Enter 3 to display reverse of an integer. \n");
    printf("Enter your choice: ");
    scanf("%d", &s);
    printf("Enter the number: ");
    scanf("%d", &n);
    switch (s)
    {
    case 1: // armstrong
        temp = n;
        backup = n;
        while (temp > 0)
        {
            temp = temp / 10;
            p++;
        }
        while (n > 0)
        {
            temp = n % 10;
            n /= 10;
            sum += pow(temp, p);
        }

        if (sum == backup)
            printf("%d is an armstrong number. \n", backup);
        else
            printf("%d is not an armstrong number. \n", backup);
        break;

    case 2: // prime
        temp = 1;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    temp = 0;
                    break;
                }
            }
            if (temp)
                printf("%d \n", i);
            temp = 1;
        }
        break;

    case 3:
        backup = n;
        while(n>0){
            sum = (sum*10)+(n%10);
            n /= 10;
        }
        printf("The reverse of %d is %d \n", backup, sum);
        break;

    default: // reverse
        break;
    }
    return 0;
}