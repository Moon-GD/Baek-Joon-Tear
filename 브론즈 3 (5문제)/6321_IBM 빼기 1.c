#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen

int main() {
	int size = 0;
	scanf("%d", &size);

	for (int i = 1; i <= size; i++) {
		// ���ڿ� ���� �� �Է¹ޱ�
		char string[52];
		scanf("%s", string);

		printf("String #%d\n", i);
		// ���ڿ� ��ȯ
		for (int j = 0; j < (int)strlen(string); j++) {
			if (string[j] == 'Z') {
				printf("A");
			}
			else {
				printf("%c", string[j] + 1);
			}
		}

		// ���� ����� ���� printf �Լ� ȣ��
		printf("\n\n");
	}

	return 0;
}