#define _CRT_SECURE_NO_WARNINGS
#define MAX 101
#include <stdio.h>
#include <string.h> // strlen

int main() {
	int size, num = 0;
	char mirror[MAX][MAX];

	// �ſ� ���� �Է� �ޱ�
	scanf("%d", &size);
	for (int i = 0; i < size; i++) {
		scanf("%s", mirror[i]);
	}

	// ���� �Է� �ޱ�
	scanf("%d", &num);

	// �״�� ���
	if (num == 1) {
		for (int i = 0; i < size; i++) {
			printf("%s\n", mirror[i]);
		}
	}
	// �¿� ���� ���
	else if (num == 2) {
		for (int i = 0; i < size; i++) {
			for (int j = size - 1; j >= 0; j--) {
				printf("%c", mirror[i][j]);
			}
			putchar('\n');
		}
	}
	// ���� ����
	else if (num == 3) {
		for (int i = size - 1; i >= 0; i--) {
			printf("%s\n", mirror[i]);
		}
	}

	return 0;
}