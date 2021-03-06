#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100

int sorted[MAX_SIZE];

void merge_sort(int list[], int left, int right);
void merge(int list[], int left, int mid, int right);

int main()
{
	int list[MAX_SIZE] = {3, 500, 77, 1, 0, 0, 326, 100, 17, 11};
	int i;

	merge_sort(list, 0, 9);

	for(i = 0; i < MAX_SIZE; i++) {
		printf(" %d ", sorted[i]);
	}

	printf("\n");

	return 0;
}

void merge_sort(int list[], int left, int right)
{
	int mid;

	if(left < right) {
		mid = (left + right)/2;
		merge_sort(list, left, mid);
		merge_sort(list, mid+1, right);
		merge(list, left, mid, right);
	}
}

void merge(int list[], int left, int mid, int right)
{
	int i, j, k, l;

	i = left;
	j = mid + 1;
	k = left;

	while(i <= mid && j <= right) {
		if(list[i] <= list[j]) {
			sorted[k++] = list[i++];
		}
		else {
			sorted[k++] = list[j++];
		}
	}

	if(i > mid) {
		for(l = j; l <= right; l++) {
			sorted[k++] = list[l];
		}
	}
	else {
		for(l = i; l <= mid; l++) {
			sorted[k++] = list[l];
		}
	}

	for(l = left; l <= right; l++) {
		list[l] = sorted[l];
	}
}