"""
2022-03-26 08:36:47
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1652 KB
Accepted | 1 * (35 / 100) | 6 ms | 1584 KB
Accepted | 1 * (60 / 100) | 13 ms | 1532 KB
 1616 KB
Accepted | 1 * (1 / 4) | 3 ms | 1664 KB

"""

#include<stdio.h>
int main(){
	int a[105], n, i=0, j=1,ans=0;
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&a[i]);
		i++;	
		}i=0;
		while(i<n){
			while(j<a[i]){
				if(a[i]%j==0){
					ans=ans+j;
				}j++;
			}j=1;
			if(ans==a[i]){
				printf("YES\n");
			}else{
				printf("NO\n");
			}i++;
			ans=0;
		}
		

	return 0;
}