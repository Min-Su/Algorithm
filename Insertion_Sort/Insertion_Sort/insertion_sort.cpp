#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100

void insertion_sort(int list[], int n);

int main()
{
	int list[MAX_SIZE];
	int i;

	for(i = 0; i < MAX_SIZE; i++) {
		list[i] = rand()%MAX_SIZE;
	}
	
	insertion_sort(list, MAX_SIZE);

	for(i = 0; i < MAX_SIZE; i++) {
		printf("%d ", list[i]);
	}

	return 0;
}

void insertion_sort(int list[], int n)
{
	int i, j, key;

	for(i = 1; i < n; i++) {
		key = list[i];
		for(j = i-1; j >= 0 && list[j] > key; j--) {
			list[j+1] = list[j];
		}
		list[j+1] = key;
	}
}