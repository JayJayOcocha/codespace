#include <stdio.h>

int main() {
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    int s = 0;
    float day;
    day = (float)(v-b)/(a-b);
    printf("%f", day);
    
    if(day == (int) day){
        printf("%d", (int) day);
    }else{
        printf("%d", (int) day +1);
    }
    
    return 0;
}

// 일단 알고리즘은 맞는 것 같은데 시간 초과가 나네
// O(n) 이 너무 커서 그런 것 같은데
// 어찌하면 좋을까