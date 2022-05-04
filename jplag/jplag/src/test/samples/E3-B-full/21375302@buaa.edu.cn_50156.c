"""
2022-03-29 20:58:45
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1628 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include<stdio.h>
int main() {
	int n,d,sum,a,b;
	int m[101];
	scanf("%d",&n);
	for(d=0;d<n;d++){
		scanf("%d",&m[d]);
	}
	d=0;
	while(d<n)
	{
	b=1;
	sum=0;
	while(b<m[d])
	{
	   if((m[d]%b)==0)
	   {
	   sum=sum+b;	
	   }
	   b++;
	}
	if(sum==m[d]){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	d++;
   }
	return 0;
}