#include <iostream>
#include <string>
using namespace std;

int main()
{
	string adjective1;
	string girlsName;
	string adjective2;
	string occupation1;
	string placeName;
	string clothing;
	string hobby;
	string adjective3;
	string occupation2;
	string boysName;
	string manName;

	cout << " Enter an adjective" << endl;
	getline(cin, adjective1);

	cout << " Enter a girl's name" << endl;
	getline(cin, girlsName);

	cout << " Enter another adjective" << endl;
	getline(cin, adjective2);

	cout << " Enter an occupation" << endl;
	getline(cin, occupation1);

	cout << " Enter the name of a place" << endl;
	getline(cin, placeName);

	cout << " Enter the name of a piece of clothing (plural)" << endl;
	getline(cin, clothing);

	cout << " Enter the name of a hobby" << endl;
	getline(cin, hobby);

	cout << " Enter yet another adjective" << endl;
	getline(cin, adjective3);

	cout << " Enter another Occupation" << endl;
	getline(cin, occupation2);

	cout << " Enter a boy's name " << endl;
	getline(cin, boysName);

	cout << " Enter a man's name " << endl;
	getline(cin, manName);




	cout << " There once was a " << adjective1 << " girl named " << girlsName << " who was a " << adjective2
		<< " " << occupation1 << " in the Kingdom of " << placeName << ". She loved to wear " << clothing
		<< " and " << hobby << ". She wanted to marry the " << adjective3 << " " << occupation2 << " named "
		<< boysName << " but her father, King " << manName << " forbid her from seeing him. " << endl;

	return 0;

}