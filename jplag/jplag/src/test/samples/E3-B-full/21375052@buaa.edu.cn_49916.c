"""
2022-03-27 10:28:32
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 3 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1700 KB

"""

#include<stdio.h>
int main(){
	int n,i,j,k,sum,a[105];
	sum=0;
	scanf("%d",&n); 
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(j=1;j<=n;j++)
	{
		for(k=1;k<a[j];k++)
		{
			if((a[j]%k)==0)
			sum+=k;
		} 
		if(sum==a[j])
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}
	return 0;	
	
}