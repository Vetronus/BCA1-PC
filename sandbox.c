#include<stdio.h>
#include<stdlib.h>
//WAP to print prime numbers upto 300.
int main(){
    system("clear");
    int prime = 1;
    for(int i=2; i<=300; i++){
        prime = 1;
        for(int j=2; j<i; j++){
            if(i%j == 0){
                prime = 0;
                break;
            }
        }
        if(prime) printf("%d, ");
    }
    printf("\n");
    return 0;
}