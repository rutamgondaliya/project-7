#include<stdio.h>

main()

{
	int score;
	char grade;
	
	printf (" enter your score");
	scanf("%d", &score);
	
	grade = ( score>= 100)?  'A' :
            ( score>= 80)?   'B' :
	        ( score>= 60)?  'C' :
	        ( score>= 50)?  'D' : 'f';
	        
	        printf(" your grade is %c\n", grade);
	         
}