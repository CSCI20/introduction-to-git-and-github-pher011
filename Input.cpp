//Created by: Pearl Her
//Date: 9/16/2024

//Description: A Mad Libs to fill in the blanks to fill in the story. Please use one word for each blank

#include <iostream>

using namespace std;

int main() {
  string greeting = "";
  string reason = "";
  string person = "";
  int seconds = 0;
  string defeated = "";
  
  cout<<"Enter what you would say when you first meet someone: ";
  cin>>greeting;
  
  cout<<"Enter what you need help with: ";
  cin>>reason;

  cout<<"Enter anyone in your life (i.e. friend, parent): ";
  cin>>person;

  cout<<"Enter how many seconds. Use numbers: ";
  cin>>seconds;

  cout<<"Enter a defeated quote (i.e. 'Whatever'): ";
  cin>>defeated;
  
  cout<<greeting<<"!"" I need help with "<<reason<<"."" My "<<person<<" won't help me for some reason."" It should only take "<<seconds<<" seconds. "<<defeated<<".";}
