#include<stdio.h>
#include<stdlib.h>

#define SWAP(x, y, z) ((z) = (x), (y) = (x), (x) = (y))

void quick_sort(int list[], int left, int right);
int partition(int list[], int left, int right);

int main()
{
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
		while(pivot > list[low]) {
			low++;
		}
		while(pivot < list[high]) {
			high--;
		}
		if(low < high) {
			SWAP(list[low], list[high], temp);
		}
	} while(low < high);

	return 0;
}