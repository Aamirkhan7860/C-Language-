#include<stdio.h>
#include<string.h>
struct hostel{
    char name[50];
    char address[200];
    float room_charge;
    int no_of_rooms;
};
void main()
{
    int n,i;
    printf("enter the hostels");
    scanf("%d",&n);
    struct hostel hostels[n];
    printf("enter the details of hostel:-");
    for(i=0;i<n;i++)
    {
        printf("hostel%d\n",i+1);
        printf("name:");
        scanf("%s",hostels[i].name);
        printf("address:");
        scanf("%s",hostels[i].address);
        printf("room charge:");
        scanf("%f",&hostels[i].room_charge);
        printf("number of rooms:");
        scanf("%d",&hostels[i].no_of_rooms);
    }    
        printf("\n hostels with room charge more than 1000:\n");
        for(i=0;i<n;i++)
        {
            if(hostels[i].room_charge>1000)
            printf("Hostel name:%s\n",hostels[i].name);
            printf("Hostel address:%s\n",hostels[i].address);
            printf("room charge:%f\n",hostels[i].room_charge);
            printf("Number of rooms:%d\n\n",hostels[i].no_of_rooms);
            
        }
}



        
 


