#include "contact.h"
using std::string;

Contact::Contact(){
  //Default to empty entries
  setFirstName("");
  setLastName("");
  setPhoneNumber("");
  setAddress("");
}
Contact::Contact(string fName, string lName,
		 string pNumber, string add){
  //While probably safe to directly set these values, future changes
  //may call for a more complicated process

  setFirstName(fName);
  setLastName(lName);
  setPhoneNumber(pNumber);
  setAddress(add);
}

void Contact::setFirstName(string fName){
  firstName = fName;
}

void Contact::setLastName(string lName){
  lastName = lName;
}

void Contact::setPhoneNumber(string pNumber){
  phoneNumber = pNumber;
}

void Contact::setAddress(string add){
  address = add;
}

string Contact::getFirstName(){
  return firstName;
}

string Contact::getLastName(){
  return lastName;
}

string Contact::getPhoneNumber(){
  return phoneNumber;
}

string Contact::getAddress(){
  return address;
}
