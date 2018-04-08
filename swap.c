#include<stdio.h>

int main()
{

    int x = 27;
    int y = 78;

    printf("x is %d\n", x);
    printf("y is %d\n", y);

    //swapping code...
    int temp = x;
    x = y;
    y = temp;

    printf("x is now %d\n", x);
    printf("y is now %d\n", y);

}