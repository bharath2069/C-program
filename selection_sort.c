#include<stdio.h>
int main()
{
    int arr[100],i,j,size,temp,swap,pos;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        pos=i;
        temp=arr[i];
        swap=0;
        for(j=i+1;j<size;j++)
        {
            if(temp>arr[j])
            {
                temp=arr[j];
                swap=j;
            }
        }
        if(swap!=0)
        {
            arr[swap]=arr[pos];
            arr[pos]=temp;
        }
        
    
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}