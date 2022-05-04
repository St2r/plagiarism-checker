"""
2022-03-27 16:29:51
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 4 ms | 1700 KB

"""

#include <stdio.h>
int main()
{
	int n,a,m=1,i=0,x[100],sum=0;
	scanf("%d",&n);
	while (n--){
		scanf("%d",&a);
		while (m<a){
			if (a%m==0){
				x[i]=m;
				m++;
				i++;
			}
			else{
				m++;
			}
		}
		for (int j=0;j<i;j++){
			sum = sum + x[j];
		}
		if (a==sum){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		i=0;
		m=1;
		sum=0;
	}
	return 0;
}