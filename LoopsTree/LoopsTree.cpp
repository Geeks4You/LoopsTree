// LoopsTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	int height;
	int width;
	int leaves;

	int row;
	int space;
	int star;

	cout << "Enter trunk height: " << endl;
	cin >> height;

	cout << "Enter trunk width: " << endl;
	cin >> width;

	cout << "Enter leaves width: " << endl;
	cin >> leaves;

	for (row = 0; row <= leaves; row++) {

		for (space = leaves - row; space >= 1; space--) {
			printf(" ");
		}
		for (star = 1; star <= row; star++) {

			printf("* ");
		}

		printf("\n");

	}
	for (row = 0; row <= height; row++) {

		for (space = width; space >= 1; space--) {
			printf(" ");
		}

		for (star = 1; star <= width; star++) {

			cout << "*";
		}

		cout << endl;

	}

}
