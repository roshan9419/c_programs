#include<stdio.h>

int main()
{
	//Programs based on Topic 2:
	
	//Program 1:
	/*	int a, b, temp;
		printf("Enter two numbers(a, b):\n");
		scanf("%d%d", &a, &b);
		temp = a;
		a = b;
		b = temp;
		printf("Before Swapping\na = %d\tb = %d\n", temp, a);
		printf("After Swapping\na = %d\tb = %d", a, b);
	*/
	
	//Program 2:
	/*
		int age;
		printf("Enter your age: ");
		scanf("%d", &age);
		age>18 ? printf("Eligible") : printf("Not Eligible") ;
	*/
	
	//Program 2:
	/*
		int att, marks;
		printf("Enter your attendence and CA Marks:\n");
		scanf("%d%d", &att, &marks);
		(att<75 && marks<40) ?  printf("Sorry!") : printf("You are eligible to seat");
	*/
	
	//Program 3:
	/*
		int a, b;
		printf("Enter two numbers:\n");
		scanf("%d%d", &a, &b);
		a>b ? printf("%d is greater than %d", a, b) : printf("%d is greater than %d", b, a);
	*/
	
	//Program 4:
	/*
		int n;
		printf("Enter a number: ");
		scanf("%d", &n);
		n>0 ? printf("Positive") : printf("Negative");
	*/
	
	//Prorgam 5:
	/*
		int pen, book, nbook;
		printf("Enter the quantity of Pens, Books and Notebooks:\n");
		scanf("%d%d%d", &pen, &book, &nbook);
		printf("Item Name    \tQuantity\tPrice\n");
		printf("-------------------------------------\n");
		printf("Pen          \t%d       \t%d\n", pen, pen*10);
		printf("Book         \t%d       \t%d\n", book, book*20);
		printf("Notebook     \t%d       \t%d\n", nbook, nbook*15);
		printf("-------------------------------------\n");
		printf("Total Amount:\t         \t%d", pen*10 + book*20 + nbook*15);
	*/
	
	//Program 6:
	/*	
		int dt, mn, yr;
		printf("Enter your DOB(dd mm yyyy): ");
		scanf("%d%d%d", &dt, &mn, &yr);
		printf("You have seen %d Independence Days", 2019-yr);
	*/
	
	//Program 7:
	/*
		int i, num[3];
		printf("Enter three Numbers:\n");
		for(i=0; i<3; i++)scanf("%d", &num[i]);
		int grt = num[0];
		for(i=0; i<3; i++)
			if(num[i]>grt)
				grt = num[i];
		printf("Greatest number is %d", grt);
	*/
	return 0;
}
