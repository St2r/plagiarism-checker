"""
2022-03-26 08:40:26
AC
1.0
Accepted | 1 * (1 / 4) | 16 ms | 1612 KB
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 9 ms | 1612 KB
Accepted | 1 * (1 / 4) | 9 ms | 1644 KB
KB

"""

# include <stdio.h>
# define epi 1e-14
int main(){
	int n,fac=1;
	double e=1;
	scanf("%d",&n);
	
	for (int k=1;k<=n;k++){
		fac*=k;
		e+=1.0/fac;
		if (fac<epi){break;}
	}
	printf("%.14f",e);
	return 0;
}