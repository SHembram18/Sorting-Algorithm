// Selection sort
// C program for implementation of selection sort 

	#include<stdio.h>
	void swap(int *last, int *first)
	{
		int  temp = *last;
		    *last = *first;
		   *first = temp;
		      
	}
	
	void selectionSort(int arr[],int n)
	{
		int min_index,i,j;
                
         // One by one move boundary of unsorted subarray       
		for(i=0; i < n-1; i++)
		{   
                        // Find the minimum element in unsorted array
			min_index = i;
			for(j=i+1 ; j<n; j++)
			{
				if(arr[j] < arr[min_index])
					min_index = j;
			}
                        // Swap the found minimum element with the first element
			swap(&arr[min_index],&arr[i]);
		}
	}
	
	int main()
	{
		int arr[100],n,i;

		printf("Enter the size of the array[MAX SIze:- 100]:-\n");
		scanf("%d",&n);

		printf("Enter data to the array:-\n");
		for( i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("Display the array:-");
		for( i=0; i<n; i++)
		{
			printf("\t%d",arr[i]);
		}
		
		selectionSort(arr,n);
		printf("\nSorted Array:-");
		for( i=0; i<n; i++)
		{
			printf("\t%d",arr[i]);
		}
	}
		
