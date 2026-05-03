#include <stdio.h>
int  main()
{
         int a[10],i,x,count=0;

         for(i=0;i<10;i++)
         {
                   scanf("%d",&a[i]);
         }
         scanf("%d",&x);

         for(i=0;i<10;i++)
         {
                   if(a[i]==x)
                    {
                             count++;
                   }
         }
         printf("%d",count);

          return 0;
}
