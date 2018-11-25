//Program 2.4 Simple calculations
#include<stdio.h>

int main(void)
{
	int total_pets = 0;
	int cats = 2;
	int dogs = 1;
	int ponies = 1;
	int others = 46; 
    
    total_pets = cats+dogs+ponies+others;
    printf("We have %d pets in total\n",total_pets);
    return 0;
}
