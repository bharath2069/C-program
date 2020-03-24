#include<stdio.h>
int main()
{
    int size,a[100],f[100],i,j,x,y,count,temp,maxcount;
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
    for(i=0;i<size;i++)
    {
        printf("%d ",f[i]);
    }
       printf("\n");
    for(i=0;i<size-1;i++)
    {
        if(f[i]!=0)
        {
            maxcount=0;
        for(j=0;j<size;j++)
        {
          if(f[i]<f[j] || f[i]==f[j])
          {
              if(maxcount<f[j])
              {
                  maxcount=f[j]; 
              }
              
          }  
        }
        
     
        for(x=0;x<size;x++)
        {
            if(f[x]==maxcount)
            {
                temp=a[x];
                f[x]=0;
                for(y=0;y<maxcount;y++)
                {
                    printf("%d ",temp);
                }
               
            }
        }
        }

        
    }
        
    
    return 0;
    
}