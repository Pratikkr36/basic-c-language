#include<stdio.h>
int main(){
    char x;
    printf("Enter an alphabet: ");
    scanf("%c", &x);
    if(x>=97 && x<=122){
        printf("Lower case");
    }
    else if(x>=65 && x<=90){
        printf("Upper case");
    }
    else{
        printf("not an english alphabet.");
    }
    return 0;
}