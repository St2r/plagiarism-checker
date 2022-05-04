"""
2022-03-29 20:52:48
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1696 KB
Accepted | 1 * (35 / 100) | 0 ms | 1736 KB
Accepted | 1 * (60 / 100) | 3 ms | 1740 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[100],b,c;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		int s=0;
		for(b=1;b<a[i];b++){
			if(a[i]%b==0){
				s=s+b;
			//	printf("%d\n",b,s);
			}
		}
		if(s==a[i]){
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}