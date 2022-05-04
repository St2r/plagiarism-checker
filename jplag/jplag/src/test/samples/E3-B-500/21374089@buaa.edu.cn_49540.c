"""
2022-03-29 22:49:35
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include<stdio.h>
int x[100100000];
int main()
{
	int n, i=1, he;
	scanf("%d",&n);
	int k=0;
	while(k<n){
		scanf("%d",&x[k]);
		i=1;
	    he=0;
		while(i<x[k])
		{
			if(x[k]%i==0)
			{
			he=he+i;
			}
			i++;
		}
		if(he==x[k])
		printf("YES\n");
		else
		printf("NO\n");
		k++;
	}
	return 0;
}