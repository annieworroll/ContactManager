#include "contactservice.h"

void ContactService::add_entry(string ID, string f_name, string l_name,
				 string phone_number, string address)
{
  Contact new_contact(ID, f_name, l_name, phone_number, address);
  contact_list[ID] = new_contact;
}

Contact ContactService::get_entry(string ID)
{
  return contact_list[ID];
}

/* Takes an iterator to an entry and deletes it */
void ContactService::remove_entry(string ID){
  contact_list.erase(ID);
}

void ContactService::update_last_name(string ID, string new_last_name){
  contact_list[ID].setContactID(new_last_name);
}

void ContactService::update_first_name(string ID, string new_first_name){
  contact_list[ID].setFirstName(new_first_name);
}

void ContactService::update_phone_number(string ID, string new_phone_number){
  contact_list[ID].setPhoneNumber(new_phone_number);
}

void ContactService::update_address(string ID, string new_address){
  contact_list[ID].setAddress(new_address);
}

