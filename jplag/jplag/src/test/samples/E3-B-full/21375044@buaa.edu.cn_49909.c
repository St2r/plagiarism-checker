"""
2022-03-26 20:33:26
AC
1.0
Accepted | 1 * (1 / 100) | 3 ms | 1660 KB
Accepted | 1 * (39 / 100) | 3 ms | 1624 KB
Accepted | 1 * (60 / 100) | 9 ms | 1664 KB

"""

#include<stdio.h>
int main()
{int n;
int b;
scanf("%d",&n);
for(int i=0;i<n;i++){
	int k;
	b=0;
	int a[10000];
	scanf("%d",&k);
	for(int m=1;m<k;m++){
		if(k%m==0){
			a[m]=m;
		}
	}
	for(int c=0;c<k;c++){
		b=b+a[c];
	}
	if(b==k)
	printf("YES\n");
	else
	printf("NO\n");
	for(int l=0;l<k;l++){
		a[l]=0;
	}
}
return 0;
}