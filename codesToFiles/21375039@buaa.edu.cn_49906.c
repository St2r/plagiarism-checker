"""
2022-03-27 00:04:58
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1676 KB
Accepted | 1 * (1 / 10) | 3 ms | 1624 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	int i;
	int s;
	int n;
	int t;
	long long cut=1;
	double finnal=1.0;

	scanf("%d",&n);
	
	for(i=1;i<=1000;i++){
		for (t=1;t<=i;t++){
			cut *=t;
		}
		finnal =1.0/cut;
		cut =1;
		if(finnal<1.0e-14){
			break;
		}
	}	
	s=i;
    finnal=1.0;
    cut=1;
	
	for(i=1;i<=n&&i<=s;i++){
		for (t=1;t<=i;t++){
			cut *=t;
		}
		finnal +=1.0/cut;
		cut =1;
	}
	
	
	printf("%.14f",finnal);
	
	
	return 0;
}