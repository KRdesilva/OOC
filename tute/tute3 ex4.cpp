#include<iostream>
#include<iomanip>

using namespace std;
struct Box{
	int height;
	int width;
	int length;
}box1, box2;

int volume (int height, int width, int length);
void print(int len, int wth);
void input(int &len, int &wth);

// Do not change the main() function
int main() {
	int length = 10, width = 5;
	input(length, width);
	print(length, width);
	
	return 0;
}

// Do not change the print() function
void print(int len, int wth) {
	cout << "Length : " << len
	<< ", Width : " << wth << endl;
}

void input(int &len, int &wth) {
	cout <<"Length: ";
	cin >> len;
	
	cout<<"Width: ";
	cin >>wth;
}
