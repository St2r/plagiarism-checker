"""
2022-03-29 20:45:12
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 1732 KB
Wrong Answer | 0 * (35 / 100) | 1 ms | 1684 KB
Wrong Answer | 0 * (60 / 100) | 1 ms | 1680 KB

"""

#include <stdio.h>
int main()
{
	int n, a[100], b[10000], i, j, sum = 0;
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(i = 0;i < n; i++);{
		sum = 0;
		for(j = 1;j < a[i];j++){
	  if(a[i] % j == 0){
	  	b[j] = j;
	  }
	  else{
	  	b[j] = 0;
	  }
	  
	  	sum += b[j];
	  }
	}
	if(sum == a[i]){
	  printf("Yes\n");
	}
	else {
	  printf("No\n");
	}
	return 0;
}