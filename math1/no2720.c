#include <stdio.h>

void returnCoins(int a){
    int q =0, d = 0, n = 0, p = 0;
    // quarter의 개수를 구하고 a는 남은 값만 가지게 한다
    q += a/25;
    a%=25;

    d += a/10;
    a%=10;

    n += a/5;
    a%=5;

    p += a/1;

    printf("%d %d %d %d\n", q,d,n,p);
    
}

int main() {
    int t;
    scanf("%d", &t); // 첫줄에 주어지는 테스트 케이스 개수 t
    // int i = 0;
    for(int i = 0; i< t; i++){
        int temp;
        scanf("%d", &temp);

        returnCoins(temp);
    }

    // printf("%d", 10/4);
    return 0;
}

