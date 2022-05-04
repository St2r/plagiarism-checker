"""
2022-03-28 18:58:17
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 2 ms | 1600 KB
Accepted | 1 * (1 / 4) | 3 ms | 1708 KB
Accepted | 1 * (1 / 4) | 3 ms | 1652 KB

"""

#include<stdio.h>
int main(){
	int a[1000],n,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(int k=1;k<a[i];k++)
	{
	if(a[i]%k==0)
	sum+=k;
		
	}
	if(sum==a[i])
	printf("YES\n");
	else 	printf("NO\n");
	}
	return 0;
	
}