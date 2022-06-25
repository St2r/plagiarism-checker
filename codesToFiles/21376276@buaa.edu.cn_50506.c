"""
2022-03-26 13:11:15
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 2 ms | 1728 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 3 ms | 1708 KB
Accepted | 1 * (4 / 10) | 2 ms | 1672 KB

"""

#include<stdio.h>
#include<stdbool.h>
long long jie(int a)
{
	long long i = 1;
	long long an = 1;
	if(a >= 1){
		for(i = 1; i<= a; i++){
			an *= i;
		} 
	}else if(a == 0){
		return 1;
	}
	return an;
}

int main()
{	
	int n;
	double sum = 0;
	scanf("%d", &n);
	if(n <= 17){
		for(int j = 0; j <= n;j++){
			double r = 1.0 / (jie(j));
			sum += r;
		}
	}else if(n > 18){
		for(int j = 0; j<= 17; j++){
			double r = 1.0 / (jie(j));
			sum += r;
		}
	}
	printf("%.14f", sum);
	return 0;
}