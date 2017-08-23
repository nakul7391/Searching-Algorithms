/*This program is to */
#include <stdio.h>

int search(int arr[], int size, int element);

int main(int argc, char *argv[] )
{
		int element, out;
		int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};

		printf("Enter the element to search: ");
		scanf("%d", &element);

		out = search(arr,13,element);

		if( out == -1 )
		printf("Not found\n");
		else
		printf("%d\n",out);
		return 0;
}

int search( int arr[], int size, int element)
{
		int i;
		for( i = 0; i < size ; i++ )
		{
				if( arr[i] == element)
				return i;
		}

		return -1;
}
