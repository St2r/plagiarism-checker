"""
2022-03-29 23:44:40
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 1688 KB
Wrong Answer | 0 * (35 / 100) | 1 ms | 1644 KB
Wrong Answer | 0 * (60 / 100) | 0 ms | 1640 KB

"""

#include <stdio.h>

int main()
{
int a[1000],b,i,n,c,d,e;
scanf("%d",&n);
i=1;
while(i<=n)
 {
 scanf("%d",&a[i]);
 i++;}
 
 b=1,e=0;
    while(b<=n)
     {c=b+1;
         while(c<=n)
         {    if(a[b]>a[c])
                {e++;
			      } 
             c++;
	            }
 
      b++;
 
 
		 }		
 	
 
	 
	  printf("%d",e);
	return 0;
	
}