#include <stdio.h>
#include <stdlib.h>

void merge(int *A, int p, int q, int r) {
	int i, lInd, rInd;

	int lenLeft = q - p;
	int left[lenLeft + 1];
	for(i = 0; i < lenLeft; i++) {
		left[i] = A[p + i];
	}
	left[lenLeft] = 2147483647;

	int lenRight = r - q;
	int right[lenRight + 1];
	for(i = 0; i < lenRight; i++) {
		right[i] = A[q + i];
	}
	right[lenRight] = 2147483647;

	lInd = 0;
	rInd = 0;

	for(i = 0; i < lenLeft + lenRight; i++) {
		if(left[lInd] <= right[rInd]) {
			A[p + i] = left[lInd];
			lInd++;	
		} else {
			A[p + i] = right[rInd];
			rInd++;
		}
	}
}

int main(int argc, char **argv) {
	int i, len;
	/*
	if(argc > 1) len = atoi(argv[1]);
	else len = 100;
	int keys[len];

	for(i = 0; i < len; i++) {
		if(scanf("%d", &keys[i]) == EOF) break;
	}
	len = i;
	printf("\n");

	sort(keys, len);
	for(i = 0; i < len; i++) {
		printf("%d, ", keys[i]);
	}
	printf("\n");
	*/

	int A[10] = {1,3,5,7,2,3,4,7,9,11};
	merge(A, 0, 4, 10);
	for(i = 0; i < 10; i++) {
		printf("%d, ", A[i]);
	}
	printf("\n");
}
