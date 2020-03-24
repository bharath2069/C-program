#include<stdio.h>
int main()
{
    int f[100],size,i,j,maxcount;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&f[i]);
    }
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
        
        }
        
        
    }
    printf("%d ",maxcount);
    return 0;
}