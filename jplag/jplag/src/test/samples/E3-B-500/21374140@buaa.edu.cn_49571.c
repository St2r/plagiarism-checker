"""
2022-03-27 13:02:35
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1708 KB
Accepted | 1 * (1 / 4) | 2 ms | 1644 KB
Accepted | 1 * (1 / 4) | 2 ms | 1576 KB
Accepted | 1 * (1 / 4) | 3 ms | 1628 KB


"""

#include <stdio.h>
int main()
{
	int n,a[10005]={0},sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(int j=1;j<a[i];j++){
			if(a[i]%j==0){
				sum+=j;
			}
		}
		if(sum==a[i]){
			printf("YES\n");
		}
		else
			printf("NO\n");
		sum=0;
	}
	return 0;
}