/***Selection Sort:-	We have to find out minimum value from the entire array and shift to the extream left.    ***/

#include<stdio.h>
#include<stdlib.h>
#define size 5

int main()
{
	int a[size], i, j, min, temp;
	printf("Enter array elements: ");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<size-1;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(a[min]>a[j])
				min = j;
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("\nAll sorted elemets are: \n");
	for(i=0;i<size;i++)
		printf("%d\t",a[i]);
		
	return 0;
}
