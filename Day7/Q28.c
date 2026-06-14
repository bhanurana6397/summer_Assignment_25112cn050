#include <stdio.h>
int rev(int n, int r);
int main () {
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("The reverse of the number is %d\n", rev(n, 0));
    return 0;
}

int rev(int n, int r) {
    if (n == 0) {
        return r;
    }
    return rev(n / 10, (r * 10) + (n % 10));
}
