// Name: Katherine Sandoval
// This program finds as many primes of the form n^2 + 1, where "n" is a positive integer up to 1000.

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long);

int main(){

	int limit = 1000;
	long num;

	cout << "Primes of the form n^2 + 1 (n from 1 to 1000):" << endl;

	// Loop from 1 to 1000 and determine whether the integer of the form n^2+1 is prime.
	for (int n = 1; n <= limit; n++){ 
		num = pow(n, 2) + 1;
		if (isPrime(num))
			cout << num << "\t"; // If it's prime, it prints it out.
	}

	cout << endl;

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