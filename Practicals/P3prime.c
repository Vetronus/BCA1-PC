#include<stdio.h>
#include<stdlib.h>

// WAP to check weather the number given by the user is a prime number

int main(){
    system("clear");
    int n; 
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n < 2){
        printf("%d is not a prime number. \n", n);
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n%i == 0) {
            printf("%d is not a prime number. \n", n);
            return 0;
        }
    }
    printf("%d is a prime number. \n", n);
    return 0;
}