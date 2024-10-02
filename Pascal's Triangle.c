/*Write a program to produce the following output:  LET US C (Pg # 114)
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
*/
#include <stdio.h>
int main() {
    int n=15;
    for (int i = 0; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            printf("    ");
        }
        int C = 1;
        for (int j = 0; j <= i; j++) {
            printf("%4d    ", C);
            C = C * (i - j) / (j + 1);  // Formula C(i, j) = C(i, j-1) * (i - j + 1) / j
        }
        printf("\n");
    }
    return 0;
}
