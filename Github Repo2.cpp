
#include "stdafx.h"
#include "stdio.h"


int getSum(int myArray[]);
int getSumOfSquares(int myArray[]);
void printAsChars(int myArray[]);
double getAverage(int myArray[]);
int subtractAllValues(int myArray[]);
float invertAllValues(int myArray[]);
void printGroupMemberNames();
//Function prototypes


int main(void) {
	printGroupMemberNames();
	printf("\n");


	int arrForChar[5] = { 1, 2, 3, 4, 5 };
	int row[500];

	for (int i = 0; i < 500; i++){
		row[i] = i;
	}//end of for loop



	//executing functions
	int x = getSum(row);
	printf("GetSum function - %i\n", x);

	int q = getSumOfSquares(row);
	printf("GetSumOfSquares function - %i\n", q);

	printf("PrintAsChars function - "); printAsChars(row);
	printf("\n");

	int e = getAverage(row);
	printf("GetAverage function - %i\n", e);

	int r = subtractAllValues(row);
	printf("SubtractAllValues function - %i\n", r);

	int t = invertAllValues(row);
	printf("InvertAllValues function - %i\n", t);

	getchar();


	/*
	printGroupMemberNames();
	getSum(row);
	getSumOfSquares(row);
	printAsChars(arrForChar);
	getAverage(row);
	subtractAllValues(row);
	invertAllValues(row);
	*/
	return 0;
}






int getSum(int myArray[]) {
	int sum = 0;
	int i;

	for (i = 0; i < 500; i++){
		sum += myArray[i];
	}//end of for loop

	return sum;

}//end of getSum function





int getSumOfSquares(int myArray[]) {
	int sum = 0;
	for (int i = 0; i < 500; i++) {
		sum += (myArray[i], 2);
	}//end of for loop

	return sum;
}//end of getSumOfSquares function





void printAsChars(int myArray[]) {
	for (int i = 0; i < 500; i++) {

		printf("%c ", myArray[i]);

	}//end of for loop
}//end of printAsChars function






double getAverage(int myArray[]) {
	double total = 0;
	int count = 0;
	int i;
	for (i = 0; i < 500; ++i) {
		total += myArray[i];
		count++;
	}
	return total / count;

}//end of getAverage function




int subtractAllValues(int myArray[])
{
	int i;
	for (i = 0; i < 500; ++i) {
		myArray[i] = -myArray[i];
	}//end of for loop

	return 0;
}//end of subtractAllValues function




float invertAllValues(int myArray[]) {
	float result = 0;
	for (int i = 0; i < 500; ++i) {
		result += (myArray[i] / 2);
	}//end of for
	return result;
}//end of invertAllValuesfunc




void printGroupMemberNames(void) {
	printf("\n");
	printf("Merdan Kurbanov\n");
	printf("Shohrat Jumanazarov\n");
	printf("Muhammed Fethullah Gungor\n");
	printf("That's it!\n");
}//end of printGroupMemberNames func.