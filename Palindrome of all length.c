#include <stdio.h>
#include <string.h>
int main() {
    char str[1000]="aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    // scanf("%[^\n]s",str);
    for(int l=1; l<=10; l++){
        int count=0;
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
        printf("Of length %d: %d\n",l ,count);
    }
    return 0;
}