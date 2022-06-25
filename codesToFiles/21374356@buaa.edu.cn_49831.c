"""
2022-03-29 22:02:58
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (2 / 10) | 0 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include<stdio.h>
 int main()
  { 
  int n; 
  double sum = 1.0,k=1.0; 
  scanf("%d",&n);
  if(n>100) n=100; 
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= i; j++) {
        k *= j; 
    }
       sum += 1.0*1/k; 
        k=1.0;
    } 
    printf("%.14f\n",sum);
    return 0;
	 }