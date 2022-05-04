"""
2022-03-28 19:22:03
AC
1.0
Accepted | 1 * (5 / 100) | 14 ms | 1880 KB
Accepted | 1 * (35 / 100) | 19 ms | 1852 KB
Accepted | 1 * (60 / 100) | 20 ms | 1796 KB

"""

#include <string.h>
#include <stdlib.h>
#include <math.h> 
#include <stdio.h>
int main()
{
	int n,a[50523]={0},qlbh=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(int j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				qlbh+=j;
			}
		}
	if(qlbh==a[i]){
			printf("YES\n");
		}
	else
			printf("NO\n");
			qlbh=0;
	}
	return 0;
}