#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ټ� ���� ������ִ� �Լ�
int five(int n);

int main() {
	int sum = 0;
	int n;
	scanf("%d", &n);  // �Է� �ޱ�


	while (n) {
		sum += five(n % 10);
		n /= 10;
	}

	printf("%d", sum);

	return 0;
}

// �ټ� ���� ������ִ� �Լ�
int five(int n) {
	int multi = 1;

	// �ݺ����� �ټ� �� ���鼭 n�� ���Ѵ�.
	for (int i = 1; i <= 5; i++) {
		multi *= n;
	}

	return multi;
}