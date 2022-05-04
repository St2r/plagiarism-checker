"""
2022-03-29 23:36:42
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1676 KB
Accepted | 1 * (35 / 100) | 1 ms | 1572 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int n, s=0, a, i, j;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d\n", &a);
		for(int j=1;j<a;j++){
		if(a%j==0)
		  s+=j;	
	    }
	    if(s==a)
          printf("YES\n");
        else
          printf("NO\n");
        s=0;
    }
    return 0;
}