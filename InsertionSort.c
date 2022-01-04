/***  
	Insertion Sort:-  Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.
	Insertion sort works similarly as we sort cards in our hand in a card game.

	We assume that the first card is already sorted then, we select an unsorted card. If the unsorted card is greater than the card in hand,
	it is placed on the right otherwise, to the left. In the same way, other unsorted cards are taken and put in their right place. 
***/

#include<stdio.h>
#include<stdlib.h>
#define size 5

int main()
{
	int a[size], i, j, val;
	printf("Enter array elements: ");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	
	
	for(i=1;i<size;i++)
	{
		val=a[i];
		for(j=i-1;j>=0 && val<a[j];j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=val;
	}
	
	printf("\nAll sorted elemets are: \n");
	for(i=0;i<size;i++)
		printf("%d\t",a[i]);
		
	return 0;
}
