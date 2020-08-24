#include <stdio.h>
int main() {
	int b;
	scanf_s("%d", &b);
	if (b < 0) {
		printf("Please insert the number that is greater or equal zero");
	}
	else if (b >= 0) {
		if (b >= 80) {
			printf("A");
		}
		else if (b < 80) {
			if (b >= 70) {
				printf("B");
			}
			else if (b < 70) {
				if (b >= 60) {
					printf("C");
				}
				else if (b < 60) {
					if (b >= 50) {
						printf("D");
					}
					else {
						printf("F");
					}
				}
			}
		}
	}
}



