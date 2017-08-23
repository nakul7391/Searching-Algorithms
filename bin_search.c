/*implementation of binary search for sorted array */

#include <stdio.h>

int bin_search(int arr[], int start , int end, int element );

int main(int argc, char *argv[] )
{
		int element, out;
		int arr[] = { 1,2,3,4,5,6,7,8,9,10};

		printf("Enter the element to search: ");
		scanf("%d", &element);

		out = bin_search(arr,0,10,element);

		if( out == -1 )
		printf("Not found\n");
		else
		printf("%d\n",out);
		return 0;

}

int bin_search( int arr[], int start, int end,int element )
{
		int mid;

		while( start <= end )
		{
				mid	= (start + end) / 2;

				if( arr[mid] == element )
				return mid;
				else if( arr[mid] < element )
				{
						start = mid + 1;
				}
				else if( arr[mid] > element )
				{
						end = mid - 1;
				}
		}

		return -1;
}
