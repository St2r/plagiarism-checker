"""
2022-03-27 23:34:31
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1532 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 4 ms | 1600 KB

"""

#include<stdio.h>
int main()
{
	int n;
	int i,j;
	int a;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int sum=0;
		scanf("%d",&a);
		for(j=1;j<a;j++){
			if((a%j)==0 ){
				sum+=j;
			}
		}
		if(sum==a){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	} 


	return 0;
}