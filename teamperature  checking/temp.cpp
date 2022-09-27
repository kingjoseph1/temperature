#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//C++ progam that takes two teperatures 
//if the temperature is above 38c print is abnormal
// if the temperature is from 36-38c print normal 
//if the temperature is below 36 print the patient is sick


int main( ) {
	// declaring variables
	int temp1;
    cout << "ENTER BODY TEMPERATURE :" "\n";
    cin  >> temp1;
//calculating input values
 if (temp1==36 && temp1<=38){
	cout<< "IS NORMAL";
}

else if (temp1> 38){
	cout<< "IS ABNORML";
}

else {
	cout<< "THE PATIENT IS SICK";
}
	return 0;
}
