#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int sum = 0, time;

	// �Է� �����鼭 �� �ð� �� ���ϱ�
	for (int i = 0; i < 4; i++) {
		scanf("%d", &time);
		sum += time;
	}

	// ���
	printf("%d\n%d", sum / 60, sum % 60);

	return 0;
}