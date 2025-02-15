/* class to hold a contact record */
#include <string>
using std::string;
class Contact{

 private:
  string firstName;
  string lastName;
  string phoneNumber;
  string address;

 public:
  Contact();
  Contact(string fName, string lName, string pNumber, string add);
  void setFirstName(string);
  void setLastName(string);
  void setPhoneNumber(string);
  void setAddress(string);

  string getFirstName();
  string getLastName();
  string getPhoneNumber();
  string getAddress();
};
