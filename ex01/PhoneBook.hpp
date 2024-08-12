#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook {

  public:
    PhoneBook(void);
    ~PhoneBook(void);

    void  add_contact(void);

  private:
    void  _prompt(void);
    std::string _selectPhrase(data_type type);

    int _size;
    int _pos;
    Contact _Contact[8];
};

#endif
