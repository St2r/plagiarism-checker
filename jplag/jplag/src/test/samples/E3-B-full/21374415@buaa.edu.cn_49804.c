"""
2022-03-29 21:09:01
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1580 KB
Accepted | 1 * (35 / 100) | 1 ms | 1572 KB
Accepted | 1 * (60 / 100) | 1 ms | 1656 KB

"""

#include<stdio.h>
int main(){
	int n,a;
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
		scanf("%d",&a);
		int k=0;
		for(int i=1;i<=a/2;i++){
		    if(a%i==0)
	        k+=i;}
	    if(k==a)
		printf("YES\n");
		else
		printf("NO\n");
	} 
	return 0;
}