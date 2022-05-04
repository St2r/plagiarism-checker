"""
2022-03-26 16:15:07
AC
1.0
Accepted | 1 * (5 / 100) | 10 ms | 1600 KB
Accepted | 1 * (35 / 100) | 12 ms | 1584 KB
Accepted | 1 * (60 / 100) | 17 ms | 1544 KB

"""

#include <stdio.h>
int main(){
	int n;
	scanf("%d\n",&n);
	int a[n];
	int i=0;
	while (i<n){
		scanf("%d\n",&a[i]);
		i++;
	}
	
	int j;
	int k=1;
	int sum=0;
	for (j=0;j<n;j++){
		for (k=1;k<a[j];k++){
		if (a[j]%k==0){sum = sum +k;}
		else {sum=sum;}	
		}
		if (sum==a[j]){printf("YES\n");}
		else {printf("NO\n");}
		sum=0; 
	}
	return 0;
}