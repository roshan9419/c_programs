#include<stdio.h>
int i, j, k;
int main()
{
	//Programs based on Topic 5
	
	//Program  1
	/*
		for(i=1; i<=5; i++){
			for(j=1; j<=i; j++){
				printf("* ");
			}printf("\n");
		}
	*/
	
	//Program  2
	/*
		for(i=1; i<=5; i++){
			for(j=1; j<=5; j++){
				if(j>=6-i)
					printf("%d", j);
				else
					printf(" ");
			}printf("\n");
		}
	*/
	
	//Program  3
	/*
		for(i=1; i<=4; i++){
			k=1;
			for(j=1; j<=7; j++){
				if(j>=5-i && j<=3+i)
					printf("%d", k);
				else
					printf(" ");
			}printf("\n");
		}
	*/
	
	//Program  4
	/*
		for(i=1; i<=5; i++){
			for(j=1; j<=5; j++){
				if(j>=i)
					printf("%d", j);
				else
					printf(" ");
			}printf("\n");
		}
	*/
	
		
	return 0;
}
