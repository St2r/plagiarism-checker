"""
2022-03-29 22:04:11
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1584 KB

"""

#include<stdio.h>
int main()
{
int n;
 scanf("%d", &n); 
int a[n], i=0, sum=0, y=1;

 for(i=0; i<n; i++) 
{  scanf("%d", &a[i]); }

 i=0; 
while(i<n) 
{  
     if(a[i]==1)  
     {   printf("NO\n");  
         i++;    
         continue;
      }  
   while(y<a[i]) 
  {  
           if(a[i]%y==0)  
           {    
                sum=sum+y;    
                y++;  
          }  
           else  
          {
             y++; 
          }  
         if(y==a[i])
         { 
              if(sum==a[i]) 
              {     
              printf("YES\n");
              }
         else
        { 
           printf("NO\n");
        }
        break;
       } 
 }  
sum=0;  y=1;  i++;

 } 

return 0;
}