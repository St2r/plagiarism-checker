"""
2022-03-26 09:36:48
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1532 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1640 KB
712 KB
Accepted | 1 * (2 / 10) | 9 ms | 1604 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 892 KB

"""

#include<stdio.h>
int main(){
	int n,arr[151]={0};
	scanf("%d",&n);
    for(int i=0;i<n;i++){
    		scanf("%d",&arr[i]);
	}

	for(int j=0;j<n;j++){
		int sum=0;
	    for(int k=1;k<arr[j];k++){
	    	if(arr[j]%k==0) sum+=k;	
		}
		if(sum==arr[j]) printf("YES\n");
		else printf("NO\n");

	}
	
	
}