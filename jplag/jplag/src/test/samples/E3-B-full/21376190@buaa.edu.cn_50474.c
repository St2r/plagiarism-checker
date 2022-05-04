"""
2022-03-26 15:14:13
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1632 KB
Accepted | 1 * (1 / 4) | 2 ms | 1620 KB
Accepted | 1 * (1 / 4) | 3 ms | 1632 KB
Accepted | 1 * (1 / 4) | 3 ms | 1600 KB


"""

#include <stdio.h>
int main()
{
	int n,a,b,i;
	scanf("%d",&n);
	while(n--){
		b=0;
		scanf("%d",&a);
		for(i=1;i<a;i++){
			if(a%i==0)
			b=b+i;
		}
		if(b==a)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}	
	return 0;
}