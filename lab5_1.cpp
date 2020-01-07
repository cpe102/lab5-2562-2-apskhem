#include<iostream>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N];

	for (short i = 0; i < N; i++) {
		cout << "Name of student " << i+1 << " = ";
		cin >> name[i];
		cout << "Age of student " << i+1 << " = ";
		cin >> age[i];
	}
	
	
	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	
	for (short i = 0; i < N; i++) {
		if (age[i] == key)
			cout << name[i] << endl;
	}
	
	cout << "--------------------------------------\n";
	
	return 0;
}
