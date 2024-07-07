#include <stdio.h>
#include <stdbool.h>
#include <process.h>

#include "Percentage.h"

enum Percentage { EMPTY, P4627, P4630, P3928, P3929, P3624, P3629, P3630, P225, P226, P2924, P2628, P2630, P2ex28 };

int main(void)
{
	while (true) {
		int num;

		printf("1. 2024년 06월 모의평가 27번 \n");
		printf("2. 2024년 06월 모의평가 30번 \n");
		printf("3. 2023년 09월 모의평가 28번 \n");
		printf("4. 2023년 09월 모의평가 29번 \n");
		printf("5. 2023년 06월 모의평가 24번 \n");
		printf("6. 2023년 06월 모의평가 29번 \n");
		printf("7. 2023년 06월 모의평가 30번 \n");
		printf("8. 2022년 수능 25번 \n");
		printf("9. 2022년 수능 26번 \n");
		printf("10. 2022년 09월 모의평가 24번 \n");
		printf("11. 2022년 06월 모의평가 28번 \n");
		printf("12. 2022년 06월 모의평가 30번 \n");
		printf("13. 202년 수능 예시문항 28번 \n");
		printf("번호 선택 : ");
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