"""
2022-03-26 13:24:42
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1644 KB
Accepted | 1 * (35 / 100) | 9 ms | 1676 KB
Accepted | 1 * (60 / 100) | 11 ms | 1632 KB

"""

#include<stdio.h>
int main()
{double a,bb[101];
 int cc[1000],k=0,m=0,t=0,n,i=1;
 scanf("%d",&n);
 while(i<=n) 
 {t=0;k=0;
 scanf("%lf",&a);
 for(int j=1;j<a-1;j++)
   {if(1.0*a/j-(int)a/j<1e-6)
     {k++;
	 cc[k]=j;
	 }
     }
     for(m=1;m<=k;m++)
     {t=t+cc[m];
	 }
	 if(t==a)
	  printf("YES\n");
	 else
	  printf("NO\n");
	  i++;
	  }
	  
	  return 0;	
}