#include<stdio.h>
int main(){
    int a = 2;
    
    if(a=3){
        /* here with single = we are not compairing the values we are assigning the value and since except zero all values are considered as true this statement is true. */
        printf("Number is 1.");
    }
    else{
        printf("number is not 1.");
    }
    return 0;
}