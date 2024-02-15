#include <iostream>
#include <string>
using namespace std;


int updatecheck (bool uptodate){
  //if the system is up to date print "Your system is up to date""
  if (uptodate == true)
    cout<< "Your system is up to date";
// if tthe system is not up to date print "Your system is needs an update"
  else if (uptodate== false)
    cout<< "Your system needs an update";
 // i do not know how one would trigger this just put it in for safety
  else
    cout<< "Error";
  //i have to return something so i put nothing
  return 0;
}

int main() {
  //telling the computer whether the "system" is up to date or not
  bool uptodate=true;
 // it tells the compuper that the password is "Super Secret"
  string password = "Super Secret";
// the "user"(i don not know how to interface wtih the user) enters "Password")
  string PasswordInput = "Password";
// if the "user" enters the correct password then it will print "Correct"
  if (password == PasswordInput) {
    cout << "Correct" << endl;
    updatecheck(uptodate);
  }
  
//if the "user" enters something other than the correct password then it will print "Incorrect"
    else {
    cout << "Incorrect" << endl;
       updatecheck(uptodate); 
    }
}