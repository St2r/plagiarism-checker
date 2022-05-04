"""
2022-03-30 15:20:39
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1736 KB
Accepted | 1 * (35 / 100) | 1 ms | 1612 KB
Accepted | 1 * (60 / 100) | 3 ms | 1700 KB

"""

#include<stdio.h>
int main(){
	int i=0,n,m=0,t,k;
	scanf("%d",&n);
	int s[1000]={0},d[10001]={0},sum;
	for(i=0;i<n;i++) {
	scanf("%d",&s[i]);
}
	for(i=0;i<n;i++){
		m=0;
		for(k=1;k<s[i];k++){
		if(s[i]%k==0) 
		{
			d[m]=k;
			m++;
			}
	}
		sum=0;
		for(t=0;t<m;t++) sum+=d[t];
		if(sum==s[i]) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}