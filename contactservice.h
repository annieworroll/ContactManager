#include <string>
using std::string;
#include <map>
#include <utility>

#include "contact.h"

class ContactService{
  std::map<string, Contact> contact_list;
 public:
  ContactService();
  void add_entry(string ID, string f_name, string l_name,
		 string phone_number, string address);

  Contact get_entry(string ID);

  void remove_entry(string ID);
  
  void update_last_name(string ID, string new_last_name);
  void update_first_name(string ID, string new_first_name);
  void update_phone_number(string ID, string new_phone_number);
  void update_address(string ID, string new_address);

};
