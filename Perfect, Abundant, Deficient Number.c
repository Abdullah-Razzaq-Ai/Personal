// To determine whether a number is a perfect, abundant or a deficient number
#include <stdio.h>
int main() {
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    int div[num];
    int counter=0;
    int sum=0;
    for(int i=1; i<num; i++){
        if(num%i==0){
            div[counter]=i;
            sum+=div[counter];
            counter++;
        }
    }
    printf("No. of Proper Divisor: %d\n",counter);
    for(int i=0; i<counter; i++){
        printf("%d ",div[i]);
    }
    printf("\nSum is: %d",sum);
    if(sum==num){
        printf("\nThe number is a Perfect Number");
    }
    else if(sum>num){
        printf("\nThe number is an Abundant Number");
    }
    else{
        printf("\nThe number is a Defecient Number");
    }
    return 0;
}
