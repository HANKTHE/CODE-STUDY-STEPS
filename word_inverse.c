#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[1000],str2[100];
    int i ,j,t,k,len,n,a;
    scanf("%d",&n);
    a=n+1;
    while(a--)
     {
           gets(str1);
           len=strlen(str1);
           for (i=0,j=0,t=0;i<len;i++)
             {
              if (str1[i]!=' ')
              str2[j++]=str1[i];
              else
              {
                if (t>0)
                printf(" ");
                for (k=j-1;k>=0;k--)
                printf("%c",str2[k]);
                j=0;
                t++;
              }
              if(i==len-1)
               {
                   printf(" ");
                   for (k=j-1;k>=0;k--)
                   printf("%c",str2[k]);
                   printf("\n");
               }
             }

       }
            return 0;
    }
