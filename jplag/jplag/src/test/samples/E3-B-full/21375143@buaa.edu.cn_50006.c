"""
2022-03-27 11:18:12
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1552 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,k,sum=0,q;
	int s[101]={0};
	scanf("%d",&n);
	for(k=0;k<n;k++){
		scanf("%d",&s[k]);
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		q=s[i];
		for(j=1;j<=(q/2+1);j++){
			if(q%j==0){
				sum=sum+j;
			}
		}
		if(sum==q){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}