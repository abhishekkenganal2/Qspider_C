#include<stdio.h>
#include<stdlib.h>
void main()
{
	int lock,stk,bar,t,flag=0;
	float com;
	
	printf("Enter total no's of locks\n");
	scanf("%d",&lock);
	if((lock <= 0)||(lock > 70))
	{
		flag = 1;
	}
	printf("Enter the total no's of stacks\n");
	scanf("%d",&stk);
	if((stk <= 0)||(stk > 80))
	{
		flag = 1;
	}
	printf("Enter the total no's of barrels\n");
	scanf("%d",&bar);
	if((bar <= 0)||(bar > 80))
	{
		flag = 1;
	}
	if(flag == 1)
	{
		printf("Invalid input\n");
		
		exit(0);
	}
	t = (lock*45)+(stk*30)+(bar*25);
	if(t <=1000)
	{
		com = 0.10*t;
	}
	else if(t <1800)
	{
		com = 0.10*1000;
		com = com + (0.15*(t-1000));
	}
	else
	{
		com = 0.10*1000;
		com = com + (0.15*800);
		com = com + (0.20 * (t - 18-00));
	}
	printf("The total sales is %d \n The commission is %f\n",t,com);
	
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
