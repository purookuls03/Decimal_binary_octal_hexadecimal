#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char hexa[20];
    printf("Enter any hexadecimal : ");
    scanf("%s", hexa);
    int temp=1,deci=0,i;
    int len = strlen(hexa);
    for(i=len-1;i>=0;i--)
    {
        if(hexa[i]>=9 && hexa[i]<=0)
        {
            deci=deci+(hexa[i]-48)*temp;
            temp=temp*16;
        }
        else if(hexa[i]>='A' && hexa[i]<='F')
        {
            deci=deci+(hexa[i]-55)*temp;
            temp=temp*16;
        }

    }

    printf("%d",deci);
}