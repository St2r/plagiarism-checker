"""
2022-03-27 21:04:41
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1476 KB
Accepted | 1 * (35 / 100) | 2 ms | 1624 KB
Accepted | 1 * (60 / 100) | 3 ms | 1604 KB



"""

#include <stdio.h>
int main(){
	int n,i,j,x,r;
	scanf("%d",&n);
	while(n--)
	{
		int a[100]={0};
		scanf("%d",&x);
		i=0;
		j=1;
		while(j<=(x/2))
		{
			if(x%j==0)
			{
				a[i]=j;
				i++;
			}
			j++;
		}
		r=0;
		for(i=0;i<100;i++)
		r+=a[i];
		if(r==x)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}