"""
2022-03-28 00:26:27
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 3 ms | 1712 KB
Accepted | 1 * (4 / 10) | 3 ms | 1724 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))


int cifang(int a, int n)
      { if(n==0){
	  	return 1;
	  }
	  
	  else{
	  int c=1;
	  	for(int i=1;i<=n;i++){
		  	c=c*a;
		  }
		  return c;
	  }
      }


int main(){
	int n;
	long long m=1;
	double e=1;
	scanf("%d",&n);
	if(n>=20){
		printf("2.71828182845905");
	}
	else{
		for(int i=1;i<=n;i++){
				e=e+1.0/m;
				m=m*(i+1);
			}
	    printf("%.14lf", e);
	}
}