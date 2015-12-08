#include <iostream>
using namespace std;

void showIntro(ostream &output = cout);

char getYesNo();

void loadArray5s(int allFives[], int size);

void loadArrayEven(int even[], int size);

void loadArrayOdd(int odd[], int size);

void loadArrayPrime(int prime[], int size);

void loadArraySquares(int squares[], int size);

bool isPrime(int x);

void printArray(int arrayToPrint[], int size, int numPerLine = 5, ostream &output = cout);