"""
2022-03-28 17:06:40
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1636 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 4 ms | 1632 KB

"""

#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int a[105];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++){
		int s=0;
		for(int j=1;j<a[i];j++){
			if(a[i]%j==0)s+=j;
		}
		if(s==a[i])printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}