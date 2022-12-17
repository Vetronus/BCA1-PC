#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");
    int n=0, min=0, max=0, mid=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int num = (n*2)-1;
    for(int i=0; i<n; i++){
        mid = (num/2)+1;
        min = mid-i;
        max = mid+i;
        for(int j=0; j<=num; j++){
            if(j >= min && j <= max) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}