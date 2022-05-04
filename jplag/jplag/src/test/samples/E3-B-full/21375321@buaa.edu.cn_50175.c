"""
2022-03-28 19:41:19
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include <stdio.h> 

int main()
{
	int n,a,i,j,k,b[101],c;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		k=0;
		for(j=0;j<a;j++){
			if(a%(j+1)==0&&a/(j+1)!=1){
				b[k]=j+1;
				k+=1;
			}
		}
		c=0;
		for(j=0;j<k;j++){
			c+=b[j];
		}
		if(c==a){
			printf("YES\n"); 
		}else{
			printf("NO\n");
		} 
	}
	return 0;
}