#include<stdio.h>
int main(){
    int num;
    printf("Enter teh number: ");
    scanf("%d", &num);
    for(int i=1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, i*num);
    }
    return 0;
}