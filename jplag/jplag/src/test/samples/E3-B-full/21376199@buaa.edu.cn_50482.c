"""
2022-03-28 13:51:22
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1668 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1616 KB

"""

#include<stdio.h>
int main(){
	int n,n_i,n_o[108]={};
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
        {
		scanf("%d",&n_i);
		for(int j=1;j<n_i;j++)
            {
			if(n_i%j==0)
			{
				n_o[i]=n_o[i]+j;
			}
		}
		if(n_o[i]!=n_i)
		{
			n_o[i]=0;
		}
		else{
			n_o[i]=1;
		}
	}
	for(int i=1;i<=n;i++){
		if(n_o[i]==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
return 0;
}