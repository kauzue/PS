#include <stdio.h>
#include <stdbool.h>
#include <process.h>

#include "Percentage.h"

enum Percentage { EMPTY, P4627, P4630, P3928, P3929, P3624, P3629, P3630, P225, P226, P2924, P2628, P2630, P2ex28 };

int main(void)
{
	while (true) {
		int num;

		printf("1. 2024�� 06�� ������ 27�� \n");
		printf("2. 2024�� 06�� ������ 30�� \n");
		printf("3. 2023�� 09�� ������ 28�� \n");
		printf("4. 2023�� 09�� ������ 29�� \n");
		printf("5. 2023�� 06�� ������ 24�� \n");
		printf("6. 2023�� 06�� ������ 29�� \n");
		printf("7. 2023�� 06�� ������ 30�� \n");
		printf("8. 2022�� ���� 25�� \n");
		printf("9. 2022�� ���� 26�� \n");
		printf("10. 2022�� 09�� ������ 24�� \n");
		printf("11. 2022�� 06�� ������ 28�� \n");
		printf("12. 2022�� 06�� ������ 30�� \n");
		printf("13. 202�� ���� ���ù��� 28�� \n");
		printf("��ȣ ���� : ");
		scanf_s("%d", &num);

		switch (num) {
		case P4627:
			P20240627();
			break;

		case P4630:
			P20240630();
			break;

		case P3928:
			P20230928();
			break;

		case P3929:
			P20230929();
			break;

		case P3624:
			P20230624();
			break;

		case P3629:
			P20230629();
			break;

		case P3630:
			P20230630();
			break;

		case P225:
			P20221125();
			break;

		case P226:
			P20221126();
			break;

		case P2924:
			P20220924();
			break;

		case P2628:
			P20220628();
			break;

		case P2630:
			P20220630();
			break;

		case P2ex28:
			P2022ex28();
			break;

		default:
			return;
		}

		system("pause");
		system("cls");
	}
}