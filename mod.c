#include <stdio.h>

int main() {
	
    int n, res=0;
    scanf("%d", &n);
    res += n / 10000;
    n = n % 10000;
    res += n / 1000;
    n = n % 1000;
    res += n / 100;
    n = n % 100;
    res += n / 10;
    n = n % 10;
    res += n;
    printf("%d\n", res);
    return 0;
}
