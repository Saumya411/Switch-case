//C progran to demonstrate switch case.
#include<stdio.h>
int main()
{
	int choice;
	printf("Enter your choice betwwen 1 to 5 for food item:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:printf("Food item - Pizza\nPrice - Rs 239");
	    break;
        case 2:printf("Food item - Burger\nPrice - Rs 129");
	    break;	    
	case 3:printf("Food item - Pasta\nPrice - Rs 179");
	    break;	 
	case 4:printf("Food item - French Fries\nPrice - Rs 99");
	    break;
	case 5:printf("Food item - Sandwich\nPrice - Rs 149");
	    break;
	default:printf("Invalid choice! Number is not in the list of food item.");
}   
	return 0;				
}

