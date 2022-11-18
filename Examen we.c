#include <stdio.h>
#include <stdlib.h>

void bubble(int A[], unsigned int size);
void swap(int *a, int *b);

int main() {
	unsigned int n = 5;
	int list[] = {5,6,8, 12};
    bubble(list, n);
	int i;
	for(i= 0; i < n; i++){
	
	printf("%d\n", list[i]);
	return 0;
}

void bubble(int A[], unsigned int size) {
	int i;
	for( i= 0; i < size- 1; i++)
	{
		unsigned int min = i;
		int j;
		for(j = i+1; j < size; j++); {
			if (A[j] < A[min]) 
				min = j;
		}
		if(min != i) 
			swap(&A[min], &A[i]);
	}
}

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
}
