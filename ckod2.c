#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	int i, j, m, n;
	
	int matris[100][100] = { 0 };
	printf("Matris boyutlarini giriniz (m,n): ");
	scanf_s( "%d %d", &m, &n);
	
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0) {
				matris[i][j] = j + 1;
			}
			else {
				matris[i][j] = matris[i - 1][j] * matris[0][j];
			}
		}

	}


	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%10d  ", matris[i][j]);
		}
		printf("\n");
	}
	return 0;
}