#include<stdio.h>
int sumofnaturalnumbers1(int n);
int sumofnaturalnumbers2(int n);
int sumofnaturalnumbers3(int n);
int sumofnaturalnumbers4(int n);

int main()
{ 
  int a,b,c,d;
  a=  sumofnaturalnumbers1(5);
  b=  sumofnaturalnumbers2(5);
  c=  sumofnaturalnumbers3(5);
  d=  sumofnaturalnumbers4(5);
  printf("%d\n%d\n%d\n%d",a,b,c,d);
  return 0;
}

int sumofnaturalnumbers1(int n)
{
    return n*(n+1)/2;
}

int sumofnaturalnumbers2(int n)
{
 int sum=0;
 for(int i=1;i<=n;i++)
 {
    sum=sum+i;
 }
 return sum;
}

int sumofnaturalnumbers3(int n)
{
    int j,sum=0;
    for(int i=1;i<=n;i++)
   { 
    for(j=1;j<=i;j++)
    {
        sum++;
    }
   }
   return sum;
}

int sumofnaturalnumbers4(int n)
{
    if (n==1) return 1;
    return n+sumofnaturalnumbers4(n-1);
}
