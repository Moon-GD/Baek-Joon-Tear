// ���� ��ũ : https://moon-gd.tistory.com/27
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double diagonal, height, width;

	// �Է� �ޱ�
	scanf("%lf %lf %lf", &diagonal, &height, &width);

	// ����
	double ratio = diagonal / pow((height * height + width * width), 0.5);

	// ������ �����ؼ� ����, �ʺ� ���
	printf("%d %d", (int)(ratio * height), (int)(ratio * width));

	return 0;
}