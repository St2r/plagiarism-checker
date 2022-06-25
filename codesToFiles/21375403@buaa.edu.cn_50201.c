"""
2022-03-27 11:01:36
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 3 ms | 1628 KB
Accepted | 1 * (4 / 10) | 2 ms | 1632 KB

"""

#include<stdio.h>
#include<math.h>
   
int main()
{     int i,j,k;
long long int n;
    double e=1.0;
     long long int a[100];
      double b[100];
    scanf("%lld",&n);
    if(n<=50){
    for(k=0;k<100;k++){
    	a[k]=1;
	}
		for(i=1;i<=n;i++){for(j=1;j<=i;j++){
			a[i-1]*=j;
			
		}b[i-1]=1.0/a[i-1];
			e+=b[i-1];
		   }
        printf("%.14lf",e);}
        else
       {e=2.71828182845905;
        printf("%.14lf",e);
		} 
		
    

	return 0;
}