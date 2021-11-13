#include<stdio.h>
void main()
{
    int oct;
    printf("Enter aany octal number : ");
    scanf("%d",&oct);
    int num=0,temp=1;
    while(oct!=0)
    {
        int rem=oct%10;
        num=num+rem*temp;
        temp=temp*8;
        oct=oct/10;
    }

    printf("%d",num);
}