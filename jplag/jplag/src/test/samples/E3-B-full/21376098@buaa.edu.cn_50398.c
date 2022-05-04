"""
2022-03-27 10:09:10
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1540 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1604 KB

"""

#include<stdio.h>
int main()
{
	int n,shu,ci;
	scanf("%d",&n);
	int a[n],he[n],pan[n];
	for(shu=1;shu<=n;shu=shu+1)
	{
		scanf("%d",&a[shu-1]);
	}
	for(shu=1;shu<=n;shu=shu+1)
	{
		he[shu-1]=0;
		for(ci=1;ci<a[shu-1];ci=ci+1)
		{
			if(a[shu-1]%ci==0){
				he[shu-1]=he[shu-1]+ci;
			}
		}
		if(he[shu-1]==a[shu-1]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}