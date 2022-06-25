"""
2022-03-26 15:13:56
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 11 ms | 1640 KB
Accepted | 1 * (60 / 100) | 6 ms | 1588 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{ 
  long long n,p=1;
  int i,k;
  double ai,e,sum=0.0;
  scanf("%lld",&n);
  double e0=2.71828182845905;
  if(n>=17){printf("%f",e0);}
  else{for(i=1;i<=n;i++){
  	for(k=1;k<=i;k++){
  		p=p*k;
  	}
  	ai=1.0/p;
  	sum=sum+ai;
  	p=1;
  }
  e=sum+1.0;
  printf("%.14f",e);
  }
   return 0;
}