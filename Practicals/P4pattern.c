#include<stdio.h>
#include<stdlib.h>

// WAP to display the pattern upto N rows
// 1
// 2 3
// 4 5 6
// 7 8 9 10


int main(){
    system("clear");
    int rows = 0, n = 0;
    printf("Enter the rows: ");
    scanf("%d", &rows);
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            n++;
            printf("%d ", n);
        }
        printf("\n");
    }
    return 0;
}