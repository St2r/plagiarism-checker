"""
2022-03-28 14:55:12
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1652 KB
Accepted | 1 * (35 / 100) | 6 ms | 1544 KB
Accepted | 1 * (60 / 100) | 5 ms | 1620 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>


int main(){
	int n,num[105]={0},a[105]={0};
	int i,j,k;
	scanf("%d",&n);
	
	for(j=1;n>0;n--){//把被判断的数存进数组 
		scanf("%d",&num[j]);
		j++;
	}
	for(j=1;num[j]!=0;j++){
		for(i=1;i<num[j];i++){
			int c=num[j]%i;
			if(c==0 && num[j]!=i){
			a[j]+=i;
			}
			
		}
	}
	
	for(k=1;k<=j && num[k]!=0;k++){
		if(num[k]==a[k]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	
return 0;
}