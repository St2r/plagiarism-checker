"""
2022-03-26 18:22:15
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 4 ms | 1644 KB

"""

#include<stdio.h>

//void buyaope(int x) {

//	return;
//}

int main() {
	int n,i,x,a,b,j;
	scanf("%d",&n);

	for(i=0; i<n; i++) {
		scanf("%d",&x);

		//int ;
		b=0;
		for(a=1; a<x; a++) {
			if(x%a==0)
				b=b+a;
		}
		if(b==x)
			printf("YES\n");
		else
			printf("NO\n");

		//buyaope(x);
	}

	return 0;
}