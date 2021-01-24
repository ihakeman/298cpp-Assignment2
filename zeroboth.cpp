#include <iostream>

using namespace std;

void zeroBoth(int &firstInt, int &secondInt);

int main(int argc, char **argv){
  int userInput1 = -1;//integers initialized to -1
  int userInput2 = -1;

  cout << "Enter two integers" << endl;
  cout << "First integer: ";
  cin >> userInput1;
  cout << "Second integer: ";
  cin >> userInput2;

  zeroBoth(userInput1, userInput2);

  cout << endl;
  cout << "After the zeroBoth function:" << endl;
  cout << "First integer: " << userInput1 << endl;//outputs the original variables
  cout << "Second integer: " << userInput2 << endl;

  return 0;
}

void zeroBoth(int &firstInt, int &secondInt){//integers are pass by reference
  firstInt = 0;//sets the variables the userInput went to to 0.
  secondInt = 0;
}
