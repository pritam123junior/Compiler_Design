#include <iostream>   
#include <string.h>   
using namespace std; 
 
int main() { 
 
  int i;  // Declare an integer variable i 
  int id = 1;  // Initialize an identifier counter to 1 
  int x = 0;  // Initialize an integer variable x to 0 
  string statement;  // Declare a string variable named statement 
 
  cout << "Enter the statement:";  // Prompt the user the enter a statement 
  getline(cin, statement);  // Read the entire line of input 
 
  cout << "The entered string is : " << statement << endl;  // Display the entered string 
//process for reads the stream of characters and making up in to lexeme then print as token 
  for (int i = 0; i < 15; i++) {  // Loop through the first 15 characters of the statement 
 
    if (isalpha(statement[i])) {  // Check if the lexeme is an alphabet 
// lexeme that is mapped into the token and print as token 
      cout << "<id," << id << ">";  // Display an identifier with its corresponding id 
      ++id;  // Increment the identifier counter 
    } else if (isdigit(statement[i])) {  // Check if the lexeme is a digit 
      if (isdigit(statement[i + 1])) {}  // If the next lexeme is also a digit 
      else { 
         
 
// lexeme that is mapped into the token and print as token 
cout << "<" << statement[i - 1] << statement[i] << ">";  // Display a token form of the current and 
previous digits 
      } 
    } else {  // If the lexeme is neither an alphabet nor a digit 
// all operator lexeme that is mapped into the token and print as token 
      if (statement[i] == '=') 
        cout << "<=>";  // print the equality operator 
      if (statement[i] == '+') 
        cout << "<+>";  // print the addition operator 
      if (statement[i] == '-') 
        cout << "<->";  // print  the subtraction operator 
      if (statement[i] == '*') 
        cout << "<*>";  // print the multiplication operator 
      if (statement[i] == '/') 
        cout << "</>";  // print the division operator 
    } 
  } 
 
  return 0;  // Return 0 to indicate successful execution 
}
