#include<stdio.h>
void add(int a,int b)
{
    printf("%d",a+b);
}

int main()
{

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
    add(5,10);

}