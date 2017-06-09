#include <iostream>
#include <fstream>
using namespace std;

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

	for(int r = rowVal; r < rowVal + size; ++r) {
		arr[r][colVal] = "|";
	}
}

void horizontalLine(string** arr, int rowVal, int colVal, int size) {

	for(int c = colVal; c < colVal + size; ++c) {
		arr[rowVal][c] = "-";
	}
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
	
	int counter = 0;
	string** arrOne;
	arrOne = new string*[rows];
	for(int i = 0; i < rows; ++i)
		arrOne[i] = new string[cols];
	initializeArr(arrOne, rows, cols);
	
	for(int i = 1; i < rows - 1; i++) {
		if(counter == count) {
			counter = 0;
			continue;
		}
		arrOne[i][cols - 1] = "|";
		counter++;
	}
	printArr(arrOne, rows, cols);
	delete arrOne;
}

void printTwo(int count, int rows, int cols, int size) {

	string** arrTwo;
	arrTwo = new string*[rows];
	for(int i = 0; i < rows; ++i)
		arrTwo[i] = new string[cols];
	initializeArr(arrTwo, rows, cols);
	horizontalLine(arrTwo, 0, 0, size);
	verticalLine(arrTwo, 1, 2, size);
	horizontalLine(arrTwo, 3, 0, size);
	verticalLine(arrTwo, 4, 0, size);
	horizontalLine(arrTwo, 6, 0, size);
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
	verticalLine(arrThree, 1, 2, size);
	horizontalLine(arrThree, 3, 0, size);
	verticalLine(arrThree, 4, 2, size);
	horizontalLine(arrThree, 6, 0, size);
	printArr(arrThree, rows, cols);
	delete arrThree;
}

void printFour(int count, int rows, int cols, int size) {

	string** arrFour;
	arrFour = new string*[rows];
	for(int i = 0; i < rows; ++i) 
		arrFour[i] = new string[cols];
	initializeArr(arrFour, rows, cols);
	verticalLine(arrFour, 0, 0, size);
	horizontalLine(arrFour, size, 1, size);
	verticalLine(arrFour, 0, size + 1, size);
	verticalLine(arrFour, size + 1, size + 1, size);
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
	int num = 0;
	int lastDigit = 0;
	string numAsStr = "";
	while(readFile >> size >> num) {
		int rows = (2 * size) + 3;
		int cols = size + 2;
		// while(index < lenOfNum) {
			if(num == 0) {
				printZero(size, rows, cols, size);
			}
			else if(num == 1) {
				printOne(size, rows, cols, size);
				
			} else if(num == 2) {
				printTwo(size, rows, cols, size);
				
			} else if(num == 3) {
				printThree(size, rows, cols, size);
				
			} else if(num == 4) {
				printFour(size, rows, cols, size);
				
			} else if(num == 5) {
				printFive(size, rows, cols, size);
				
			} else if(num == 6) {
				printSix(size, rows, cols, size);
			
			} else if(num == 7) {
				printSeven(size, rows, cols, size);
				
			} else if(num == 8) {
				printEight(size, rows, cols, size);
				
			} else if(num == 9) {
				printNine(size, rows, cols, size);
			
			}
		// }
	}
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