#include <iostream>
#include <fstream>
using namespace std;

/**
	-figure out why its printing to new line
	-check constraints
	-close files
	-delete arr
*/

void printArr(string** arr, int rows, int cols) {

	for(int i = 0; i < rows; ++i) {
		for(int j = 0; j < cols; ++j) {
			cout << arr[i][j];
		}
		cout << endl;
	}
}

void initializeArr(string** arr, int rows, int cols) {

	for(int i = 0; i < rows; ++i) {
		for(int j = 0; j < cols; ++j) {
			arr[i][j] = " ";
		}
	}
}

void verticalLine(string** arr, int rowVal, int colVal, int size) {

	for(int r = rowVal; r < rowVal + size; ++r) 
		arr[r][colVal] = "|";
}

void horizontalLine(string** arr, int rowVal, int colVal, int size) {

	for(int c = colVal; c < colVal + size; ++c) 
		arr[rowVal][c] = "-";
}

void printZero(int count, int rows, int cols, int size) {

	string** arrZero;
	arrZero = new string*[rows];
	for(int i = 0; i < rows; ++i) 
		arrZero[i] = new string[cols];
	initializeArr(arrZero, rows, cols);

	horizontalLine(arrZero, 0, 1, size);
	verticalLine(arrZero, 1, 0, size);
	verticalLine(arrZero, 1, cols - 1, size);
	verticalLine(arrZero, size + 2, 0, size);
	verticalLine(arrZero, size + 2, cols - 1, size);
	horizontalLine(arrZero, rows - 1, 1, size);
	printArr(arrZero, rows, cols);
	delete arrZero;
}

void printOne(int count, int rows, int cols, int size) {
	
	string** arrOne;
	arrOne = new string*[rows];
	for(int i = 0; i < rows; ++i)
		arrOne[i] = new string[cols];
	initializeArr(arrOne, rows, cols);
	
	verticalLine(arrOne, 1, cols - 1, size);
	verticalLine(arrOne, size + 2, cols - 1, size);
	printArr(arrOne, rows, cols);
	delete arrOne;
}

void printTwo(int count, int rows, int cols, int size) {

	string** arrTwo;
	arrTwo = new string*[rows];
	for(int i = 0; i < rows; ++i)
		arrTwo[i] = new string[cols];
	initializeArr(arrTwo, rows, cols);

	horizontalLine(arrTwo, 0, 1, size);
	verticalLine(arrTwo, 1, cols - 1, size);
	horizontalLine(arrTwo, size + 1, 1, size);
	verticalLine(arrTwo, size + 2, 0, size);
	horizontalLine(arrTwo, rows - 1, 1, size);
	printArr(arrTwo, rows, cols);
	delete arrTwo;
}

void printThree(int count, int rows, int cols, int size) {

	string** arrThree;
	arrThree = new string*[rows];
	for(int i = 0; i < rows; ++i) 
		arrThree[i] = new string[cols];
	initializeArr(arrThree, rows, cols);

	horizontalLine(arrThree, 0, 0, size);
	verticalLine(arrThree, 1, cols - 1, size);
	horizontalLine(arrThree, size + 1, 0, size);
	verticalLine(arrThree, size + 2, cols - 1, size);
	horizontalLine(arrThree, rows - 1, 0, size);
	printArr(arrThree, rows, cols);
	delete arrThree;
}

void printFour(int count, int rows, int cols, int size) {

	string** arrFour;
	arrFour = new string*[rows];
	for(int i = 0; i < rows; ++i) 
		arrFour[i] = new string[cols];
	initializeArr(arrFour, rows, cols);

	verticalLine(arrFour, 1, 0, size);
	horizontalLine(arrFour, size + 1, 1, size);
	verticalLine(arrFour, 1, size + 1, size);
	verticalLine(arrFour, size + 2, size + 1, size);
	printArr(arrFour, rows, cols);
	delete arrFour;
}

void printFive(int count, int rows, int cols, int size) {

	string** arrFive;
	arrFive = new string*[rows];
	for(int i = 0; i < rows; ++i) 
		arrFive[i] = new string[cols];
	initializeArr(arrFive, rows, cols);

	horizontalLine(arrFive, 0, 1, size);
	verticalLine(arrFive, 1, 0, size);
	horizontalLine(arrFive, size + 1, 1, size);
	verticalLine(arrFive, size + 2, size + 1, size);
	horizontalLine(arrFive, rows - 1, 1, size);
	printArr(arrFive, rows, cols);
	delete arrFive;
}

void printSix(int count, int rows, int cols, int size) {

	string** arrSix;
	arrSix = new string*[rows];
	for(int i = 0; i < rows; ++i) 
		arrSix[i] = new string[cols];
	initializeArr(arrSix, rows, cols);

	horizontalLine(arrSix, 0, 1, size);
	verticalLine(arrSix, 1, 0, size);
	horizontalLine(arrSix, size + 1, 1, size);
	verticalLine(arrSix, size + 2, 0, size);
	horizontalLine(arrSix, rows - 1, 1, size);
	verticalLine(arrSix, size + 2, size + 1, size);
	printArr(arrSix, rows, cols);
	delete arrSix;
}

void printSeven(int count, int rows, int cols, int size) {

	string** arrSeven;
	arrSeven = new string*[rows];
	for(int i = 0; i < rows; ++i) 
		arrSeven[i] = new string[cols];
	initializeArr(arrSeven, rows, cols);

	horizontalLine(arrSeven, 0, 1, size);
	verticalLine(arrSeven, 1, cols - 1, size);
	verticalLine(arrSeven, size + 2, cols - 1, size);
	printArr(arrSeven, rows, cols);
	delete arrSeven;
}

void printEight(int count, int rows, int cols, int size) {

	string** arrEight;
	arrEight = new string*[rows];
	for(int i = 0; i < rows; ++i) 
		arrEight[i] = new string[cols];
	initializeArr(arrEight, rows, cols);

	horizontalLine(arrEight, 0, 1, size);
	verticalLine(arrEight, 1, 0, size);
	verticalLine(arrEight, 1, cols - 1, size);
	horizontalLine(arrEight, size + 1, 1, size);
	verticalLine(arrEight, size + 2, 0, size);
	verticalLine(arrEight, size + 2, cols - 1, size);
	horizontalLine(arrEight, rows - 1, 1, size);
	printArr(arrEight, rows, cols);
	delete arrEight;
}

void printNine(int count, int rows, int cols, int size) {

	string** arrNine;
	arrNine = new string*[rows];
	for(int i = 0; i < rows; ++i) 
		arrNine[i] = new string[cols];
	initializeArr(arrNine, rows, cols);

	horizontalLine(arrNine, 0, 1, size);
	verticalLine(arrNine, 1, 0, size);
	verticalLine(arrNine, 1, cols - 1, size);
	horizontalLine(arrNine, size + 1, 1, size);
	verticalLine(arrNine, size + 2, cols - 1, size);
	horizontalLine(arrNine, rows - 1, 1, size);
	printArr(arrNine, rows, cols);
	delete arrNine;
}

void printNum(string inputFile) {

	ifstream readFile;
	readFile.open(inputFile);
	int size = 0;
	int rows = 0;
	int cols = 0;
	int num = 0;
	int lenOfNum = 0;
	int index = 0;
	string numAsStr = "";
	char digit = 'X';
	while(readFile >> size >> num) {
		if(size == 0)
			return;
		rows = (2 * size) + 3;
		cols = size + 2;
		string numStr = to_string(num);
		lenOfNum = numStr.length();
		index = 0;
		while(index < lenOfNum) {
			digit = numStr[index];
			if(digit == '0') {
				printZero(size, rows, cols, size);
			}
			else if(digit == '1') {
				printOne(size, rows, cols, size);
			} else if(digit == '2') {
				printTwo(size, rows, cols, size);
			} else if(digit == '3') {
				printThree(size, rows, cols, size);
			} else if(digit == '4') {
				printFour(size, rows, cols, size);
			} else if(digit == '5') {
				printFive(size, rows, cols, size);
			} else if(digit == '6') {
				printSix(size, rows, cols, size);
			} else if(digit == '7') {
				printSeven(size, rows, cols, size);
			} else if(digit == '8') {
				printEight(size, rows, cols, size);
			} else if(digit == '9') {
				printNine(size, rows, cols, size);
			}
			index++;
		 }
	}
	readFile.close();
}

int main(int argc, char* argv[]) {

	if(argc != 2) {
		cout << "Program needs an input file with input "
			<< "Terminating\n";
		return 0;	
	}
	printNum(argv[1]);
	return 0;
}