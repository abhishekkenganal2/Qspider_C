#include<stdio.h>
int palindrome(int n,int sum)
{
	if(n==0)
		return sum;
	else{
		int t = n %10;
		sum = sum *10 + t;
		palindrome(n/10,sum);
	}
}
void main()
{
	int n,sum=0,result=0;
	printf("Enter the no's:");
	scanf("%d",&n);
	result = palindrome(n,sum);
	if(result == n)
		printf("%d is palindrome.\n",result);
	else
		printf("%d is not palindrome.\n",n);
}

