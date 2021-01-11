#include<stdio.h>
double findSquareRoot(int inputNumber){
    double guess=inputNumber/2;
    while(guess-(inputNumber/guess)>0.0000000001){
        guess=(guess+(inputNumber/guess))/2;
    }
    return guess;
}
int main(){
    int inputNumber;
    scanf("%d",&inputNumber);
    printf("%f",findSquareRoot(inputNumber));
}

