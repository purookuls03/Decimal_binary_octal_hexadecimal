#include<stdio.h>
void main()
{
    int num,i=0,j;
    printf("Enter any number : ");
    scanf("%d",&num);
    char hexa[30];
    while(num!=0)
    {
        int rem=num%16;
        if(rem<10)
            rem=rem+48;
        else
            rem=rem+55;
        hexa[i]=rem;
        i++;
        num=num/16;
    }

    printf("Hexadecimal number is ");
    for(j=i-1;j>=0;j--)
    {
        printf("%c",hexa[j]);
    }
}