#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void upheap1(int *heap1, int i)
{
	int temp;
	int j = i / 2;
	if (i == 1)
		return;
	if (heap1[j] < heap1[i]) {
		temp = heap1[j];
		heap1[j] = heap1[i];
		heap1[i] = temp;
		upheap1(heap1, j);
	}
	else
		return;
}
void insertItem(int *heap1, int key, int N)
{
	heap1[N] = key;
	upheap1(heap1, N);
}
void downheap1(int Node, int *heap1)
{
	int i = Node;
	int left = Node * 2;
	int right = Node * 2 + 1;
	int temp;

	if (heap1[left] > heap1[i] || heap1[right] > heap1[i]) {
		if (heap1[left] > heap1[right])
		{
			if (heap1[left] > -10000 && heap1[left] < 10000) {
				temp = heap1[i];
				heap1[i] = heap1[left];
				heap1[left] = temp;
				downheap1(i * 2, heap1);
			}
		}
		else
		{
			if (heap1[right] > -10000 && heap1[right] < 10000) {
				temp = heap1[i];
				heap1[i] = heap1[right];
				heap1[right] = temp;
				downheap1(i * 2 + 1, heap1);
			}
		}

	}
	else
		return;
}
int removeMax(int *heap1, int N)
{
	int Max = heap1[1];
	int first = 1;

	heap1[first] = heap1[N - 1];
	heap1[N - 1] = 0;
	downheap1(first, heap1);
	return Max;
}
void printheap1(int *heap1, int N)
{
	int i;

	for (i = 1; i < N; i++)
	{
		printf(" %d", heap1[i]);
	}
	printf("\n");
}
void upheap2(int *heap2, int i)
{
	int temp;
	int j = i / 2;
	if (i == 1)
		return;
	if (heap2[j] > heap2[i]) {
		temp = heap2[j];
		heap2[j] = heap2[i];
		heap2[i] = temp;
		upheap2(heap2, j);
	}
	else
		return;
}
void insertItem2(int *heap2, int key, int N)
{
	heap2[N] = key;
	upheap2(heap2, N);
}

void downheap2(int Node, int *heap2)
{
	int i = Node;
	int left = Node * 2;
	int right = Node * 2 + 1;
	int temp;

	if (heap2[left] < heap2[i] || heap2[right] < heap2[i]) {
		if (heap2[left] > heap2[right])
		{
			if (heap2[left] > -1000 && heap2[left] < 1000) {
				temp = heap2[i];
				heap2[i] = heap2[left];
				heap2[left] = temp;
				downheap2(i * 2, heap2);
			}
		}
		else
		{
			if (heap2[right] > -1000 && heap2[right] < 1000) {
				temp = heap2[i];
				heap2[i] = heap2[right];
				heap2[right] = temp;
				downheap2(i * 2 + 1, heap2);
			}
		}

	}
	else
		return;
}
int removeMax2(int *heap2, int N)
{
	int min = heap2[1];
	int first = 1;

	heap2[first] = heap2[N - 1];
	heap2[N - 1] = 0;
	downheap2(first, heap2);
	return min;
}
void printheap2(int *heap2, int N)
{
	int i;

	for (i = 1; i < N; i++)
	{
		printf(" %d", heap2[i]);
	}
	printf("\n");
}

void main()
{
	int n, key, cnt = 0, max = 0, min = 0;
	int *heap1, *heap2;
	scanf("%d", &n);

	heap1 = (int *)malloc(sizeof(int)*(n + 1));
	heap2 = (int *)malloc(sizeof(int)*(n + 1));

	for (int i = 1; i < n + 1; i++)
	{
		scanf("%d", &key);
		insertItem(heap1, key, i);
		insertItem2(heap2, key, i);
	}
	cnt = n + 1;

	for (int i = 1; i < n+1; i++)
	{
		printheap1(heap1, cnt);
		printheap2(heap2, cnt);
		max = removeMax(heap1,cnt);
		min = removeMax2(heap2, cnt);
		printf(" %d %d", max,min);
		printf("\n");
		cnt--;
	}
	free(heap1);
	free(heap2);
}