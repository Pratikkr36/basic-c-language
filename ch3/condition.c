#include<stdio.h>
void main(){
    int age;
    printf("Emter age: ");
    scanf("%d", &age);
    if(age >= 18){
        printf("adult \n");
        printf("can vote \n");
        printf("can drive \n");
    }
    else{
        printf("not adult \n");
    }
}