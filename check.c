#include<stdio.h>
int printPrimePairs(int N) {
		if (N <= 5)
			printf("No Pairs exist");
		int i,j;
		for (i = 2; i <= (N / 2); i++) {
			if (isPrime(i)) {
				for (j = i + 1; j <= (N / 2); j++) {
					if (isPrime(j) && (i * j) <= N) {
						printf("%d%d",i,j);
					}
				}
			}
		}
		return 0;
	}

int isPrime(int i) {
		int j = 2;

		if (i == 2)
			return 1;

		while (j < i) {
			if (i % j == 0) {
				return 0;
			}
			j++;
		}
		return 1;
	}
	int main()
	{int  n;
	printf("enter any number");
	scanf("%d",&n);
	printPrimePairs(n);
	return 0;
	}