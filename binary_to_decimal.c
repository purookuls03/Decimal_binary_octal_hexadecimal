#include<stdio.h>
void main()
{
    int bin;
    printf("Enter any binary : ");
    scanf("%d",&bin);

    int rem,deci=0,temp=1;

    while(bin!=0)
    {
        rem=bin%10;
        deci = deci + rem*temp;
        temp*=2;
        bin/=10;
    }

    printf("%d",deci);
}