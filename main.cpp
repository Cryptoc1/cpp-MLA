#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

using namespace std;

string getMonth(int month);

int main() {
	string filename;
	string userName;
	string teacherName;
	string className;
	
	time_t now = time(0);

    tm *ltm = localtime(&now);

    int day = ltm->tm_mday;
    int monthNum = 1 + ltm->tm_mon;
    int year = 1900 + ltm->tm_year;
    string month = getMonth(monthNum);
    
    cout << "What do you want the file to be called (including file extension)?\n";
    getline(cin, filename);
    ofstream file (filename.c_str());
    cout << "What is your name?\n";
	getline(cin, userName);
	cout << "What is your teacher's name?\n";
	getline(cin, teacherName);
	cout << "What is the title of the class?\n";
	getline(cin, className);
	
	file << userName << endl << teacherName << endl << className << endl << day << " " << month << " " << year; 
	
	cout << "Write complete, check file.\n";
	
	return 0;
};

string getMonth(int month) {
	switch(month) {
		case 1:
			return "January";
			break;
		case 2:
			return "February";
			break;
		case 3:
			return "March";
			break;
		case 4:
			return "April";
			break;
		case 5:
			return "May";
			break;
		case 6:
			return "June";
			break;
		case 7:
			return "July";
			break;
		case 8:
			return "August";
			break;
		case 9:
			return "September";
			break;
		case 10:
			return "October";
			break;
		case 11:
			return "November";
			break;
		case 12:
			return "December";
			break;
		default:
			return "NULL";
			break;
	};
};
