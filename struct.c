#include<stdio.h>
#include<string.h>
struct emp{
    int eid;
    char ename[20];
    float esal;
}; 
void main()
{ 
 struct emp e;
 e.eid=10;
 strcpy(e.ename,"aamir");
 e.esal=2000.5;
 printf("Emp ID %d\n",e.eid);
 printf("Emp Name %s\n",e.ename);
 printf("Emp sal %f\n",e.esal);

}