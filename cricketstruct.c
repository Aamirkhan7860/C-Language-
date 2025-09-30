#include<stdio.h>
#include<string.h>
struct cricket{
    char playername[50];
    char countryname[100];
    int numberofmatchesplayed;
    float battingaverage;
};
void main()
{
    struct cricket p[10];
    int i;
    printf("enter the details of 10 players(name ,country ,matches played ,batting average):\n");
    for(i=0;i<10;i++)
    {
        printf("palyer %d:",i+1);
        scanf("%s%s%d%f",p[i].playername,p[i].countryname,&p[i].numberofmatchesplayed,&p[i].battingaverage);

    }
    printf("players with batting average greater than 50:\n");
    for(i=0;i<10;i++)
    {
        if(p[i].battingaverage>50)
        {
            printf("Name:%s,Country:%s,Matches:%d,Avg:%f\n",p[i].playername,p[i].countryname,p[i].numberofmatchesplayed,p[i].battingaverage);

        }
    }
    
}