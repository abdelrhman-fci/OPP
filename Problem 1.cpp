#include <iostream>
#include <cmath>
using namespace std; 

// Class to Find The prefect Numbers 
class perfectNumber {
private:
	int prime;
	double prefectNum;
	int maxNum;
	
public:
	void setMaxNum(int x)
	{
		maxNum = x;
	}
	

	bool IsNumPrime()
	{
		
		for (int i = 2; i <= prime/2 ; i++)
			if (prime % i == 0)
			{
				return  false;
				break;
			}
	}

	void printPerfectNum() {

		for (prime = 2; prefectNum <= maxNum; prime++) {
			if (IsNumPrime() != false ) {
				// According to Eqlidc to find the prefect number Theroy (2^(p−1))* (2p − 1) where p is prime number 
				prefectNum = pow(2, prime - 1) * (pow(2, prime) - 1);
				if (prefectNum <= maxNum) {
					cout << "The Prefect Number  Is " << prefectNum << endl;
				}
			}
			
		}
	}

	
};





int main(){
	int maxNumber ;
	perfectNumber P;
	cout << "Enter the Max Number : ";
	cin >> maxNumber;
	
	P.setMaxNum(maxNumber);
	P.printPerfectNum();
	return 0;
}