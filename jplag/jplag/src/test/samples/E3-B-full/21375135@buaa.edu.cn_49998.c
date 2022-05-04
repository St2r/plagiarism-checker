"""
2022-03-26 13:11:48
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 12 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		int num;
		scanf("%d",&num);
		int gcd[205]={0},len=0;
		for(j=1;j*j<=num;j++){
			if(j==1){
				gcd[0]=1;
				len++;
				continue;
			}
			if((num%j)==0){
				gcd[len]=j;
				gcd[len+1]=num/j;
				len+=2; 
			}
		}
		int sum=0;
		for(j=0;j<len;j++){
			sum+=gcd[j];
		}
		printf((sum==num)?"YES\n":"NO\n"); 
	}
	return 0;
}