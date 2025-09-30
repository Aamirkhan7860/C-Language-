#include<stdio.h>
 void main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    int positive=0,negative=0,zero=0;
    int i=1;
    while(i<=a)
    {
         int number;
         printf("enter the number\n");
         scanf("%d",&number);
    
       if(number==0)
       {zero++;}
       else if(number>0)
       {positive++;}
       else if(number<0)
       { negative++;}
        i++;
    }    
    printf("positive number %d\n",positive);
    printf("negative number %d\n",negative);
    printf("zero %d\n",zero);
    
}