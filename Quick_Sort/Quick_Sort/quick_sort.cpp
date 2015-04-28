#include<stdio.h>
#include<stdlib.h>

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

}