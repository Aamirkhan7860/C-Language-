#include<stdio.h>
#include<string.h>
struct stu{
    int sroll;
    char sname[50];
    int marks[5];
};
void main()
{
    int i,total=0; 
    float avg;
    struct stu s;
    printf("enter sroll");
    scanf("%d",&s.sroll);
     printf("enter sname");
    scanf("%s",&s.sroll);
     printf("enter 5 sub smarks");
    for(i=0;i<5;i++)
    {
        scanf("%d",&s.marks[i]);
        total=total+s.marks[i];
        avg=(float)total/5;
    }
    printf("sroll:-%d\n",s.sroll);
    printf("sname:-%s\n",s.sname);
    printf("stotal marks:-%d\n",total);
    printf("savg:-%f\n",avg);
}
