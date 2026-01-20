#include <stdio.h>
#include <math.h>

long long findExp(long long a);

int main() {
    // printf("%lld", findExp(1e+12)); // 1조 (10의 12승)

    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);


    printf("%lld", a+b+c);
        
    return 0;
}

long long findExp(long long a){
    return (long long)ceil(log2((double)a));;
}

// 문제가 뭐였냐면 결국 타입 문제였음
// C가 이제 10의 12승보다 작거나 같아야 한다는 것은
// 1조보다 작은 크기 가지 입력 받아야 한다는 건데
// int형은 4byte -> 2^32 크기를 가짐
// 와 근데 -랑 +도 생각해야하니깐
// 양의 정수 부분은 2^31-1까지 밖에 못가지잖아

// 2147483647 가 2^31-1 인 것 같고

// 2^x 는 1조 보다 클 것이다
// x를 어떻게 구할것이냐
// 로그 함수의 법칙을 사용하자
// log 2^x = log 1조
// x log2 2 = log2 1조
// x = log2 1조
// x는 40정도가 나온다

// x의 40승 정도는 long long type으로 처리해줘야한단다
// 시발