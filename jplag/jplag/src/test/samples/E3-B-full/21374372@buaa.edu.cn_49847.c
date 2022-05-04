"""
2022-03-26 14:23:53
WA
0.333333
Accepted | 1 * (1 / 3) | 8 ms | 1592 KB
Wrong Answer | 0 * (1 / 3) | 12 ms | 1616 KB
Wrong Answer | 0 * (1 / 3) | 141 ms | 1592 KB


"""

#include <stdio.h>
int main()
{
	int n=0,a;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		if(a==6 || a==28 || a==496 || a==8128){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}