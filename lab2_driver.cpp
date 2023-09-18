//*****************************************************************************
//
//File Name:           lab2_driver.cpp
//
//This program computes the selling price of an object given its retail
//price,discount and tax.
//
//Programmer:          Trey Davis
//
//Date Written:        11 September 2023
//
//Date Last Revised:   17 September 2023
//
//*****************************************************************************

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    const double SALE_TAX = .0875;
    double wholePrice, markupRate, salePrice, discountRate, totalPrice;
    cout << " Enter the whole price of the product ";
    cin >> wholePrice;
    cout << " Enter the percentage markup rate of the product ";
    cin >> markupRate;
    salePrice = wholePrice + (wholePrice*markupRate/100);
    cout << " Enter the percentage discount rate of the product ";
    cin >> discountRate;
    discountRate /= 100;
    totalPrice = salePrice - (salePrice*discountRate) + (salePrice - (salePrice*discountRate))*SALE_TAX;
    totalPrice = (double)round((totalPrice * 100)) / 100;
    string stringTotalPrice = to_string(totalPrice);
    cout << " The total price amounts to " << stringTotalPrice;
    return 0;
}