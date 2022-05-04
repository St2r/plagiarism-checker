"""
2022-03-29 22:40:34
REG
0.0
Runtime Error (SIGSEGV) | 0 * (5 / 100) | 134 ms | 1492 KB
Runtime Error (SIGSEGV) | 0 * (35 / 100) | 132 ms | 1468 KB
Runtime Error (SIGSEGV) | 0 * (60 / 100) | 132 ms | 1460 KB

"""

#include<stdio.h>
#include<math.h>

int a[1000];
int real(int);

int main(){
	int i,n;
	scanf("%d",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if (real(a[i]))
		printf ("YES");
		else
		printf("NO");
		
	} 
	return 0;
}