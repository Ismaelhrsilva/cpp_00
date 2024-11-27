#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat {

  private:
	static const unsigned int MAX = 1;
	static const unsigned int MIN = 150;
	const std::string _name;
	unsigned int  _grade;

  public:
	Bureaucrat(void);
	~Bureaucrat(void);
	Bureaucrat(const std::string name, unsigned int grade);
	Bureaucrat( const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);

	std::string	getName(void) const;
	unsigned int getGrade(void) const;

	void  incrementGrade(void);
	void  decrementGrade(void);

	class GradeTooHighException: public std::exception {
	  public:
		virtual const char *what() const throw();
	};
	
	class GradeTooLowException: public std::exception {
	  public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &Br) const;

#endif
