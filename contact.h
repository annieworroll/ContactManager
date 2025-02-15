/* class to hold a contact record */
#include <string>
using std::string;
class Contact{

 private:
  string firstName;
  string lastName;
  string phoneNumber;
  string address;

  //This is unlikely to survive in the final version, it is not
  //inherently connected to the rest of the data, and just exists
  //to interact with other data structures
  string contactID;
 public:
  Contact(string ID, string fName, string lName, string pNumber, string add);
  void setContactID(string);
  void setFirstName(string);
  void setLastName(string);
  void setPhoneNumber(string);
  void setAddress(string);

  string getContactID();
  string getFirstName();
  string getLastName();
  string getPhoneNumber();
  string getAddress();
};
