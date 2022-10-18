#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    printf("%d", ch>=48 && ch<=57);
    return 0;
}