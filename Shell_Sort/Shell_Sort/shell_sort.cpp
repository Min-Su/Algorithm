#include<stdio.h>
#include<stdlib.h>

void inc_insertion_sort(int list[], int first, int last, int gap);
void shell_sort(int list[], int n);

int main()
{

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

}