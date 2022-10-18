#include<Stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    // if(num%2 == 0){
    //     printf("%d is divisible by 2.", num);
    // }
    // else{
    //     printf("%d is not divisible by 2.", num);
    // }
    printf("%d", num%2 == 0);
    return 0;
}