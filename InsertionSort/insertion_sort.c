// C program for insertion sort

	#include<stdio.h>
        
	/* Function to sort an array using insertion sort*/
	void InsertionSort(int arr[],int n)
	{
		int i,j,key;
	
		for(i=1; i<n ; i++)
		{
			key = arr[i];
			j = i-1;
                        
			/* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
			while( j >= 0 && arr[j] > key )
			{
				arr[j+1] = arr[j];
				j = j-1;
			}
			arr[j+1] = key;
		}		
	}
        // A utility function to print an array of size n
	void DisplayArray(int arr[],int n)
	{
		int i;
	
		for(i=0;i<n;i++)
			printf("\t%d",arr[i]);
	}
	
	
/* Driver program to test insertion sort */
	int main()
	{
		int arr[100],i,n;
	
		printf("Enter the size of array[MAX SIZE-100]:-");
		scanf("%d",&n);
	
		printf("Enter data to the array:-\n");
		for(i=0 ; i<n ; i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("\nDisplay the array:-");
		DisplayArray(arr,n);
		printf("\n");

		InsertionSort(arr,n);

		printf("\nSorted array:-");
		DisplayArray(arr,n);

		return 0;
	}
