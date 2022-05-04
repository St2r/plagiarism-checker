"""
2022-03-26 10:32:45
AC
1.0
Accepted | 1 * (1 / 10) | 10 ms | 1608 KB
Accepted | 1 * (1 / 10) | 9 ms | 1608 KB
Accepted | 1 * (2 / 10) | 11 ms | 1592 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (4 / 10) | 2 ms | 1588 KB

"""

#include<stdio.h>
int main(){
	int n,m,i=1,x=1,cnt[1001],a[1001];
	
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&a[i]);
		for(m=1;m<a[i];m++)
		{
			if(a[i]%m==0) cnt[i]+=m;
		}
		
		i++;
	}
	while(x<=n){
		if(cnt[x]==a[x]) printf("YES\n");
		else printf("NO\n");
		x++;
	}
	
	
	return 0;
}