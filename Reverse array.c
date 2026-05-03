#include <stdio.h>
int  main()
{
         int a[10],i,temp;

         for(i=0;i<10;i++)
         {
                   scanf("%d",&a[i]);
         }

         for (i=0;i<10/2;i++)
         {
                   temp = a[i];
                   a[i] = a[10-1-i];
                   a[10-1-i] = temp;
         }
         for(i=0;i<10;i++)
         {
                   printf("%d ",a[i]);
         }


          return 0;
}

