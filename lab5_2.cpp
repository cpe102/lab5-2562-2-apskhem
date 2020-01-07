#include<iostream>
#include<string>
using namespace std;

string mixText(string text1, string text2) {
	if (text1.size() == text2.size()) {
		string sum;
		for (short i = 0; i < text1.size(); i++) {
			sum = sum + text1[i] + text2[i];
		}
		return sum;
	}
	else {
		return "E";
	}
}

int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
