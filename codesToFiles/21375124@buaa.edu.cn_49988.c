"""
2022-03-29 15:08:41
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 0 ms | 1664 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double p=1,s=1;
	
	scanf("%d",&n);
	 
	if(n<17){
		for(int i=1;i<=n;i++){
			p=p*i;
			s=s+1/p;
		}
		printf("%.14f",s);
	}
	else{
		for(int i=1;i<=17;i++){
					p=p*i;
					s=s+1/p;
				}
				printf("%.14f",s);
		
	}
	
 	
 return 0;
}