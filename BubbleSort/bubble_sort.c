//Below we have a simple C program for bubble sort

	#include<stdio.h>

	void bubbleSort(int arr[],int n)
	{
		int i,j,temp,flag;
		for( i=0; i<n; i++)
		{
       		   flag = 0 ;
		  for( j=0; j<n-i-1; j++)
		  {
		      
            	     if( arr[j] > arr[j+1])
		     {
			//swap the elements
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			flag = 1;
		     }
                  }
		  //If value of flag is zero after all the iterations of inner loop then break out goes to main()
		  if(!flag)
		  {
   			break;
		  }
	        }
		//print the sorted array
		printf("\nSorted Array: ");
		for(i=0; i<n; i++)
		{
			printf("\t%d",arr[i]);
		}
	}
	int main()
	{
		int arr[100],i,n;

		// ask user for number of elements to be sorted
		printf("Enter the number of elements to be sorted [max_size-100]:- ");
		scanf("%d",&n);
		
		printf("\nInput the elements to the array-\n");
		for(i=0; i<n; i++)
		{
			printf("\nEnter the element no. %d: ",i+1);
			scanf("%d",&arr[i]);
		}
		
		printf("\nDisplaying the elements of the array-");
		for(i=0;i<n;i++)
		{
			printf("\t%d",arr[i]);
		}
		printf("\n");
		
		// call the function bubbleSort
		bubbleSort(arr,n);

		return 0;
	}
