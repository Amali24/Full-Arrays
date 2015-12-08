#include <iostream>
#include "FullArraysHeader.h"
using namespace std;

void showIntro(ostream &output){
	output
		<< "\t This is a lab on completely full arrays" << endl
		<< "\t               by A. Thomas" << endl;
}

char getYesNo(){
		char c;
		cin >> c;		cin.ignore(80, '\n');

		while (c != 'y' && c != 'Y' && c != 'n' && c != 'N'){
			cout << "Please enter \'Y\' or \'N\'. Try again: ";
			cin >> c;		cin.ignore(80, '\n');
		}
		return c;
}

void loadArray5s(int allFives[], int size){
	for (int i = 0; i <= size; i++)
		allFives[i] = 5;
}

void loadArrayEven(int even[], int size){
	for (int i = 0; i <= size; i++)
		even[i] = (i + 1) * 2;
}

void loadArrayOdd(int odd[], int size){
	for (int i = 0; i <= size; i++)
		odd[i] = (i + 1) * 2 - 1;
}

void loadArrayPrime(int prime[], int size){
	int k = 2;
	for (int i = 0; i <= size; k++){
		if (isPrime(k)){
			prime[i] = k;
			i++;
		}
	}
}

void loadArraySquares(int squares[], int size){
	for (int i = 0; i <= size; i++)
		squares[i] = (i + 1) * (i + 1);
}

bool isPrime(int x) {
	for (int i = 2; i < x / 2; i++) {
		if (x % i == 0)	
			return false;
	}
	return true;
}


void printArray(int arrayToPrint[], int size, int numPerLine, ostream &output){
	for (int i = 0; i < size; i++)
		output << arrayToPrint[i] << (i % numPerLine == 0 ? "\n" : "\t");
}