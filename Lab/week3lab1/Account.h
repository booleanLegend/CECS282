// Names: Mark Fastner, Melissa Gaines, Matthew Zaldana, Javier Sanchez
// Week 3 Lab 1 - Object and Class
// Demo time: 8:10 pm
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Account
{
	private:
		int balance;
	public:
		Account();
		Account(int);
		int get_balance();
		void deposit(int);
		void withdraw(int);
};
#endif