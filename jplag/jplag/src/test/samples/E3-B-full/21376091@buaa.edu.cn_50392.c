"""
2022-03-29 09:50:27
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	int n, i, number, j;
	int result = 0;
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		result = 0;
		scanf("%d",&number);
		for(j = 1;j < number;j++){
			if(number % j == 0){
				result += j;
			}
		}
		if(result == number){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}