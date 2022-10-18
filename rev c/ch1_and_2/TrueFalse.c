#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    // int isRaining = 0;
    // int isMonday = 1;
    // printf("%d \n", isMonday && isRaining);
    printf("%d", num>9 && num<100);
    return 0;
}