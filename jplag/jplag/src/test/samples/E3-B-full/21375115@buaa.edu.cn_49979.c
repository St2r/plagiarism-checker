"""
2022-03-26 14:37:01
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1704 KB

"""

#include<stdio.h>
int main()
{
	int n,s[110]={0},i=0,k=0,sum=0;
	scanf("%d",&n);
	
	while(i<n){
		scanf("%d",&s[i]);
		sum=0;
		for(k=1;k<=((s[i]+1)/2);k++){
			if(s[i]%k==0) sum+=k;
		}
		if(sum==s[i]) printf("YES\n");
		else printf("NO\n");
		i++;
	}
	
	return 0;
}