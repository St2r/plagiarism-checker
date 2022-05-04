"""
2022-03-28 12:37:34
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1604 KB
Accepted | 1 * (35 / 100) | 2 ms | 1668 KB
Accepted | 1 * (60 / 100) | 4 ms | 1624 KB

"""

#include <stdio.h>
#include <math.h>
int main(){
	int n, i=0, a[200], count=0;
	scanf("%d", &n);
	int m = n;
	while(n>0){
		scanf("%d", &a[i]);
		i++;
		n--;
	}
	i = 0;
	int j = 1;
	while(i<m){
	    while (j < a[i]){
		    if(a[i] % j ==0){
			count+=j;
				}
				j++; 
	    }
	if(count == a[i]){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	i++;
	j = 1;
	count = 0;
    }
	return 0;
}