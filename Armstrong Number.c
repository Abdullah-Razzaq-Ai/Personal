/*Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. */
//Let Us C Old (Pg # 129)
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter Range: ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		int temp1=i,temp2=i;
		int sum=0;
		int count;
		
		for(count=0; temp1!=0; count++){
			temp1/=10;
		}
		
		while(temp2!=0){
			int rem=temp2%10;
			sum+=pow(rem,count);
			temp2/=10;
		}
		
		if(sum==i){
			printf("%d\n",i);
		}
		else{
			continue;
		}
	}
}
