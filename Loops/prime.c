#include<stdio.h>
#include<stdlib.h>

// WAP to print prime numbers
// WAP to check weather the number given by the user is a prime or not
// Print all prime numbers between 1 to n.
int main(){
    system("clear");
    int n = 50; 
    int isPrime = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=2; i<=n; i++){
        for(int j=2; j<i; j++){
            if(i%j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) printf("%d \n", i);
        isPrime = 1;
    }
    return 0;
}


#include<stdio.h>
#include<stdlib.h>

// WAP to print highest prime number
int highestPrime(){
    system("clear");
    int n = INT16_MAX;
    int isPrime = 1;
    for(int i=INT16_MAX; i>0; i--){
        for(int j=2; j<i; j++){
            if(i%j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("%d \n", i);
            return 0;
        }
        isPrime = 1;
    }
    return 0;
}