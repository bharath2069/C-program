#include<stdio.h>
int main()
{
    int size,a[100],f[100],i,j,count;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        f[i]=-1;
    }
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=count;
        }
    }
    for(i=0;i<size;i++)
    {
        if(f[i]!=0)
        {
            printf("%d occures %d times\n",a[i],f[i]);
        }
        
    }
    return 0;
    
}