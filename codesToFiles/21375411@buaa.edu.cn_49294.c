"""
2022-03-26 16:27:47
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1596 KB
Accepted | 1 * (1 / 4) | 2 ms | 1656 KB
Accepted | 1 * (1 / 4) | 2 ms | 1624 KB
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	double s;
	double sum=1;
	int i=1,r=1;
	for(r=i=1;i<=n;i++){
		r*=i;
		s=1.0/r;
		if(s<1e-20){
			break;
		}
		sum+=s;
		
	}
	printf("%.14f",sum);
	return 0;
	
}