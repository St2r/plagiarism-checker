"""
2022-03-27 09:24:43
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1616 KB
Accepted | 1 * (60 / 100) | 3 ms | 1648 KB

"""

#include <stdio.h>

int main()
{
	int n,a[100];
	int i=0,m,t;
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&a[i]);
		m=1;
		t=0;
		while(m<=(a[i]/2)){
			if(a[i]%m==0){
				t=t+m;
			}
			m++;
		}
		if(t==a[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		i++;
	}
	return 0;
}