#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> topAnimeVector;

	topAnimeVector.push_back("Dragon Ball Z");
	topAnimeVector.push_back("Naruto");
	topAnimeVector.push_back("Yuyu Hakasho");
	topAnimeVector.push_back("Inuyasha");
	topAnimeVector.push_back("Bleach");

	topAnimeVector.insert(topAnimeVector.begin() + 2, "Full Metal Alchemist");
	topAnimeVector.pop_back();
	for (string anime : topAnimeVector) {

		cout << anime << endl;
	}

	cout << endl;

	return 0;
}