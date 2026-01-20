#include <stdio.h>

int totalPoints(int base, int n, int count){
    //base case
    if(count == 1){
        return base;
    }
    n*=2;
    // 그게 아니면 base에다가 n 더한 값과 두 배가 된 n
    // 그리고 줄어드는 count로 베이스 케이스까지 손보면 되지 않을까?
    // printf("base, n, count %d %d %d\n", base, n, count);
    return totalPoints(base+n, n, --count);
}

int main() {
    int a, n=2, total=n;
    int final;
    scanf("%d", &a);

    int i = 1;

    // 초기 상태
    if(a == 0){
        printf("%d", n);
    }else{
        final = totalPoints(n, i, a) + 1;
        printf("%d", final * final);
    }

    
    return 0;
}

// 그냥 그림을 그려봣다

//       총    기존(흰점)  새로(검은점)
// 초기  2^2   0           4
// 1번   3^2   4           5
// 2번   5^2   9           16
// 3번   9^2   25          56

// 흰점은 이전에 있던 총 점의 개수와 같았고
// 새로 생기는 검은 점은
// 2^2 -> 3^2 -> 5^2 -> 17^2 -> 33^2 이렇게
// 1,2,4,8,16 2의 배수 만큼 n^2 n에 다가 더하는 식으로 증가하였다
