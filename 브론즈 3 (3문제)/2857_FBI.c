#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  // strstr

int main() {
	int count = 0;
	for (int i = 1; i <= 5; i++) {
		char name[11];

		// ���ڿ� �Է¹ޱ�
		scanf("%s", name);

		// ���ڿ��� FBI�� ���ԵǸ� �ش� ��� ��ȣ ���
		if (strstr(name, "FBI")) {
			printf("%d\n", i);
		}
		else {
			count++;
		}
	}

	// FBI�� �������� �ʴ� ���
	if (count == 5) {
		printf("HE GOT AWAY!");
	}

	return 0;
}