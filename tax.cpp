// Copyright
//
// Created by: Zack Isingoma
// Date: 2021
// This program asks the user for the price and then
// displays the circumference using tau.
#include <iostream>

int main() {
  // declare constants
  const float HST = 0.13;

  // declare variables
  float subtotal, total;

  // get the subtotal from the user
  std::cout << "Enter the Subtotal ($): ";
  std::cin >> subtotal;

  // calculate the Total
  total = HST * subtotal;

  // display the Total to the user
  std::cout << ""
  std::cout << "\n";
  std::cout << "Total = " << total << " $" << std::endl;
}
