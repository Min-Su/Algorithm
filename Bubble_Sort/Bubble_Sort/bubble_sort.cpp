#include<stdio.h>
#include<stdlib.h>

#define MAX_LIST_SIZE 100
#define SWAP(x, y, t) ( (t)=(x), (x)=(y), (y)=(t) )

void bubble_sort(int list[], int n); 

int main()
{
	int list[MAX_LIST_SIZE];
	int i;

	for(i = 0; i < MAX_LIST_SIZE; i++) {
		list[i] = rand()%100;
		printf("%d ", list[i]);
	}

	bubble_sort(list, MAX_LIST_SIZE);
	printf("\n------------------SORT-----------------\n");

	for(i = 0; i < MAX_LIST_SIZE; i++) {
		printf("%d ", list[i]);
	}

	return 0;
}

void bubble_sort(int list[], int n)
{
	int i, j, temp;

	for(i = n-1; i > 0; i--) {
		for(j = 0; j < i; j++) {
			if(list[j] > list[j+1])
				SWAP(list[j], list[j+1], temp);
		}
	}
}