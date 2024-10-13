// To check for Kaprekar Number
#include <stdio.h>
#include <math.h>
int main() {
    int n,sq,mul=1;
    scanf("%d",&n);
    sq=n*n;
	int count=0,temp=n;
	while (temp!=0) {
        temp/=10;
        count++;
    }
	mul=(int)pow(10,count);
    if((sq%mul+sq/mul)==n){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}


/*#include <stdio.h>

int main() {
    int n, sq;
    scanf("%d", &n);
    sq = n * n;

    int isKaprekar = 0;  // Flag to check if it's a Kaprekar number
    int mul = 1;         // Start splitting at 1

    // Loop to split the squared number
    while (mul <= sq) {
        int left = sq / mul;      // Left part
        int right = sq % mul;     // Right part

        if (right != 0 && (left + right == n)) { // Ensure right part isn't zero
            isKaprekar = 1;       // Set flag to true if it's a Kaprekar number
            break;                // Exit the loop if found
        }
        mul *= 10;                // Increase mul to split more digits
    }

    if (isKaprekar) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}*/