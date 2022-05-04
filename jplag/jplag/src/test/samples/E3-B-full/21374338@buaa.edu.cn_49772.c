"""
2022-03-26 14:52:10
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 3 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1632 KB

"""

# include<stdio.h>
int main(){
	int n,x[100],i=0;
	scanf("%d",&n);
	while (n--){
	scanf("%d",&x[i]);
	int count=0;
	for (int k=1;k<x[i];k++){
		if (x[i]%k==0){count+=k;}
	}	
	if (count==x[i]){printf("YES\n");}
	else {printf("NO\n");}
	i++;
	}
return 0;
}