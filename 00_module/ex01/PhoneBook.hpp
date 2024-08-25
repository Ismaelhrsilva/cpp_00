#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class PhoneBook {

  public:
    PhoneBook(void);
    ~PhoneBook(void);


  private:
    void  _prompt(void);
    std::string _selectPhrase(data_type type);
    void  _add_contact(void);
    void  _add_info(int n_contact, data_type type);
    void _search(void) const;
    void _formatSearch(std::string data) const;
	void _displayPhoneBook(void) const;

    int _n_contact;
    Contact _Contact[8];
};

#endif
