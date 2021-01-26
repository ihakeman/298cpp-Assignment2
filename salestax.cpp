#include <iostream>
#include <iomanip> //used for rounding

using namespace std;

float addTax(float taxRate, float cost);

int main(int argc, char **argv){
  float taxRate;
  float cost;

  cout << "Input the cost of an item: $";
  cin >> cost;

  cout << "Input the tax rate as a percent: ";
  cin >> taxRate;

  //update the value of cost so that it includes the tax
  cost = addTax(taxRate, cost);

  //fixed setprecision(2) restricts the floating points to 2 digits after the decimal point
  cout << "The cost of the item with tax included: $" << fixed << setprecision(2) << cost << endl;

  return 0;
}

//adds the tax amount to the cost to get the total cost of the item
float addTax(float taxRate, float cost){
  //total is the cost + (cost * taxRate), or cost * (1 + taxRate)
  return cost * (1 + (taxRate / 100));//convert to decimal from percentage for the taxRate by division by 100
}
