#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a b c");
    scanf("%d %d %d\n",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d",a);  //check once from youtube
    }
    else if(b>a&&b>c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",c);
    }
    printf("maximum %d",a);
}