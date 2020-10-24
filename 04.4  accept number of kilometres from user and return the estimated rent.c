#include<stdio.h>

int TouristBill(int iKilometer)
{
    if(iKilometer<100)
    {
        return iKilometer*25;
    }
    else if(iKilometer>=100)
    {
        return ((iKilometer-100)*15)+(100*25);
    }
}
int main()
{
    int iKilometer=0,iRent=0;

    printf("Enter The Kilometer => ");
    scanf("%d",&iKilometer);

    iRent=TouristBill(iKilometer);

    printf("Total Kilometer = %d \nTotal Rent = %d ",iKilometer,iRent);

    return 0;
}
