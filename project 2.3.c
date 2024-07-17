#include<stdio.h>

main()
 {
 
     int score;
     char grade;
     
     printf("enter your grade :");
     scanf("%d",&score);
     grade = ( score>= 100)?  'A' :
            ( score>= 80)?   'B' :
	        ( score>= 60)?  'C' :
	        ( score>= 50)?  'D' : 'f';
	        
     
     if (grade >='A' && grade <= 'D')
     
      {
      	printf(" congratulations !  you are eligible for the next level ./n");
      	
	  }
      
	  else 
	  {
	    printf (" plese try again next time./n");	
	  } 
     
     
     
     
     
     
     
     
}   