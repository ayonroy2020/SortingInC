/***Bubble Sort:-	We have to find out maximum value from the entire array and shift to the extream right.    ***/

#include<stdio.h>
#include<stdlib.h>
#define size 5

int main()
{
	int a[size], i, j, temp;
	printf("Enter array elements: ");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<(size-1-i);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nAll sorted elemets are: \n");
	for(i=0;i<size;i++)
		printf("%d\t",a[i]);
		
	return 0;
}
