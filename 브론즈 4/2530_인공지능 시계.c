#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int hour, min, sec;
	int cook_time;

	// ���� �ð�, �丮 �ð� �Է¹ޱ�
	scanf("%d %d %d", &hour, &min, &sec);
	scanf("%d", &cook_time);

	sec += cook_time;

	while (sec >= 60) {
		min++;
		sec -= 60;

		// min�� ��� ������ �ʰ��ϴ� ���
		if (min >= 60)	{
			min -= 60;
			hour++;
		}

		// hour�� ��� ������ �ʰ��ϴ� ���
		if (hour >= 24) {
			hour = 0;
		}
	}

	// ���
	printf("%d %d %d", hour, min, sec);

	return 0;
}