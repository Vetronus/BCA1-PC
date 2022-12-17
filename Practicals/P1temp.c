#include<stdio.h>
#include<stdlib.h>

int main(){
    system("clear");
    double temp = 0;
    printf("Enter the tempreture in celcius: ");
    scanf("%lf", &temp);
    temp = (temp*1.8)+32;
    printf("The tempreture in fahrenheit is %lf\n", temp);
    return 0;
}