#include<stdio.h>

int main()
{
    int t,a,b,c,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b)
        {
            if(a>c)
            {
                if(b>c)
                {printf("\n%d",b);}
                else
                {printf("\n%d",c);}
            }
            else 
            {
                             
                 printf("\n%d",a);
            }
         }
         else
         {
             if(b>c)
             {
                 if(c>a)
                 {printf("\n%d",c);}
                 else
                 {printf("\n%d",a);}
             }
             else
             {
                 printf("\n%d",b);
             }
         }
      }
 }