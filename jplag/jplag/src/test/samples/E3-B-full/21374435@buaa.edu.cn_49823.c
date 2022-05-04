"""
2022-03-29 20:06:10
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1624 KB
Accepted | 1 * (35 / 100) | 0 ms | 1740 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include <stdio.h>
int main ()
{
	int n,i,y,x=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int a,sum=0;
		scanf("%d",&a);
			for(y=1;y<a;y++){
				if(a%y==0){
					sum+=y;
			}				
		}
				if(sum==a)
				printf("YES\n");
				else
				printf("NO\n");
			
	}
	return 0;
}