#include<stdio.h>

int main()
{
	//Programs based on Topic 3
	
	//Program 1
	/*
		int a, b, c;
		printf("Enter 3 numbers:\n");
		scanf("%d%d%d", &a, &b, &c);
		if(a>b && a>c) printf("%d is greater.", a);
		else if(b>a && b>c) printf("%d is greater.", b);
		else printf("%d is greater.", c);
	*/
	
	//Program 2
	/*
		int year;
		printf("Enter a year: ");
		scanf("%d", &year);
		if(year%100 == 0){
			if(year%400 == 0)
				 printf("Leap Year");
			else
				printf("Not a leap year");
		}
		else{
			if(year%4 == 0)
				printf("Leap year");
			else
				printf("Not a leap year");
		} 
	*/		
	
	//Program 3
	/*
		int n;
		printf("Enter a number: ");
		scanf("%d", &n);
		if(n%2 == 0) printf("Even");
		else printf("Odd");	
	*/
	
	//Program 4
	/*
		char gen;
		float bonus=0.00, salary=0.00;
		printf("Enter your Gender(M,F): ");
		scanf("%c", &gen);
		printf("Enter your salary: ");
		scanf("%f", &salary);
		
		if(gen == 'M' || gen == 'm'){
			if(salary > 10000)
				bonus = 1000;
			else if(salary < 10000 && salary > 5000)
				bonus = 500;
			else if(salary < 5000)
				bonus = 100;
			else
				bonus = 0;
		}else if(gen == 'F' || gen == 'f'){
			if(salary > 10000)
				bonus = 100;
			else if(salary < 10000 && salary > 5000)
				bonus = 50;
			else if(salary < 5000)
				bonus = 10;
			else
				bonus = 0;
		}
		printf("Your total salary after adding bonus is : Rs %1.2f", salary + bonus);
	*/
	
	//Program 5
	/*
		int day;
		printf("1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");
		printf("Enter the Day : ");
		scanf("%d", &day);
		
		switch(day){
			case 1:
				printf("Enjoy! It's Holiday");
				break;
			case 2:
				printf("So sad you still have to work");
				break;
			case 3:
				printf("So sad you still have to work");
				break;
			case 4:
				printf("So sad you still have to work");
				break;
			case 5:
				printf("So sad you still have to work");
				break;
			case 6:
				printf("So sad you still have to work");
				break;
			case 7:
				printf("Enjoy! It's Holiday");
				break;
			default:
				printf("Invalid Date");
		}
	*/
	
	//Program 6
	/*
		int unit, charge, total;
		printf("Enter the units consumed: ");
		scanf("%d", &unit);
		
		if(unit<=200)
			printf("You have to Pay Rs %d ", 2*unit);
		else if(unit>200 && unit<=400)
			printf("You have to Pay Rs %d ", 400 + (unit-200)*4);
		else
			printf("You're warned to not consume too much electricity");
	*/
	
	//Program 7
	/*
		char ch;
		printf("Which shape you want to find the area : ");
		scanf("%c", &ch);
		float area=0, l, b, r;
		if(ch == 'r' || ch == 'R'){
			printf("Enter the dimensions of rectangle(L,B):\n");
			scanf("%f%f", &l, &b);
			area = l * b;
		}else if(ch == 's' || ch == 'S'){
			printf("Enter the side of square: ");
			scanf("%f", &l);
			area = l * l;
		}else if(ch == 'c' || ch == 'C'){
			printf("Enter the length of the radius: ");
			scanf("%f", &r);
			area = 3.14*r*r;
		}else
			printf("Invalid Character");
	
		printf("\nYour calculated area is %1.2f sq. units", area);
	*/
	
	
	return 0;
}
