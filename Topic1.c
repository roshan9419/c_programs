#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	// Programs based on Topic 1
	
	//Program 1:
	/*
		printf("hello world");
	*/
	
	//Program 2:
	/*
		int a; float ft; double dl; char ch;
		printf("%d", a); printf("%f", ft); printf("%lf", dl); printf("%c", ch);
	*/
	
	//Program 3:
	/*
		int a, b;
		printf("Enter two numbers:\n");
		scanf("%d%d", &a, &b);
		printf("Sum of %d and %d is %d", a, b, a+b);
	*/
	
	//Program 4:
	/*
		int t; float p; float r;
		printf("Enter the Principle(Rs): ");
		scanf("%f", &p);
		printf("Enter the Rate: ");
		scanf("%f", &r);
		printf("Enter the Time(yrs): ");
		scanf("%d", &t);
		printf("Your Simple Interest is: %1.2f\n", (p*r*t)/100);
		printf("Your Compound Interest is: %1.2f\n", p-((p*r*t)/100);
	*/
	
	//Program 5:
	/*
		int i; 
		float arr[5], sum=0;
		printf("Enter marks of 5 subjects:\n");
		for(i=0; i<5; i++)
			scanf("%f", &arr[i]);
		for(i=0; i<5; i++)
			sum += arr[i];
		printf("Your Average is: %1.2f", sum/5);
	*/
	
	//Program 6:
	/*
		float c, f;
		int choice;
		printf("What you want to Conevert:\n");
		printf("1. Centigrade to Farenheit\n2. Farenheit to Centigrade");
		printf("%d", &choice);
		if(choice == 1){
			printf("Enter the value in Centigrade: ");
			scanf("%f", &c);
			printf("Temperature in Farenheit is: ");
		}else if(choice == 2){
			printf("Enter the value in Farenheit: ");
			scanf("%f", &f);
			printf("Temperature in Centigrade is: ");
		}else
			printf("Invalid Choice!!");
	*/
	
	//Program 7:
	/*
		float area, r, lt, bt, pie=3.14;int s, a, b, c; int choice;
		printf("Choose your shape:\n");
		printf("1. Circle\n2. Rectangle\n3. Triangle\n");
		scanf("%d", &choice);
		switch(choice){
			case 1:{
				printf("Enter the radius of circle: ");
				scanf("%f", &r);
				printf("Area of circle is %1.2f sq. unit", (pie*r*r));
				break;
			}
			case 2:{
				printf("Enter the value of Length and Breadth:\n");
				scanf("%f%f", &lt, &bt);
				printf("Area of Rectangle is %1.2f sq. unit", lt*bt);
				break;
			}
			case 3:{
				printf("Enter the sides of triangle:\n");
				scanf("%d%d%d", &a, &b, &c);
				s = (a+b+c)/2;
				printf("Area of Triangle is %1.2f sq. unit", sqrt(s*(s-a)*(s-b)*(s-c)));
				break;
			}
			default:
				printf("Incorrect Choice!!");
		}
	*/
	
	//Program 8:
	/*
		int hr;
		printf("Enter the time(hours): ");
		scanf("%d", &hr);
		printf("%d Minutes\n%d Seconds", hr*60, hr*3600);
	*/
	
	//Program 9:
	/*
		int n, sum=0, temp;
		printf("Enter a number: ");
		scanf("%d", &n);
		while(n>0){
			temp = n%10;
			sum += temp;
			n = n/10;
		}
		printf("Sum of digits is %d", sum);
	*/
	
	//Program 10:
	/*
		char ch;
		printf("Enter a character: ");
		scanf("%c", &ch);
		if(ch>='A' && ch<='Z')
			printf("%c is in UpperCase and its LowerCase if %c", ch, ch+32);
		else
			printf("%c is in LowerCase and its UpperCase if %c", ch, ch-32);
	*/
	
	//Program 11:
	/*
		int d1, d2, d, m1, m2, m, y1, y2, y, t;
		printf("Enter your DOB(DD MM YYYY): ");
		scanf("%d %d %d", &d1, &m1, &y1);
		printf("Enter Current Date(DD MM YYYY): ");
		scanf("%d %d %d", &d2, &m2, &y2);
	
		d = d1 > d2 ? d1 - d2 : d2 - d1;
	    m = m1 > m2 ? m1 - m2 : m2 - m1;
		y = y2 -y1;
		t = y*365 + m * 31 + d;
		printf("You have lived for approx. %d days", t); 
	*/	
		
	//Program 12:
	/*
		int time, min, hr;
		printf("Enter the Time (min): ");
		scanf("%d", &time);
		hr = time/60;
		min = time%60;
		printf("Equivalent time: %d hrs and %d min", hr, min);
	*/
	return 0;
}
