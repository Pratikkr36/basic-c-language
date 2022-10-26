#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    int demo = num;
    int sum = 0;
    while (num > 0){
        int dig = num%10;
        num = num/10;
        sum = sum + dig*dig*dig;
    }
    if (sum == demo){
        printf("number is armstromg.");
    }
    else{
        printf("number is not armstrong.");
    }
    return 0;
}