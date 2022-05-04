"""
2022-03-28 20:09:22
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1628 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	int j,k,sum=0;
	int s[101];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&s[i]);	
	}
	for(j=0;j<=(n-1);j++){
		for(k=s[j];k>1;k--){
			if(s[j]%k==0)
			
			sum+=s[j]/k;	
				}
				if(sum==s[j])
				printf("YES\n");
				else
				printf("NO\n");
				sum=0;
				
				 	}
	return 0;
}