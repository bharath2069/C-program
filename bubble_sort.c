#include<stdio.h>
int main()
{
    int arr[100],i,j,size,temp;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=size;i>=1;i--)
    {
        for(j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}