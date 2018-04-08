#include<stdio.h>
void add(int x,int y){
    printf(x+y);
}

int main()
{
    add(5,12);
    int x = 22;
    int y = 78;

    printf("x is %d\n", x);
    printf("y is %d\n", y);

    //swapping code...
    int temp = x;
    x = y;
    y = temp;

    printf("x is now %d\n", x);
    printf("y is now %d\n", y);

