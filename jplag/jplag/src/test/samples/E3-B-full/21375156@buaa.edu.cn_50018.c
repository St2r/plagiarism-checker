"""
2022-03-26 18:10:14
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1616 KB
Accepted | 1 * (35 / 100) | 2 ms | 1664 KB
Accepted | 1 * (60 / 100) | 4 ms | 1620 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int i=0,n,a[105],c=1,s[105];
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&a[i]);
		c=1;
		s[i]=0;
		while(c<a[i]){
			if(a[i]%c==0){
				s[i]+=c;
			}
			c++;
		}
		if(s[i]==a[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		i++;
		
	}
    return 0;
}