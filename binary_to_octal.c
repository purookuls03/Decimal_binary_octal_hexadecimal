#include<stdio.h>
void main()
{
    int bin;
    printf("Enter any binary : ");
    scanf("%d",&bin);
    int num=0, temp=1;
    while(bin!=0)
    {
        int rem_binary=bin%10;
        num=num+rem_binary*temp;
        temp=temp*2;
        bin=bin/10;
    }
    int arr[15],i=0,j; 
    while(num!=0)
    {
        int rem_octal=num%8;
        arr[i]=rem_octal;
        i++;
        num=num/8;
    }
    printf("Binary to octal = ");
    
    for(j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }

}