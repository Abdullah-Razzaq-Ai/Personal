/*Write a program to produce the following output:  LET US C (Pg # 114)
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
*/
#include <stdio.h>
int main() {
    int n=6;
    for(int i=0; i<=n; i++){
        for(int s=1; s<=n-i; s++){
            printf("   ");
        }
        for(int j=0; j<=i; j++){
            int N=i;
            int R=j;
            int X=i-j;
            long long int fN=1,fR=1,fX=1;
            while(N!=0){
                fN*=N;
                N-=1;
            }
            while(R!=0){
                fR*=R;
                R-=1;
            }
            while(X!=0){
                fX*=X;
                X-=1;
            }
            
            int temp = (fN)/(fR*fX);
			printf("%3d   ",temp);
			
        }
        printf("\n");
    }
    return 0;
}

/*#include <stdio.h>
int f(int num){
    if(num<=1){
        return 1;
    }
    else{
        return (num*f(num-1));
    }
}
int main() {
    int n=10;
    for(int i=0; i<=n; i++){
        for(int j=1; j<=n-i; j++){
			printf("   ");
        }
        for(int j=0; j<=i; j++){
            int temp = (f(i))/(f(j)*f(i-j));
			printf("%3d   ",temp);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>

// Function to calculate binomial coefficient (nCr)
int binomialCoefficient(int n, int r) {
    if (r > n - r) r = n - r;
    int ans = 1;
    for (int i = 1; i <= r; i++) {
        ans = ans * (n - i + 1) / i;
    }
    return ans;
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int rows) {
    int maxDigits = 0;
    int maxRow = rows;

    // Calculate maximum digits in the triangle
    int maxValue = binomialCoefficient(maxRow, maxRow / 2);
    while (maxValue > 0) {
        maxDigits++;
        maxValue /= 10;
    }

    // Print the triangle
    for (int i = 0; i < rows; i++) {
        // Print numbers in row
        for (int j = 0; j <= i; j++) {
            int num = binomialCoefficient(i, j);
            printf("%*d", maxDigits, num);

            // Print spaces between numbers
            if (j < i) {
                printf("%*s", 2, "");
            }
        }

        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printPascalsTriangle(rows);
    return 0;
}*/
