"""
2022-03-26 10:42:31
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 2000 KB
Accepted | 1 * (35 / 100) | 13 ms | 2096 KB
Accepted | 1 * (60 / 100) | 7 ms | 2012 KB

"""

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int s[150];
int real(int);
int main()
{
	int n,i; 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	} 
	for(i=0;i<n;i++){
		
			if(real(s[i])) printf("YES\n");
			else printf("NO\n");
		
	}
	
	return 0;








}
int real(int a){
	int i,sum=1;
	for(i=2;i<=sqrt(a);i++){
		if(i*i==a)
		{
		sum+=i;
		}
		else {
			if(a%i==0)
			{
			sum+=i+a/i;
			}
		}
		
	}
	if(sum==a) return 1;
	else return 0;
	
}