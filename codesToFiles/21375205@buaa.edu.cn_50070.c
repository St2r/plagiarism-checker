"""
2022-03-26 17:07:29
AC
1.0
Accepted | 1 * (1 / 10) | 7 ms | 1724 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 11 ms | 1724 KB
Accepted | 1 * (2 / 10) | 11 ms | 1644 KB
Accepted | 1 * (4 / 10) | 10 ms | 1620 KB

"""

#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double sum=1,i,k=1;
	scanf("%d",&n);
	for(i=1;i<=n+1e-5;i++){
		k=k/i;
	//	printf("1/%lf\n",1/k); 
		if(k<1e-16)
		{
			break;
		}
		sum=sum+k;
	}
		printf("%.14f",sum);
	return 0;
	}