"""
2022-03-27 15:40:15
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1552 KB
Accepted | 1 * (35 / 100) | 3 ms | 1684 KB
Accepted | 1 * (60 / 100) | 4 ms | 1600 KB

"""

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i,j,m,b,c;
	i=0;
	j=0;
	scanf("%d\n",&n);
	int a[n-1];
	while(i<n){
		scanf("%d",&a[i]);
		i=i+1;
	}
	while(j<n){
		b=1;
		m=0;
		while(b<a[j]){
			c=a[j]%b;
			if(c==0){
				m=m+b;
				b=b+1;
			}
			else
			b=b+1;
		}
		if(m==a[j])
		printf("YES\n");
		else
		printf("NO\n");
		j=j+1;
	}
	
	return 0;
}