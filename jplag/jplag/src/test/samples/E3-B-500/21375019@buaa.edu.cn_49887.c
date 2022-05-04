"""
2022-03-27 08:54:52
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1620 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 3 ms | 1644 KB

"""

#include <stdio.h>
# include <math.h>
int main()
{
    int arr[105];
    int a,b=0,n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    	scanf("%d",&arr[i])	;
	}
	for(j=0;j<n;j++){
		a=arr[j];
		for(k=1;k<=(a/2);k++){
			if(a%k==0)b+=k;
		}
		if(b==a){
			printf ("YES\n");
		}
		else{
		printf("NO\n");
		}
		b=0;
	}
	
    return 0;
}