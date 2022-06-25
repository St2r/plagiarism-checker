"""
2022-03-29 23:44:46
TLE
0.0
Wrong Answer | 0 * (1 / 10) | 1 ms | 1684 KB
Wrong Answer | 0 * (1 / 10) | 1 ms | 1732 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1660 KB
Wrong Answer | 0 * (2 / 10) | 0 ms | 1688 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

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