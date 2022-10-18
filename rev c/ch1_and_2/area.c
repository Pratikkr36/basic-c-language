#include<stdio.h>
int main(){
    float s,r;
    printf("Enter side of square: ");
    scanf("%f",&s);
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    printf("Area of square is %f\n", s*s);
    printf("Area of circle is %f\n", 3.14*r*r);
    return 0;
}