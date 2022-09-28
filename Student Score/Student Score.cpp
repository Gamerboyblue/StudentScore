/*
Nathan Gleesing
Date: 9/14/2022
Program Title: Student Score
Program Description: Takes student names and scores from one file and creates a new file to display them in.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>


using namespace std;

// Named constants

int main()
{

	// Variable declaration

	string name1, name2, name3;
	double score1, score2, score3, score4, score5, score6, score7, score8, score9;
	double average1, average2, average3;

	// Declare file stream variables

	ifstream inData;
	ofstream outData;

	// Open the input/output files

	inData.open("Student Score.txt");
	outData.open("output.out");

	// Check

	if(inData){
		cout << "Input file was found successfully!" << endl;
		cout << "Continuing program." << endl << endl;
	}
	else {
		cout << "Input file was not found!" << endl;
		cout << "Program terminating." << endl;
		return 1;
	}

	// Program title and description for the user

	// Code for data manipulation

	getline(inData, name1);
	inData >> score1 >> score2 >> score3;

	inData.ignore();

	getline(inData, name2);
	inData >> score4 >> score5 >> score6;

	inData.ignore();

	getline(inData, name3);
	inData >> score7 >> score8 >> score9;

	// Calculations

	average1 = (score1 + score2 + score3) / 3;
	average2 = (score4 + score5 + score6) / 3;
	average3 = (score7 + score8 + score9) / 3;

	// Output to the file

	outData << fixed << showpoint << setprecision(2);

	outData << setw(25) << left << "Name" << setw(8) << "Score 1" << setw(8) << "Score 2" << setw(8) << "Score 3" << setw(8) << "Average" << endl;
	outData << setw(25) << left << name1 << setw(8) << score1 << setw(8) << score2 << setw(8) << score3 << setw(8) << average1 << endl;
	outData << setw(25) << left << name2 << setw(8) << score4 << setw(8) << score5 << setw(8) << score6 << setw(8) << average2 << endl;
	outData << setw(25) << left << name3 << setw(8) << score7 << setw(8) << score8 << setw(8) << score9 << setw(8) << average3 << endl;

	// Output to the screen

	cout << "Processing data..." << endl;
	cout << "Please check output file." << endl;

	// Closing the files

	inData.close();
	outData.close();

	return 0;
}