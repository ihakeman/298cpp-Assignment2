#include <iostream>
#include <string> //used for looping if input is not exit

using namespace std;

void getFeetAndInches();
float combineToFeet(float feet, float inches);
float convertFeetToMeters(float feet);
void seperateOutCentimeters();
void outputMetersAndCentimeters();

float feet;     //the measurements are in floats in case the user enters decimal values. It is assumed if they were using massive input values they would start with different units
float inches;
float meters; //float needed for calculation but output appears as an int regardless (additional accuracy is displayed by the centimeters)
float centimeters;
string userInput;//for loop condition only to see if the program should continue or quit

int main(int argc, char **argv){
  do {//do while loop used so that it always executes at least once, and input isn't needed before the loop reducing redundant code
    //get user input for length to convert
    getFeetAndInches();

    //convert from feet and inches to meters and centimeters
    feet = combineToFeet(feet, inches);
    meters = convertFeetToMeters(feet);
    seperateOutCentimeters();

    //output the calculated values to the user
    outputMetersAndCentimeters();

    //check if the user wants to convert more lengths or quit
    cout << "Type 'exit' to quit the program, or type something else to continue converting lengths." << endl;
    cin >> userInput;
  } while(userInput != "exit");
}

//gets the number of feet and inches from the users input
void getFeetAndInches(){
  cout << "Enter a length in feet and inches to get the equivalent in meters and centimeters:" << endl;
  cout << "Feet: ";
  cin >> feet;
  cout << "Inches: ";
  cin >> inches;
}

//takes a value in feet and inches and converts the inches to feet, then adds that value to the number of feet given so that all of the measurement is in feet (perhaps with a decimal at the end)
float combineToFeet(float feet, float inches){
  return feet + inches / 12.0; //conversion is 12 inches to 1 foot
}

//takes the number of feet and converts it to just meters
float convertFeetToMeters(float feet){
  return feet * 0.3048;//conversion is 0.3048 meters to 1 foot
}

//seperates the number of complete meters, and then calculates anything leftover as centimeters
void seperateOutCentimeters(){
  centimeters = (meters - static_cast<int>(meters)) * 100;//casting meters to an int gets the number of full meters, so the difference is just the values after the decimal (if any). This decmical is multiplied by 100 to convert to centimeters
  meters = static_cast<int>(meters);//the conversion to int gets all the full meters
}

//provides output to the user's screen
void outputMetersAndCentimeters(){
  cout << "Converted to meters and centimeters:" << endl;
  cout << "Meters: " << meters << endl;
  cout << "Centimeters: " << centimeters << endl;
}
