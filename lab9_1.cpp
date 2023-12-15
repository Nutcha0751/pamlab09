#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, rate, pay;
	int year = 2;

	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	double PrevBalance, Interest, Total, NewBalance;
	PrevBalance = loan;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << 1; 
	cout << setw(13) << left << PrevBalance;
	Interest = PrevBalance*(rate/100);
	cout << setw(13) << left << Interest;
	Total = PrevBalance + Interest;
	cout << setw(13) << left << Total;
	
	if(pay > Total){
		pay = Total;
	}
	cout << setw(13) << left << pay;

	NewBalance = Total - pay;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	

	while(NewBalance > 0){
		PrevBalance = NewBalance;

		cout << fixed << setprecision(2);
		cout << setw(13) << left << year;
		cout << setw(13) << left << PrevBalance;
		Interest = PrevBalance*(rate/100);
		cout << setw(13) << left << Interest;
		Total = PrevBalance + Interest;
		cout << setw(13) << left << Total;

		if(pay > Total){
			pay = Total;
		}
		cout << setw(13) << left << pay;

		NewBalance = Total - pay;
		cout << setw(13) << left << NewBalance;
		cout << "\n";	

		year++;
	}
	
	
	return 0;
}
