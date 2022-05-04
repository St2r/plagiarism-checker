"""
2022-03-26 09:58:27
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1556 KB
Accepted | 1 * (35 / 100) | 12 ms | 1704 KB
Accepted | 1 * (60 / 100) | 20 ms | 1704 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
	int sum=0,i,n,j,a[1010]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		//printf("%d\n",a[i]);
		sum=0;
		for(j=1;j<=a[i]/2;j++){
			if(a[i]%j==0){
				sum+=j;
				//printf("%d",j);
			}
		}
	//	printf("%d %d\n",sum,a[i]);
		if(sum==a[i]) printf("YES\n");
		else printf("NO\n");
	}
	 
	return 0;
}