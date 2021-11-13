#include<stdio.h>

void main()
{
    int num,rem=0;
    int arr[15];
    int i=0,j;

    printf("Enter any integer value : ");
    scanf("%d",&num);

    while(num!=0)
    {
        // printf("In while loop");
        rem=num%2;
        arr[i]=rem;
        // printf("%d",rem);
        i++;
        num/=2;
        
    }

    for(j=i-1;j>=0;j--)
    {
        printf("%d", arr[j]);
    }
}