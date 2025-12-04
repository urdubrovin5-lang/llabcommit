#include <stdio.h>
#include <Windows.h>

void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	int i;
	int A;

	printf("¬ведите число n : ");
	scanf_s("%d", &n);

	printf("¬ведите число A : ");
	scanf_s("%d", &A);
	printf("commit1");
	i = 1;
	int cnt;
	cnt = 0;

	do {
		if (i % A == 0) {
			printf("%d ", i);
			i = i + 1;
			cnt = cnt + 1;
		}
		else {
			i = i + 1;
		}

	} while (cnt < n);

}


