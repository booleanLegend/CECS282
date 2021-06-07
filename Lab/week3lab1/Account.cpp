// Names: Mark Fastner, Melissa Gaines, Matthew Zaldana, Javier Sanchez
// Week 3 Lab 1 - Object and Class
// Demo time: 8:10 pm
#include <iostream>
#include "Account.h"
using namespace std;

Account::Account() {
	balance = 0;
}

Account::Account(int start_amount) {
	balance = start_amount;
}

int Account::get_balance() {
	return balance;
}

void Account::deposit(int deposit_amount){
	balance += deposit_amount;
}
void Account::withdraw(int withdraw_amount){
	if (withdraw_amount > balance){
		balance -= 20;
	}
	else {
		balance -= withdraw_amount;
	}
}

