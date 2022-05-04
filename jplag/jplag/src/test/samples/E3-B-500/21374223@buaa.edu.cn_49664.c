"""
2022-03-29 09:20:52
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1696 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	int n,a,b,c,d;
	int i=1,ans=0;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&a);
		b=a-1;
		while(a<=(b*b)){
			c=a%b;
			d=a/b;
			if(c==0){
				ans=ans+b+d;
			}
			b--;
		}
		ans++;
		if(ans==a){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		i++;
		ans=0;
	}
	return 0;
}