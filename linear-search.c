// Linear Search

	#include<stdio.h>
	int main()
	{
		int arr[100],i,s,item;

		printf("Enter the size of the array[max_size-100]:-");
		scanf("%d",&s);
		
		printf("Enter data to the array-\n");
		for(i=0;i<s;i++)
		scanf("%d",&arr[i]);

		printf("Enter a number to be searched:-");
		scanf("%d",&item);
		for(i=0;i<s;i++)
		{
			if(arr[i] == item)
			{
				printf("The search item is %d & the location of the item is : %d",item,i+1);
				break;
			}
		}
		if(i == s)
		printf("\nThe element is not found in the array\n");

		return 0;
	}
	
		
