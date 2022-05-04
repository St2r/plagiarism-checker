"""
2022-03-26 09:32:01
AC
1.0
Accepted | 1 * (1 / 4) | 7 ms | 1668 KB
Accepted | 1 * (1 / 4) | 2 ms | 1592 KB
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 9 ms | 1676 KB

B

"""

#include<stdio.h>

int main()
{
	int n, i, m, t, cnt, sum, sum1, store, num, x;
	scanf("%d",&n);
//n  = 1;
	for(i = 0;i < n;i++){
	scanf("%d",&m);
//	m = 28;
		t = m;
		for(num = 1,x = 1;x != 0;num++){
			x = m / num;
		}
		for(cnt = 1,sum = 0,sum1 = 0;cnt < m;cnt++){
			if(cnt == 1){
				sum += 1; 
			}else{
				if(0 == (m%cnt)){
					sum1 += (cnt + m/cnt); 
				}
			}
		}
		sum += sum1/2;
		if(sum == m){
			printf("YES\n");
		}else{
			printf("NO\n");
		}

	}
	
	return 0;
 }