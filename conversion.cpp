#include <iostream>
#include <string> //used for looping if input is not exit

using namespace std;

void getFeetAndInches();
float combineToFeet(float feet, float inches);
float convertFeetToMeters(float feet);
void seperateOutCentimeters();
void outputMetersAndCentimeters();
float feet;     //the measurements are in floats in case the user enters decimal values
float inches;
float meters; //float needed for calculation but output is an int regardless (accuracy goes to centimeters)
float centimeters;
string userInput;//for loop condition only

int main(int argc, char **argv){
  do {
    getFeetAndInches();

    feet = combineToFeet(feet, inches);
    meters = convertFeetToMeters(feet);
    seperateOutCentimeters();
    
    outputMetersAndCentimeters();

    cout << "Type 'exit' to quit, or type anything else to convert another length." << endl;
    cin >> userInput;
  } while(userInput != "exit");
}

void getFeetAndInches(){
  cout << "Enter a length in feet and inches to get the equivalent in meters and centimeters:" << endl;
  cout << "Feet: ";
  cin >> feet;
  cout << "Inches: ";
  cin >> inches;
}

float combineToFeet(float feet, float inches){//make inches and feet one value in feet
  return feet + inches / 12.0; //conversion is 12 inches to 1 foot
}

float convertFeetToMeters(float feet){
  return feet * 0.3048;//conversion is 0.3048 meters to 1 foot
}

void seperateOutCentimeters(){
  centimeters = (meters - static_cast<int>(meters)) * 100;//since meters is a float, we get the difference between that and its integer value (removing all full meters) to convert to centimeters by mutliplying by 100
  meters = static_cast<int>(meters);//the conversion to int gets all the full meters
}

void outputMetersAndCentimeters(){
  cout << "Converted to meters and centimeters:" << endl;
  cout << "Meters: " << meters << endl;
  cout << "Centimeters: " << centimeters << endl;
}
