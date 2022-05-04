"""
2022-03-26 14:31:40
AC
1.0
Accepted | 1 * (3 / 5) | 3 ms | 1624 KB
Accepted | 1 * (1 / 5) | 2 ms | 1656 KB
Accepted | 1 * (1 / 5) | 2 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n;
	int i,t,k=1;
	int x;
	scanf("%d",&n);
	while(k<=n){
		t=0;
		scanf("%d",&x);
		for(i=1;i<x;i++){
			if(x%i==0)
				t+=i;		
		}
		if(t==x)
			printf("YES\n");
		else
			printf("NO\n");
		k++;
	} 
	return 0;
}