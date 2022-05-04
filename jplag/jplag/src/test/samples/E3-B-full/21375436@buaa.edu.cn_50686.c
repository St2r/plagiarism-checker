"""
2022-03-26 20:43:09
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1648 KB
Accepted | 1 * (35 / 100) | 3 ms | 1544 KB
Accepted | 1 * (60 / 100) | 5 ms | 1540 KB

"""

#include<stdio.h>
int main ()
{
	int n, num, i = 0, a, sum = 0;
	scanf("%d", &n);
	while(scanf("%d", &num)!=EOF&&i < n){
		int j = 0;
		for(j = 0;j <= num - 2; j++){
		a = num / (j + 2);
		if((j + 2) * a == num)
		sum += a;
    }
    i++;
    if(sum == num)
    	printf("YES\n");
    else
    	printf("NO\n");
    sum = 0;
	}
	return 0;
}