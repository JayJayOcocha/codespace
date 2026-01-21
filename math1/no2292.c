#include <stdio.h>

int main() {
    int i = 0, count = 1;
    int n;
    scanf("%d", &n);
    int sum = 1;
    while(n > sum){
        i++;
        sum += 6*i;
        count++;
    }
    printf("%d", count);
}