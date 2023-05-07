#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
void my_Numbers();
int main(){
   int i; /* counter */
	/* loop 20 times */
	int number=0;
	cout<<"Enter a number for the range :"<<endl;
	cin>>number;
	cout<<"Here are the random numbers between 1 and : " <<number<<endl;
	srand(time(NULL));
	for (i = 1; i <= 20; i++) {
		/* pick random number from 1 to 6 and output it */
	cout<<setw(5)<<2+  rand() % (number-2)<< " ";
		/* if counter is divisible by 5, begin new line of output */
		if (i % 5 == 0) {
			cout<<"\n";
		}
	}
	return 0;
}
