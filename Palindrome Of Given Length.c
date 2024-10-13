//  To count number of palindromes of given length in a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int count=0;
    int l;
    printf("Enter String: "); scanf("%[^\n]s",str);
    printf("Enter length of sub-string to check for palindrome: "); scanf("%d",&l);
    for(int i=0; i<strlen(str)-l+1; i++){
        int palindrome=1;
        for(int j=0; j<l/2; j++){
            if(str[j+i]!=str[l+i-1-j]){
                palindrome=0;
                break;
            }
        }
        if(palindrome){
            count++;
        }
    }
    printf("Number of Palindrome with the length %d are: %d",l,count);
    return 0;
}