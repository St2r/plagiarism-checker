"""
2022-03-26 08:53:25
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1532 KB
Accepted | 1 * (35 / 100) | 22 ms | 1536 KB
Accepted | 1 * (60 / 100) | 13 ms | 1640 KB

"""

#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--){
		int a,sum=0;
		scanf("%d",&a);
		for(int i=1;i<a;i++){
			if(a%i==0){
				sum+=i;
			} 
		}
		if(sum==a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
    return 0;
}