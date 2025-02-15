#include "contact.h"
using std::string;

Contact::Contact(string ID, string fName, string lName,
		 string pNumber, string add){
  //While probably safe to directly set these values, future changes
  //may call for a more complicated process
  setContactID(ID);
  setFirstName(fName);
  setLastName(lName);
  setPhoneNumber(pNumber);
  setAddress(add);
}

void Contact::setContactID(string ID){
  contactID = ID;
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

string Contact::getContactID(){
  return contactID;
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
