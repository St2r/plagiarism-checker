"""
2022-03-28 23:53:47
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 2156 KB
Accepted | 1 * (35 / 100) | 1 ms | 2052 KB
Accepted | 1 * (60 / 100) | 1 ms | 2144 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,sum=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	scanf("%d",&a);
    	for(j=2;j<=sqrt(a);j++){
    		if(a%j==0){
    			if(j!=a/j){
    				sum=sum+j+a/j;
				}
				else{
					sum=sum+j;
				}  
			}
		}
		if(sum+1==a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		sum=0;
	}
	return 0;
}