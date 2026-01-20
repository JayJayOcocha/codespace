#include <stdio.h>

int main(void) {
    char s[36];
    int B;
    long long result = 0;

    scanf("%35s %d", s, &B);

    for (int i = 0; s[i] != '\0'; i++) {
        int digit; // 이 digit은 뭔데 시발

        if (s[i] >= '0' && s[i] <= '9')
        // 이제 각자리의 수가 0에서 9 사이 일 경우
            digit = s[i] - '0';
            // digit은 아스키값으로 0을 빼준만큼이 될거고
            // 예를 들어서 
            // 0일 때는 '0' - '0' = 0
            // 1일 때는 '1' - '0' = 1
            // ...
        else
            digit = s[i] - 'A' + 10;
            // A부터 Z일 경우는
            // A일 때는 'A' - 'A' + 10 = 10
            // B일 때는 'B' - 'A' + 10 = 11
            // Z일 때는 'Z' - 'A' + 10 = 35

        result = result * B + digit;
        // result에 이제 그걸 왜 result*B+ digit으로 더하는 거임?
        // 왜? 시발
        // 12345 라는 숫자가 있음
        // base는 10이고
        // 처음에 result는 0, digit은 1일거임
        // result = result * 10 + 1 = 0+1 = 1

        // 다음 i+1 루프
        // result는 1, digit은 2
        // result = result *10 + 2 = 1*10+2 = 12

        // 다음 i+2
        // result는 12, digit은 3,
        // result = result*10 + 3 = 120+3 = 123
    }

    printf("%lld\n", result);
    return 0;
}


// 어떻게 접근 해야하려나
// swith case 사용해서 0-9까지는 평범하게
// 10진수는 10 default
// 11진수 부터는 A-Z 까지 사용하게끔 해야할 것 같음
// 응 아니야

// 일단
// (B-1)(B^n) + (B-1)(B^n-1) + ... 이잖음

