"""
2022-03-27 22:44:14
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 2 ms | 1676 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include<stdio.h>
main()
{
	int n , a , i , j , cnt=0, sum=0;
	scanf("%d",&n);	

	for(i=0;i<n;i++){
	scanf("%d",&a);
		for(j=1;j<a;j++){
			if(a%j==0){
				sum+=j;
			}
		}
		
	if(sum==a)
		printf("YES\n");
	else{
		printf("NO\n");
	}
	sum=0;	
	
		
	
		
	}
	
	return 0 ;
	
}