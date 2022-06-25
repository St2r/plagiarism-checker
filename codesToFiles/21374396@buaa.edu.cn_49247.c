"""
2022-03-29 23:02:32
TLE
0.0
Wrong Answer | 0 * (1 / 10) | 0 ms | 1656 KB
Wrong Answer | 0 * (1 / 10) | 1 ms | 1688 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1736 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1736 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include <stdio.h>
int main(){
    int map[128] = { 0 }, n, cur = 0, i, flag = 1, maxvis = 0, step = 0;
    char vis[128] = { 0 };
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", map + i);
    }
    while(cur != n - 1){    
        if(cur < 0 || cur >= n || vis[cur]){
            flag = 0;
            break;
        }
        vis[cur] = 1;
        if(cur > maxvis){
            maxvis = cur;
        }
        cur += map[cur];
        step++;
    }
    if(flag){
        printf("True\n%d\n", step);
    }
    else{
        printf("False\n%d\n", maxvis);
    }
    return 0;
}