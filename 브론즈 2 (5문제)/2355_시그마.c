// ���� ��ũ : https://moon-gd.tistory.com/30
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �� ������ �ٲ��ִ� �Լ�
void swap(long long* a, long long* b);

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);

	// a�� �� ū �Է����� ������ ���, a�� b�� �ٲپ��ش�.
	if (a > b) {
		swap(&a, &b);
	}

	printf("%lld", (a + b) * (b - a + 1) / 2);

	return 0;
}

// �� ������ �ٲ��ִ� �Լ�
void swap(long long* a, long long* b) {
	long long temp = *a;
	*a = *b;
	*b = temp;
}