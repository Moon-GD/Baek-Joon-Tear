#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 257

int main() {

	while (1) {
		char string[MAX];
		fgets(string, MAX, stdin);

		// �������� ����ġ�� while �� ����
		if (string[0] == '#') {
			break;
		}

		int count = 0, target = 0;

		// ���� ���� Ȯ��
		while (string[count]) {
			// �빮�ڸ� �ҹ��ڷ� ġȯ
			if (65 <= string[count] && string[count] <= 90) {
				string[count] += 32;
			}
			
			// �ҹ����� ���ڸ� ���ǹ� ����
			if (97 <= string[count] && string[count] <= 122)
			{
				if (string[count] == 'a' || string[count] == 'e' || string[count] == 'i' || string[count] == 'o' || string[count] == 'u') {
					target++;
				}
				
			}
			count++;
		}

		printf("%d\n", target);
	}

	return 0;
}