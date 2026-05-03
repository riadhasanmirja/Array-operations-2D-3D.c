#include <stdio.h>
int  main()
{
          int a[10],i,even=0,odd=0;

          for(i=0;i<10;i++)
          {
                    scanf("%d",&a[i]);
          }

          for(i=0;i<10;i++)
          {
          if(a[i]%2==0)
                    even = even + a[i];
          else
                    odd = odd + a[i];
          }
          printf("Sum of Even = %d\n Sum of Odd = %d ",even,odd);


          return 0;
}
