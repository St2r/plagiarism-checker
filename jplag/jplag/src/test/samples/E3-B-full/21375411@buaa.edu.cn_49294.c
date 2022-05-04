"""
2022-03-26 13:47:55
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 3 ms | 1644 KB
Accepted | 1 * (60 / 100) | 4 ms | 1680 KB

"""

#include<stdio.h>
int main()
{   int m,j=0;
    int n,a[100];
    int sum=0;
	int i=1;
    int cnt=0;
    scanf("%d",&m);
    for(j=0;j<m;j++){
     	scanf("%d",&n);
        for(i=1;i<=n/2;i++){
	    	if(n%i==0){
			    a[cnt]=i;
		    	cnt++;
	    	}
    	}
	    i=0;
     	for(i=0;i<cnt;i++){
		    sum+=a[i];
     	}
    	if(sum==n){
    		printf("YES\n");
    		
		}else{
			printf("NO\n");
		}
		sum=0;
		cnt=0;
		i=1;
	}

	
	return 0;
}