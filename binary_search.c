// Binary search

	#include<stdio.h>
	int main()
	{
		int a[100],i,n,low,high,mid,key;

		printf("Enter no of elements-");
		scanf("%d",&n);

		printf("Enter data to the array-\n");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);

		printf("\nEnter item to be searched-");
		scanf("%d",&key);

		low = 0;
		high = n-1;
		mid = (low+high/2);
		
		while(low <= high) 
		{
			if(a[mid] < key)
			low = mid+1;
			else if(a[mid] == key)
			{
				printf("%d found at location %d",key,mid+1);
				break;
			}
			else
				high = mid-1;
			mid = (low+high)/2;
		}
		if(low > high)
		printf("key element is not found\n");
		return 0;
	}

 
