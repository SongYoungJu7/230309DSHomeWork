#include <stdio.h>

int sumOfPrime() {
	int i, n, sum = 0;
	char isPrime = 't';

	for (n = 2; n < 101; n++) {
		isPrime = 't';
		for (i = 2; i < 101; i++) {
			if (n != i && n % i == 0) {
				isPrime = 'f'; break;
			}
		}
		if (isPrime == 't') sum += n;
	}

	return sum;
}


int main(void) {
	printf("1부터 100까지 소수의 합: %d", sumOfPrime());

	system("pause");

	return 0;
}