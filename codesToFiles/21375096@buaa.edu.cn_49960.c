"""
2022-03-27 11:13:52
TLE
0.6
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 964 KB

"""

#include<stdio.h>
int main()
{
	int n,a,i;
	double e,sum=1,b=1;
	scanf("%d",&n);
	if(n==0){
		e=1;
		printf("%.14f\n",e);
	}else{
		for(i=1;i<=n;i++){
			b=1;
			a=i;
			while(a>=1){
				b*=1/(double)a;
				a--;
			}
		    sum+=b;
	}
	printf("%.14f\n",sum);
	}
 }