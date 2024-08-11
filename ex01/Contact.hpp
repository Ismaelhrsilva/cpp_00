#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

typedef enum	e_data
{
	FIRST_NAME,
	LAST_NAME,
	NICKNAME,
	PHONE_NUMBER,
	DARKEST_SECRET
}	data_type;

class Contact {

  public:
    Contact(void);
    ~Contact(void);

    bool  setData(std::string data, data_type type);
    void	printContactInfo( void ) const;

  private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
};

#endif
