#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const char alphnum[] = "0123456789!@#$%^&*_-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int alphnum_length = sizeof(alphnum);

int main() {
	int length = 0;
	cout << "Enter the length of password you want: ";
	cin >> length;

	srand(time(0));

	cout << "Generated password: ";
	for (int i = 0; i < length; i++) {
		cout << alphnum[rand() % alphnum_length];
	}
	cout << endl;

	cin.ignore();
	cin.get();

	return 0;
}