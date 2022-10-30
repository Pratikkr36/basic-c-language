#include<stdio.h>
int main(){
    printf("Enter the number: ");
    int num;
    scanf("%d", &num);
    int sum = 0;
    for(int i=num; i>=1; i--){
        printf("%d\n",i);
        sum += i;
    }
    printf("%d", sum);
    return 0;
}