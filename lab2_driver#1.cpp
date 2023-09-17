//*****************************************************************************
//
//File Name:           lab2_driver.cpp
//
//This program computes the selling price of an object given its retail
//price,discount and tax. 
//
//Programmer:          B.J.Streller AND YOU NAME HERE
//
//Date Written:        11 September 2023 
//
//Date Last Revised:   
//
//*****************************************************************************



#include <iostream>		//need for cin.cout
#include <iomanip>		//need for setprecision, setf, etc
#include <stdio.h>		//need for getchar()
using namespace std;


int main()
{

	//DECLARATIONS
	//declare a constant for the sales tax rate of 8.25%
	//add any other necessary variable declarations
	double  retail_price,
			discount_rate,
			sales_tax;

	//INPUT
	cout << " please enter the price of the item: " << endl;
	cin >> retail_price;
	cout << "please enter the discount rate ( as a decimal - no % please ): " 
		 << endl;
	cin >> discount_rate;

	// TODO : PROCESS (CALCULATE)
	
	//OUTPUT
 	cout.setf( ios::showpoint );
  	cout.setf( ios::fixed );
  	cout << setprecision(2);
 	// cout statements TODO
 	cout.unsetf( ios::showpoint );


							// these 3 lines hold 
							// the command window open
	cout << "streller says press any key to continue \n"; 					 
	cin.ignore();
	char ch = getchar();


	return 0;
}

