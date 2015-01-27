// Name: Katherine Sandoval
// This program determines whether 2^P − 1 is prime for each prime no exceeding 100.

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long);

int main(){
	
	int lastNum = 100;
	long num = 0;

	cout << "2^P - 1 is prime when:" << endl;

	for (int p = 2; p <= lastNum; p++){ // Loop for P from 2 to 100 
		if (isPrime(p)){ // if P is prime: 
			num = pow(2, p) - 1; // Calculate 2^p-1
			if (isPrime(num)) // Checks if 2^p-1 is prime. If so, prints out the number
				cout << "P is " << p << " = " << num << endl; 
		}
	}

	system("pause");
	return 0;
}

// This function determines whether a positive integer is prime using trial division
bool isPrime(long num){
	if (num < 2)
		return false;

	for (int i = 2; i <= sqrt(num); i++){
		if (num % i == 0)
			return false;
	}

	return true;
}