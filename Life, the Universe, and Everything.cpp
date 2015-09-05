#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int broj;
	cin>>broj;
	while(broj!=42)
	{
		cout<<broj<<endl;
		cin>>broj;
	}
	
	return 0;
}
