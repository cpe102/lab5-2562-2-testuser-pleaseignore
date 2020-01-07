#include<iostream>
#include<string>
using namespace std;

string  mixText(string a, string b){
	int x = a.size();
	int y = b.size();

	if (x != y){
		return "E";
	}

int i = 0;
string z = "";
while(i<x){
	z = z+ a[i] + b[i];
	i++;
	
}
return z;
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
