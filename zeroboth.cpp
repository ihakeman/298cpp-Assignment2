#include <iostream>

using namespace std;

void zeroBoth(int &firstInt, int &secondInt);

int main(int argc, char **argv){
  int userInput1;
  int userInput2;

  //get the integers from input by the user
  cout << "Enter two integers" << endl;
  cout << "First integer: ";
  cin >> userInput1;
  cout << "Second integer: ";
  cin >> userInput2;

  //use the zeroBoth function on the integers the user input
  zeroBoth(userInput1, userInput2);

  //print the original variables back to the user.
  cout << endl;
  cout << "After the zeroBoth function:" << endl;
  cout << "First integer: " << userInput1 << endl;//outputs the original variables
  cout << "Second integer: " << userInput2 << endl;

  return 0;
}

//takes two integers and changes their value to zero in memory
void zeroBoth(int &firstInt, int &secondInt){//integers are pass by reference, so no copies are made and the same memory locations are used as those passed into the function
  firstInt = 0;//sets the variables the user's input went into to 0.
  secondInt = 0;
}
