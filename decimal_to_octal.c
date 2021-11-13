#include<stdio.h>
void main()
{
    int dec,arr[15],i=0;
    printf("Enter any number : ");
    scanf("%d",&dec);

    while(dec!=0)
    {
        int rem=dec%8;
        arr[i]=rem;
        i++;
        dec/=8;
    }

    printf("Octal number = ");
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
}