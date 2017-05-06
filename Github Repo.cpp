
#include "stdafx.h"
#include "stdio.h"

//

void printGroupMemberNames(void) {
	printf("\n");
	printf("Merdan Kurbanov\n");
	printf("Shohrat Jumanazarov\n");
	printf("Muhammed Fethullah Gungor\n");
	printf("That's it!\n");
}

int main(void) {
	int myArray[500];

	printGroupMemberNames();
	return 0;



	int row[500];
	for (int i = 0; i < 500; i++) {
		row[i] = i;
	}


	// PRINTING AS CHAR.

	void printAsChars(int myArray[]); {
		for (int i = 0; i < 500; i++) {
			printf("%c ", myArray[i]);
		}
		printf("\n");
	}


	// SUBSTRACTING ALL VALUES

	int subtractAllValues(int myArray[]);
	{
		int i;
		for (i = 0; i < 500; ++i) {
			myArray[i] = -myArray[i];
		}
	}

	//GETING AVERAGE

	double getAverage(int myArray[]); {
		double total = 0;
		int count = 0;
		int i;
		for (i = 0; i < 500; ++i) {
			total += myArray[i];
			count++;
		}
		return total / count;

	}


	//GETING SUM. OF SQUARES

	int getSumOfSquares(int myArray[]); {
		int sum = 0;
		for (int i = 0; i < 500; i++) {
			sum += (myArray[i], 2);
		}

		return sum;
	}


	//GETING SUM.

	int getSum(int myArray[]); {
		int sum = 0;
		int i;

		for (i = 0; i < 500; i++){
			sum += myArray[i];
		}

		return sum;

	}



	//INVERTING ALL VALUES

	float invertAllValues(int myArray[]); {
		float invert = 0;
		for (int i = 0; i < 500; ++i){
			invert = 1 / myArray[i];
			myArray[i] = invert;

		}
		return 0;
	}
}