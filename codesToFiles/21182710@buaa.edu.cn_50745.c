"""
2022-03-29 22:10:11
CE
0.0
main.c: In function 'main':
main.c:12:9: error: 'en' undeclared (first use in this function); did you mean 'e'?
     e=e+en;
         ^~
         e
main.c:12:9: note: each undeclared identifier is reported only once for each function it appears in
main.c:4:2: warning: ignoring return value of 'scanf', declared with attribute warn_unused_result [-Wunused-result]
  scanf("%d", &n);
  ^~~~~~~~~~~~~~~


"""

#include<stdio.h>
int main()
{ int n, i=1;
 scanf("%d", &n);
 
 double eps=1e-14, m=0, e=1;
 long long p=1;
 
  for(i=1; i<=n; i++)
    {  m=m*i;  
   m=1.0/p; 
    e=e+en;  
	if(m-eps<0) 
	  {
	    printf("%.14lf", e); 
	   return 0;  
	  } 
	} 
printf("%.14lf", e);
 return 0;
 }