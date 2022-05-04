"""
2022-03-27 10:08:57
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	int i,j,k,m,n,sum=0;
	int yy[1500];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&yy[i]);
	}
	for(i=0;i<n;i++){
		sum=0;
    	for(j=1;j<yy[i];j++){
		if(yy[i]%j==0){
		   sum+=j;
		}
	    }
	 if(sum==yy[i]){
	 	printf("YES\n");
	 }else{
	 	printf("NO\n");
	 }
    }
    return 0;
}