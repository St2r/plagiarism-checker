"""
2022-03-28 22:45:51
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 0 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1648 KB

"""

#include <stdio.h>
int main(){
	int n,i,j,k,f=1;
	double d=1,m=1;
	scanf("%d",&n);
	if(n>=17) k=17;
	else k=n;
	for(i=1;i<=k;i++){
		m=1;
		for(j=1;j<=f;j++)
		{m=m*j;}
		f=f+1;
		j=1;
		d=d+1.0/m;
	}
	printf("%.14lf",d);
    return 0;	
}