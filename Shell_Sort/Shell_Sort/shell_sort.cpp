#include<stdio.h>
#include<stdlib.h>

#define MAX_LIST_SIZE 100

void inc_insertion_sort(int list[], int first, int last, int gap);
void shell_sort(int list[], int n);

int main()
{
	int i;
	int list[MAX_LIST_SIZE];

	for(i = 0; i < MAX_LIST_SIZE; i++) {
		list[i] = rand()%100;
		printf("%d ", list[i]);
	}

	printf("\n------------------------------------Sort------------------------------------\n");
	shell_sort(list, MAX_LIST_SIZE);

	for(i = 0; i < MAX_LIST_SIZE; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");
}

void inc_insertion_sort(int list[], int first, int last, int gap)
{
	int i, j, key;
	for(i = first+gap; i <= last; i = i+gap) {
		key = list[i];
		for(j = i-gap; j >= first && key < list[j]; j = j-gap) {
			list[j+gap] = list[j];
		}
		list[j+gap] = key;
	}
}

void shell_sort(int list[], int n)
{
	int i, gap;
	for(gap = n/2; gap > 0; gap = gap/2) {
		if((gap%2) == 0) {
			gap++;
		}
		for(i = 0; i < gap; i++) {
			inc_insertion_sort(list, i, n-1, gap);
		}
	}
}