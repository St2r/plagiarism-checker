"""
2022-03-26 08:47:09
AC
1.0
Accepted | 1 * (1 / 4) | 6 ms | 1644 KB
Accepted | 1 * (1 / 4) | 10 ms | 1656 KB
Accepted | 1 * (1 / 4) | 10 ms | 1656 KB
Accepted | 1 * (1 / 4) | 12 ms | 1596 KB

"""

#include <stdio.h>
int main()
{   int n,i,j,sum;
    int a[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	    for(sum=0,j=1;j<a[i];j++){
	    	if(a[i]%j==0){
	    		sum=sum+j;
			}
		}
		if(sum==a[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}