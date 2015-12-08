// Fun with arrays
// FullArrays.exe
// By: Andrew Thomas
// As of: 12/7/2015

#include <iostream>
#include <fstream>
#include <string>
#include "FullArraysHeader.h"
using namespace std;

void main(){
	const int
		SIZE_5 = 139,
		SIZE_EVEN = 90,
		SIZE_ODD = 100,
		SIZE_PRIME = 120,
		SIZE_SQUARES = 42;

	int fives[SIZE_5], even[SIZE_EVEN], odd[SIZE_ODD], prime[SIZE_PRIME], squares[SIZE_SQUARES];
	char yesNo;
	string fileName;
	ofstream outputFile;

	cout << endl;

	showIntro();

	cout << endl << endl;

	cout << "I am about to call loadArray5s..." << endl;

	loadArray5s(fives, SIZE_5);

	cout << "Finished loading loadArray5s..." << endl;
	cout << "I am about to call print Array (with the dault value for perline)..." << endl;

	printArray(fives, SIZE_5);

	cout << endl << endl;
	system("pause");

	/////////////////////////////////////////////////////////////////////////////////////

	cout << endl << endl;

	cout << "I am about to call loadArrayEven..." << endl;

	loadArray5s(even, SIZE_EVEN);

	cout << "Finished loading loadArrayEven..." << endl;
	cout << "I am about to call printArray (with 4 perline)..." << endl;

	printArray(even, SIZE_EVEN, 4);

	cout << endl << endl;
	system("pause");
	
	/////////////////////////////////////////////////////////////////////////////////////

	cout << endl << endl;

	cout << "I am about to call loadArrayOdd..." << endl;

	loadArray5s(odd, SIZE_ODD);

	cout << "Finished loading loadArrayOdd..." << endl;
	cout << "I am about to call printArray (with 3 perline)..." << endl;

	printArray(odd, SIZE_ODD, 3);

	cout << endl << endl;
	system("pause");
	
	/////////////////////////////////////////////////////////////////////////////////////

	cout << endl << endl;

	cout << "I am about to call loadArrayPrime..." << endl;

	loadArray5s(prime, SIZE_PRIME);

	cout << "Finished loading loadArrayPrime..." << endl;
	cout << "I am about to call printPrime (with 2 perline)..." << endl;

	printArray(prime, SIZE_PRIME, 2);

	cout << endl << endl;
	system("pause");

	/////////////////////////////////////////////////////////////////////////////////////

	cout << endl << endl;

	cout << "I am about to call loadArraySquare..." << endl;

	loadArray5s(squares, SIZE_SQUARES);

	cout << "Finished loading loadArraySquares..." << endl;
	cout << "I am about to call printArray (with 1 perline)..." << endl;

	printArray(squares, SIZE_SQUARES, 1);

	cout << endl << endl;
	system("pause");

	///////////////////////////////////////////////////////////////////////////////////////

	cout << "Do you want to output the arrays to a file? ";
	char yesNo = getYesNo();
	cout << endl << endl;

	if (yesNo == 'Y' || yesNo == 'y'){
		cout << "To what file do you want to output the array? ";
		getline(cin, fileName);

		outputFile.open(fileName);

		if (!outputFile){
			system("color 97");
			cout << "Failed to open file: \"" << fileName << "\". Exiting the program.";
			
			system("pause");
			exit(0);
		}
		showIntro(outputFile);

		// FINISH FILE OUTPUT SECTION
	}
}