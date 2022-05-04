"""
2022-03-29 21:30:36
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 0 ms | 1584 KB
Accepted | 1 * (60 / 100) | 3 ms | 1688 KB

"""

#include<stdio.h>
int main()
{
	int n,i,a[105],sum=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++){
	 for(j=1;j<a[i];j++){
		if(a[i]%j==0){
			sum+=j;
		}
	}
	if(sum==a[i]){
		printf("YES\n");
	}
	else
	{
	printf("NO\n");
	}
	sum=0;
    }
	return 0;
}