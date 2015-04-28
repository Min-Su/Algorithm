#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 10
#define SWAP(x, y, z) ((z) = (x), (x) = (y), (y) = (z))

void quick_sort(int list[], int left, int right);
int partition(int list[], int left, int right);

int main()
{
	int list[MAX_SIZE];
	int i;

	for(i = 0; i < MAX_SIZE; i++) {
		list[i] = rand()%10;
		printf(" %d ", list[i]);
	}

	printf("\n--------------------------------------sorting--------------------------------\n");
	quick_sort(list, 0, 9);

	for(i = 0; i < MAX_SIZE; i++) {
		printf(" %d ", list[i]);
	}

	printf("\n");

	return 0;
}

void quick_sort(int list[], int left, int right)
{
	int q;

	if(left < right) {
		q = partition(list, left, right);
		quick_sort(list, left, q - 1);
		quick_sort(list, q + 1, right);
	}
}

int partition(int list[], int left, int right)
{
	int pivot, temp;
	int low, high;

	low = left + 1;
	high = right;
	pivot = list[left];

	do {
		do {
			low++;
		} while(low <= right && list[low] < pivot);

		do {
			high--;
		} while(high >= left && list[high] > pivot);

		if(low < high) {
			SWAP(list[low], list[high], temp);
		}
	} while(low < high);

	SWAP(list[left], list[high], temp);

	return high;
}