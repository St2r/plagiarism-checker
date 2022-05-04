"""
2022-03-28 22:59:37
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1648 KB

"""

#include<stdio.h>

int main()
{
	int n,a,i,j,num=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		for(j=1;j<a;j++){
			if(a%j==0)
			num+=j;			
		}
		if(a==num)
		printf("YES\n");
		else
		printf("NO\n");
	a=0;
	num=0;
}
	return 0;
}