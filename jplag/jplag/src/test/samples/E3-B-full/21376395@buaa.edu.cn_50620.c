"""
2022-03-26 20:39:04
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1628 KB
Accepted | 1 * (35 / 100) | 2 ms | 1628 KB
Accepted | 1 * (60 / 100) | 4 ms | 1632 KB

"""

#include<stdio.h>

int main()
{	
	int i,j,n;
	scanf("%d",&n);
	int a[n];
	int sum=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for (j=1;j<a[i];j++){
			if(a[i]%j==0)
				 sum=sum+j;
		
		}
		if(sum==a[i]){
			printf("YES\n");
			sum=0;
		}
		else{
			printf("NO\n");
			sum=0;
		}
	}
	return 0;
}