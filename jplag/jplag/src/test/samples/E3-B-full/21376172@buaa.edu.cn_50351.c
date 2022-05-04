"""
2022-03-27 20:57:23
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1628 KB
Accepted | 1 * (60 / 100) | 4 ms | 1680 KB

"""

#include <stdio.h>
int main()
{
	int n,i=0,a,t=0;
	int sum=0;
	scanf("%d",&n);
	while(t<n){
		scanf("%d",&a);
		for(i=1;i<a;i++){
			if((a%i)==0){
				sum=sum+i;
			}
		}
		if(sum==a){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
		t++; 
		sum=0;
	}
	return 0;
}