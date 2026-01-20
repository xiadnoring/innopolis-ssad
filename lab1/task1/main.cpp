#include <iostream>

using namespace std;

int main() {
	int b;
	cin >> b;
	int seconds = b % 60;
	int minutes = (b % (60 * 60) - seconds) / 60;
	int hours = (b % (60 * 60 * 60) - minutes * 60 - seconds) / 60 / 60;
	cout << hours << ":"<<minutes<<":"<<seconds<<"\n";
    return 0;
}
