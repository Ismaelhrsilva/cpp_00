#ifndef RPN_HPP
# define RPN_HPP


# include <string>
# include <iostream>
# include <deque>



class Polish{
  private:
    deque _args;

  public:
    Polish(void);
    ~Polish(void);
    Polish(const Polish &other);
    Polish &operator=(const Polish &other);

    int evaluate(const std::string &expression);

};


#endif // !DEBUG
