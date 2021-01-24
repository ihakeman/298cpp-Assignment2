#include <iostream>

using namespace std;

int main(int argc, char **argv){
  const short numElements = 10;//const since it should never be changed for this array.
  int numberArray[numElements];

  //initialize array elements to 0 to prevent bugs
  for(int i = 0; i < numElements; ++i){
    numberArray[i] = -1;
  }

  //prompt user for input for array
  cout << "Input up to 10 positive integers, one at a time. If you want fewer than 10, \ninput a negative value once you have entered as many as you want." << endl;
  for(int i = 0; i < numElements; ++i){
    cout << "Integer " << i + 1 <<": ";//tell user the total number of integers they have put in including this one
    cin >> numberArray[i];

    if(numberArray[i] < 0)//if a negative value is input, exit the loop so no more input is prompted
      break;
  }

  //if user entered any nonnegative values, send them to console
  if(numberArray[0] >= 0)//if the user didn't input any positive values, skip it.
    cout << "You entered these integers:" << endl;

  for(int i = 0; i < numElements; ++i){
    if(numberArray[i] < 0)//quit the printing loop once a negative value has been reached in the array
      break;
    cout << numberArray[i] << endl;
  }

  return 0;
}
