#include <iostream>
using namespace std;
int main() { 
	string name;
        int age;
	string fav_hobby;	
	cout << "Please input your first name" << endl;
	cin >> name;
	cout << "Please input your age" << endl;
	cin >> age;
	cout << "Please input your favorite hobby, only one now." << endl;
	cin >> fav_hobby;
	cout << "So your basic profile is:\n";
	cout << "\tname: " << name << endl;
	cout << "\tage: " << age << endl;
	cout << "\tfavorite hobby: " << fav_hobby << endl;
	cout << "That is all for now, thank you for making a profile =)" << endl;
	return 0;
}
