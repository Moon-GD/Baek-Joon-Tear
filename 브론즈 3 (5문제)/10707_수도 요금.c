#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x_standard;
	int y_standard, y_upper_bound, y_surcharge;
	int usage;

	// �Է� �ޱ� 
	// �Է��� ���������� �����ؼ� �ޱ� ������ �� �ٷ� �޾Ƶ� ����
	scanf("%d %d %d %d %d", &x_standard, &y_standard, &y_upper_bound, &y_surcharge, &usage);

	int x_fare = usage * x_standard;
	int y_fare = 0;

	// y���� �⺻ ��뷮�� �ʰ��� ���
	if (usage > y_upper_bound) {
		y_fare = y_standard + (usage - y_upper_bound) * y_surcharge;
	}
	// y�翡�� �⺻ ��ݸ� �ΰ��Ǵ� ���
	else {
		y_fare = y_standard;
	}


	// ���� �� �� �ּҰ� ���
	if (x_fare <= y_fare) {
		printf("%d", x_fare);
	}
	else {
		printf("%d", y_fare);
	}

	return 0;
}