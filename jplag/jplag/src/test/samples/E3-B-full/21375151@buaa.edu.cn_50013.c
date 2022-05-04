"""
2022-03-26 12:45:52
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1556 KB
Accepted | 1 * (35 / 100) | 2 ms | 1600 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int n,x[1010];
	scanf("%d",&n);
	int i,s=0;
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++){
		s=0;
		for(int j=1;j<=x[i]/2;j++){
			if(x[i]%j==0){
				s+=j;
			}
		}
		if(s==x[i]) 
		printf("YES\n");
		else printf("NO\n");
	}
}