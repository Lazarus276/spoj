#include <iostream>
#include <stdio.h>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


bool prime(int number)
{
  if (number < 2) return false;
  for(int k=2; k<= sqrt(number); k++) {
    if ((number%k) == 0) return false;
  }
  return true;
}
int main(int argc, char** argv) {
	int koliko=0;cin>>koliko;
	int A[koliko],B[koliko];
	for(int i=0;i<koliko;i++)
	{
		cin>>A[i];cin>>B[i];
		for(int p=A[i];p<=B[i];p++)
		if(prime(p))printf("%d\n",p);
	}
	
	return 0;
}
