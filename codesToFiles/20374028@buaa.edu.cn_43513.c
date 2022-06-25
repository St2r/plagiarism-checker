"""
2022-03-26 15:48:30
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1624 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB
B

"""

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
long long fac(int);
int main()
{
	int n,i;
	double sum=1; 
	scanf("%d",&n);
	if(n>16) n=16;
	for(i=1;i<=n;i++){
		sum+=1.0/(1.0*fac(i));
	} 
	printf("%.14f",sum);
	
	return 0;








}
long long fac(int a){
	long long sum=1;
	int i;
	for(i=2;i<=a;i++){
		sum*=i;
		
	}
	return sum;
		
	
}