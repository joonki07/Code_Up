#include <stdio.h>
#include <stdlib.h>

int map[101][101] = {};
int n,m;
int answer = 0;
int visit[101] = {};

void f(int x){
    for(int i = 1; i <= n; ++i){
       if(map[x][i] == 0) continue;
       if(visit[i] == 1) continue;
        visit[i] = 1;
        ++answer;
        f(i);
    }
}

int main(){

    scanf("%d", &n);
    scanf("%d", &m);

    int a,b;
    for(int i = 0; i < m; ++i){
        scanf("%d %d", &a, &b);
        map[a][b] = 1;
        map[b][a] = 1;
    }

    f(1);

    printf("%d", answer-1);

    return 0;
}
