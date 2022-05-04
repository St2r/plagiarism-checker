"""
2022-03-26 21:15:52
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1660 KB
Accepted | 1 * (35 / 100) | 11 ms | 1648 KB
Accepted | 1 * (60 / 100) | 16 ms | 1556 KB

"""

#include <stdio.h>
int main()
{
	int n,a[10001];
	int b;
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d",&b);
		int sum = 1;
		for(int j=2;j<10001;j++){
			if(b % j == 0){
				sum = sum + j;
				//TODO
			}
			//TODO
		}sum = sum - b;
		if(sum == b){printf("YES\n");
			//TODO
		}else{
			printf("NO\n");}
		//TODO
	}
	return 0;
}