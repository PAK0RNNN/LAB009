#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan;
	double rate;
	double payment;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

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
	payment = (payment < loan + (loan * rate / 100)) ? payment : loan + (loan * rate / 100);
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << 1; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << loan * rate / 100;
	cout << setw(13) << left << loan + (loan * rate / 100);
	cout << setw(13) << left << payment;
	cout << setw(13) << left << loan + (loan * rate / 100) - payment;
	cout << "\n";
	if (loan + (loan * rate / 100) - payment == 0) return 0;
	
	int i = 2;
	while(loan > 0){
		loan = loan + (loan * rate / 100) - payment;
		loan = (loan < 0) ? 0 : loan;
		payment = (payment < loan + (loan * rate / 100)) ? payment : loan + (loan * rate / 100);
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i++; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << loan * rate / 100;
		cout << setw(13) << left << loan + (loan * rate / 100);
		cout << setw(13) << left << payment;
		cout << setw(13) << left << loan + (loan * rate / 100) - payment;
		cout << "\n";
		if (loan + (loan * rate / 100) - payment == 0) break;
	}
	return 0;
}