#include<stdio.h>

main()

{
	int score;
	printf("enter your marks =");
	scanf("%d", &score);
	
	
	switch(score)
	{
		case 90 ... 100:
			           printf(" your grade is a excellent work");
			           break;
	    case 75 ...	89:
		               printf(" your geade is b well done");
					   break;
					   
		case 65 ... 74:
		              printf(" your geade is  c good job");
					  break;
		case 50 ... 64:
		              printf(" your grade is d  you passed but you can do better");
					  break;
		case 40 ... 49:
			          printf(" your grade is  e need improvment");
			          break;
			          
		case 32 ... 39: 
		              printf(" your grade is f you faild");
					  break;
					  
		default:        
		              printf("plz enter valid score");
				      break;			               			  			  			   	           
	}
}