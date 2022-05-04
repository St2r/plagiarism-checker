"""
2022-03-27 22:03:33
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1620 KB
Accepted | 1 * (35 / 100) | 2 ms | 1676 KB
Accepted | 1 * (60 / 100) | 3 ms | 1604 KB

"""

#include<stdio.h>

int main()
{
	int n,i=0,w=0,r=1;
	scanf("%d", &n);
	int a[100];
	while(i!=n){
		scanf("%d", &a[i]); 
		i++;
	}
	i=0;
	while(i!=n){
		while(r!=a[i]){
			if(a[i]%r==0){
				w=w+r;
			}
			r++;
		}
		if(w==a[i]){
			printf("YES\n");
		}
		if(w!=a[i]){
			printf("NO\n");
		}
	r=1;
	i++;
	w=0;
	} 
	return 0;
}