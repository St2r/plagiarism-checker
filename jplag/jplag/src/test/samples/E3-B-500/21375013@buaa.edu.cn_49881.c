"""
2022-03-29 21:09:50
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 1620 KB
Wrong Answer | 0 * (35 / 100) | 0 ms | 1508 KB
Wrong Answer | 0 * (60 / 100) | 1 ms | 1612 KB

"""

#include<stdio.h>
int main()
{
	int n, a[100];
	int i = 0;
	int b, c;
	scanf("%d",&a[i]);
	while(i<n){
		scanf("%d",&a[i]);
		b = 1;
		c = 0;
			while(b<=(a[i])/2)
			{
				if(a[i]%b == 0){
					c += b;
				}
			b++;	
			}
			if(c==a[i])
			{
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
			i++;
	}	
	return 0;
}