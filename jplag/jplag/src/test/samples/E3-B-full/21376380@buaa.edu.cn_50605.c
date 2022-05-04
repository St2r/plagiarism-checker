"""
2022-03-28 16:29:08
AC
1.0
Accepted | 1 * (3 / 5) | 9 ms | 1692 KB
Accepted | 1 * (1 / 5) | 13 ms | 1612 KB
Accepted | 1 * (1 / 5) | 2 ms | 1696 KB
B

"""

#include <stdio.h>
int main()
{
  int n,i,s=0,a[n],x;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  i=0;
  while(i<n) {
  
  for(x=1;x<a[i];x++){
  	if(a[i]%x==0)
  	s+=x;

  	 }
  	
	  if(s==a[i])
  	printf("YES\n");
  	else
  	printf("NO\n");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
  	i++;}
  	return 0;
  }