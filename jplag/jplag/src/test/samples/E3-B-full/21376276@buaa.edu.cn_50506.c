"""
2022-03-26 12:01:30
AC
1.0
Accepted | 1 * (1 / 4) | 12 ms | 1644 KB
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 2 ms | 1580 KB
Accepted | 1 * (1 / 4) | 3 ms | 1676 KB
B

"""

#include<stdio.h>
#include<stdbool.h>
bool wanshu(int val)
{
	int i = 1;
	int sum = 0;
	for(i = 1; i< val; i++){
		if(val % i == 0){
			sum += i;
		}
	}
	if(sum == val){
		return true;
	}else {
		return false;
	}
}

int main()
{	
	int n;
	scanf("%d", &n);
	int b[10005];
	int i = 0; 
	for( i = 0; i< n; i++){
		scanf("%d",&b[i]);
	}
	int j = 0;
	for(j = 0; j < n;j++){
			if(wanshu(b[j])){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}