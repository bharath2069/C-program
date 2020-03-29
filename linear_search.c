#include<stdio.h>
int main()
{
    int arr[100],size,i,num,count=0;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to search:\n");
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(num==arr[i])
        {
            printf(" \n%d is present in position %d",num,i);
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("%d not found",num);
    }
    return 0;
}