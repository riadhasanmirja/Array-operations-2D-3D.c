#include<stdio.h>
int main()
{
          int a[5],i,max,second;

          for(i=0;i<5;i++)
          {
                    scanf("%d",&a[i]);
          }
          max = a[0];
           for(i=0;i<5;i++)
           {
                     if(a[i]>max)
                     {
                               max = a[i];
                     }
           }
           second  =  -999999999;
            for(i=0;i<5;i++)
            {
                      if(a[i]>second && a[i] !=max)
                      {
                                second = a[i];
                      }
            }
           printf("%d ",second);

          return 0;
}
