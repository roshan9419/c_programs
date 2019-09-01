#include<stdio.h>

int main()
{
	//Programs based on Topic 4
	
	//Program 1
	/*
		int i, n, fact=1;
		printf("Enter a number: ");
		scanf("%d", &n);
		i=n;
		
		for(n; n>0; n--){
			fact *= n;
		}
		printf("Factorial of %d is %d", i, fact);
	*/
	
	// Program 2
	/*
		int n, i;
		printf("Enter a number:");
		scanf("%d", &n);
		for(i=1; i<=n; i++){
			if(n%i == 0)
				printf
		}
	*/
	
	//Program 3
	/*
		int n, a, tem, rev=0;
		printf("Enter a number: ");
		scanf("%d", &n);
		a = n;
		while(n>0){
			tem = n % 10;
			rev = (rev * 10) + tem;
			n /= 10;
		}
		printf("Reverse of %d is %d", a, rev);
	*/
	
	//Program 4
	/*
		int n, a, tem, rev=0;
		printf("Enter a number: ");
		scanf("%d", &n);
		a = n;
		while(n>0){
			tem = n % 10;
			rev = (rev * 10) + tem;
			n /= 10;
		}
		if(rev == a) printf("Palindrome Number");
		else printf("Not a Palindrome Number");
	*/
	
	//Program 5
	/*
		int i;
		for(i=21; i<60; i++){
			if(i%7 != 0)
				printf("%d\n", i);
		}
	*/
	
	//Program 6
	/*
		int i;
		for(i=1; i<=10; i++){
			if(i%2 == 0)
				printf("%d is Even\n", i);
			else
				printf("%d is Odd\n", i);
		}
	*/
	
	//Program 7
	/*
		int i;
		char ch, uch;
		for(ch='A'; ch<='Z'; ch++){
			uch = ch++;
			printf("%c%c ", uch, ch);
		}	
	*/
	
	//Program 8
	/*
		int i, a, b, sum=0;
		printf("Enter any two numbers:\n");
		scanf("%d%d", &a, &b);
		for(i=a+1; i<b; i++){
			sum += i;
		}
		printf("Sum of numbers between %d and %d is %d", a, b, sum);
	*/
	
	//Program 9
	/*
		int i, n;
		printf("Enter a number: ");
		scanf("%d", &n);
		printf("\nTable of %d\n\n", n);
		for(i=1; i<=10; i++){
			printf("%d x %d = %d\n", n, i, n*i);
		}
	*/
	
	//Program 10
	/*
		int arr[10], i, oddC=0, evenC=0, zeroC=0;
		printf("Enter 10 numbers:\n");
		for(i=0; i<10; i++){
			scanf("%d", &arr[i]);
		}
		for(i=0; i<10; i++){
			if(arr[i]<0) ++oddC;
			if(arr[i]>0) ++evenC;
			if(arr[i]==0) ++zeroC;
		}
		printf("\nYour entries:\nEven\t%d\nOdd\t%d\nZeroes\t%d", evenC, oddC, zeroC);
	*/
	return 0;
}
