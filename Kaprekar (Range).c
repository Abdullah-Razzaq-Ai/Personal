//To print Kaprekar numbers in a given range
#include<stdio.h>
#include<math.h>
int main()
{
	for(int n=1; n<=100; n++){
		int sq=n*n;
		int count=0,temp=n;
		while (temp!=0) {
	        temp/=10;
	        count++;
	    }
		int mul=(int)pow(10,count);
		int l=sq/mul;
        int r=sq%mul;
	    if(r!=0 && (l+r==n)){
	        printf("%d\n",n);
	    }
	}
    return 0;
}