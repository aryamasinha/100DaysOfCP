#include <stdio.h> 
#include <math.h>
int main()
{
    int i,t,n,p,j,c=0,k=0,l=0;
    char a[1000];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&p);
        scanf("%s",a);
        c=0;l=0;k=0;
        for(j=0;j<p;j++)
        {
            if(a[j]=='Y')
            {
                c=1;
            }
            else if(a[j]=='N')
            {
                k=1;
            }
            else
            {
                l=1;
            }
        }
        if(c==1&&l==0)
        {
            printf("NOT INDIAN\n");
        }
        else if(l==1&&c==0)
        {
            printf("INDIAN\n");
        }
        else
        {
             printf("NOT SURE\n");
        }
}
    return 0;
}
       