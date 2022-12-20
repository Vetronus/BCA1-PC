#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");
    int rows=0, start=0, end=0, mid=0, cols=0;
    printf("Enter the number: ");
    scanf("%d", &rows);
    cols = (rows*2)-1;
    mid = (cols/2)+1; 
    for(int i=0; i<rows; i++){
        start = mid-i;
        end = mid+i;
        for(int j=1; j<=cols; j++){
            if(j >= start && j <= end) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}