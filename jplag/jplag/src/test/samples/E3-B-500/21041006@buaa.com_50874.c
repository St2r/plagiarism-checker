"""
2022-03-29 20:10:41
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 9 ms | 1652 KB

"""

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b=1,c;
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		scanf("%d",&c);
		int sum=0,i=1;
		for(i=1;i<c;i++){
			if(c%i==0){
				sum+=i;
			}
		}
		if(sum==c){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
	return 0;
}