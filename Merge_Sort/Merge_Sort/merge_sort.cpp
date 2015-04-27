#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100

int sorted[MAX_SIZE];

void merge_sort(int list[], int left, int right);
void merge(int list[], int left, int mid, int right);

int main()
{
	return 0;
}

void merge_sort(int list[], int left, int right)
{
	int mid;

	if(left < right) {
		mid = (left + right)/2;
		merge_sort(list, left, mid);
		merge_sort(list, mid+1, right);

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
}