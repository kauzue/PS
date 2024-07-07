#include "Percentage.h"

void P20240627()
{
	int total = 0;
	int event = 0;

	for (int a = 1; a <= 6; a++) {
		for (int b = 1; b <= 6; b++) {
			if ((a * b) % 4 == 0) {
				total++;
				if ((a + b) <= 7) {
					event++;
				}
			}
		}
	}

	printf("%d / %d \n", event, total);
}

void P20240630()
{
	int total = 0;
	int event = 0;
	int gcd;
	int pocket[8] = { 11, 12, 13, 14, 04, 05, 06, 07 };

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 8; j++) {
			total++;
			if (pocket[i] > 10 && pocket[j] < 10) {
				event++;
			}

			else if ((pocket[i] > 10 && pocket[j] > 10) && (pocket[i] % 10 * pocket[j] % 10) % 2 == 0) {
				event++;
			}

			else if ((pocket[i] * pocket[j]) % 2 == 0 && pocket[i] * pocket[j] <= 24) {
				event++;
			}
		}
	}

	gcd = Gcd2(event, total);

	printf("%d \n", event / gcd + total / gcd);
}

void P20230928()
{
	int total = 0;
	int event = 0;
	int gcd = 0;

	for (int a = 1; a <= 10; a++) {
		for (int b = 1; b <= 10; b++) {
			for (int c = 1; c <= 10; c++) {
				if ((a != b) && (b != c) && (c != a)) {
					total++;
					if (((a * b * c) % 5 == 0) && ((a + b + c) % 3 == 0)) {
						event++;
					}
				}
			}
		}
	}

	gcd = Gcd2(event, total);

	printf("%d / %d \n", event / gcd, total / gcd);
}

void P20230929()
{
	int total = 0;
	int event = 0;
	int gcd;

	for (int a = 1; a <= 6; a++) {
		for (int b = 1; b <= 6; b++) {
			for (int c = 1; c <= 6; c++) {
				for (int d = 1; d <= 6; d++) {
					total++;
					if (a + b + c + d == 11) {
						event++;
					}
				}
			}
		}
	}

	gcd = Gcd2(event, total);

	printf("%d \n", event / gcd + total / gcd);
}

void P20230624()
{
	int total = 0;
	int event = 0;
	int gcd;

	for (int a = 1; a <= 3; a++) {
		for (int b = 1; b <= 5; b++) {
			total++;
			if (a - b == 1 || b - a == 1) {
				event++;
			}
		}
	}

	gcd = Gcd2(event, total);
	
	printf("%d / %d \n", event / gcd, total / gcd);
}

void P20230629()
{
	int event = 0;

	for (int a = 1; a <= 5; a++) {
		for (int b = 1; b <= 5; b++) {
			for (int c = 1; c <= 5; c++) {
				for (int d = 1; d <= 5; d++) {
					for (int e = 1; e <= 5; e++) {
						switch (a) {
						case 1: {
							break;
						}

						case 2: {
							if (b == 4 && a <= c && c <= e) {
								event++;
							}
							break;
						}

						case 3: {
							if (c == 4 && a <= c && c <= e) {
								event++;
							}
							break;
						}

						case 4: {
							if (d == 4 && a <= c && c <= e) {
								event++;
							}
							break;
						}

						case 5: {
							if (e == 4 && a <= c && c <= e) {
								event++;
							}
						}
						}
					}
				}
			}
		}
	}

	printf("%d \n", event);
}

void P20230630()
{
	int total = 0;
	int event = 0;
	int gcd;

	for (int a = 1; a <= 12; a++) {
		for (int b = a + 1; b <= 12; b++) {
			for (int c = b + 1; c <= 12; c++) {
				if (b - a >= 5) {
					total++;
					if (c - a >= 10) {
						event++;
					}
				}
			}
		}
	}

	gcd = Gcd2(event, total);

	printf("%d \n", event / gcd + total / gcd);
}

void P20221125()
{
	int event = 0;

	for (int a = 1; a <= 12; a++) {
		for (int b = 1; b <= 12; b++) {
			for (int c = 1; c <= 12; c++) {
				for (int d = 1; d <= 12; d++) {
					for (int e = 1; e <= 12; e++) {
						if (a + b + c + d + e == 12 && (a * a - b * b == 5 || b * b - a * a == 5)) {
							event++;
						}
					}
				}
			}
		}
	}

	printf("%d \n", event);
}

void P20221126()
{
	int total = 0;
	int event = 0;
	int min, gcd;

	for (int a = 1; a <= 10; a++) {
		for (int b = 1; b <= 10; b++) {
			for (int c = 1; c <= 10; c++) {
				if (a != b && b != c && c != a) {
					total++;
					min = Min3(a, b, c);
					if (min <= 4 || min >= 7) {
						event++;
					}
				}
			}
		}
	}

	gcd = Gcd2(event, total);
	printf("%d / %d \n", event / gcd, total / gcd);
}

void P20220924()
{
	int total = 0;
	int event = 0;
	int gcd;

	for (int a = 1; a <= 7; a += 2) {
		for (int b = 1; b <= 8; b += 2) {
			total++;
			if (a * b > 31) {
				event++;
			}
		}
	}

	gcd = Gcd2(event, total);

	printf("%d / %d \n", event / gcd, total / gcd);
}

void P20220628()
{
	int event = 0;
	int sum = 0;

	for (int a = 1; a <= 6; a++) {
		if (a <= 3) {
			sum += a;
		}
		for (int b = 1; b <= 6; b++) {
			if (b <= 3) {
				sum += b;
			}
			for (int c = 1; c <= 6; c++) {
				if (c <= 3) {
					sum += c;
				}
				for (int d = 1; d <= 6; d++) {
					if (d <= 3) {
						sum += d;
					}
					if (sum == 4) {
						if (d <= 3) {
							sum -= d;
						}
						event++;
					}

					else if(d <= 3){
						sum -= d;
					}
				}
				if (c <= 3) {
					sum -= c;
				}
			}
			if (b <= 3) {
				sum -= b;
			}
		}
		if (a <= 3) {
			sum -= a;
		}
	}

	printf("%d \n", event);
}

void P20220630()
{
	int total = 0;
	int event = 0;
	int gcd;

	for (int a = 1; a <= 3; a++) {
		for (int b = 1; b <= 3; b++) {
			for (int c = 1; c <= 3; c++) {
				for (int d = 1; d <= 3; d++) {
					for (int e = 1; e <= 3; e++) {
						total++;
						if ((a * b * c * d * e) % 6 == 0) {
							event++;
						}
					}
				}
			}
		}
	}

	gcd = Gcd2(event, total);

	printf("%d \n", event / gcd + total / gcd);
}

void P2022ex28()
{
	int total = 0;
	int event = 0;
	int gcd;

	for (int a = 1; a <= 10; a++) {
		for (int b = 1; b <= 10; b++) {
			for (int c = 1; c <= 10; c++) {
				if (a != b && b != c && c != a && (a * b * c) % 2 == 0) {
					total++;
					if ((a + b + c) % 3 == 0) {
						event++;
					}
				}
			}
		}
	}

	gcd = Gcd2(event, total);

	printf("%d / %d \n", event / gcd, total / gcd);
}

int Min3(int a, int b, int c)
{
	int min = a;
	if (b < a) {
		min = b;
		if (c < b) {
			return c;
		}

		else {
			return b;
		}
	}

	else if (c < a) {
		return c;
	}

	return a;
}

int Gcd2(int a, int b)
{
	int gcd = 0;

	for (int i = 1; i <= a && i <= b; i++) {
		if ((a % i == 0) && (b % i == 0)) {
			gcd = i;
		}
	}

	return gcd;
}