#include<stdio.h>
void swap(int x,int y)   //formal parameter
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x=%d y=%d\n",x,y);
}
int main()
{
    int a=10,b=20;
    swap(a,b);                     //actual parameter         //call by value
    printf("a=%d b=%d",a,b);
    return 0;

}

