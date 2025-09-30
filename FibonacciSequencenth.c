#include<stdio.h>
int Fibonaccisequence(int n);
int Fibonaccisequence1(int n);
int Fibonaccisequence2(int n);
int main()
{
 int x,y,z;
 x=Fibonaccisequence(6);
 y=Fibonaccisequence1(8);
 z=Fibonaccisequence2(6);
 printf("%d\n%d\n%d",x,y,z);
 return 0;
}

int Fibonaccisequence(int n)
{
 if(n==0) return 0;
 if(n==1) return 1;

 return  Fibonaccisequence(n-1) + Fibonaccisequence(n-2);
}

int Fibonaccisequence1(int n)
{
  int arr[n+1];
  arr[0]=0;
  arr[1]=1;
  for(int i=2;i<=n;i++)
   {
      arr[i]=arr[i-1]+arr[i-2];
   }
   return arr[n];
}

int Fibonaccisequence2(int n)
{
  if(n==0) return 0;
  if(n==1) return 1;
  int a,b,c;
  a=0;
  b=1;
  for(int i=2;i<=n;i++)
  {
    c=a+b;
    a=b;
    b=c;
  }
  return c;
}