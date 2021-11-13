#include<stdio.h>
void main()
{
    int oct;
    printf("Enter any octal number :");
    scanf("%d",&oct);
    int num=0,temp=1;
    while(oct!=0)
    {
        int rem_oct=oct%10;
        num=num+rem_oct*temp;
        temp=temp*8;
        oct=oct/10;
    }
    int arr[15],i=0,j;
    while(num!=0)
    {
        int rem_bin=num%2;
        arr[i]=rem_bin;
        i++;
        num=num/2;
    }
    printf("Octal to binary is ");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
}