"""
2022-03-27 22:25:39
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1604 KB
Accepted | 1 * (35 / 100) | 2 ms | 1600 KB
Accepted | 1 * (60 / 100) | 4 ms | 1684 KB

"""

#include <stdio.h>
int main ()
{
	int n=0;
	scanf("%d",&n);
	int a[110];
	int i=0;
	while(i<n){
		scanf("%d",&a[i]);
		i++;
	}
	
int k=0;
	while(k<n){
		int j=1;
	
    int p=0;
	    while(j<a[k]){
	        if(a[k]%j==0){
	    	    p=p+j;    	
		    }	
	    j++;	
	    }
	    if(p!=a[k]){
		printf("NO\n");
	    }else if(p==a[k]){
		printf("YES\n");
	    }
	k++;
	
	}
	

	return 0;
}