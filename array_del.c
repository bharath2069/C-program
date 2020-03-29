#include<stdio.h>
int main()
{
    int arr[100],size,pos,i;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("enter position ");
    scanf("%d",&pos);
    for(i=pos-1;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("after deletion\n");
    for(i=0;i<size-1;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}