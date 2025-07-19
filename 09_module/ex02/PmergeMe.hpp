#ifndef PMERGEME_HPP
# define PMERGEME_HPP 

# include <iostream>
# include <vector>
# include <deque>
# include <string>
# include <cstdlib>
# include <set>
# include <stdexcept>
# include <algorithm>
# include <ctime>
# include <climits>

class PmergeMe {
  private:
    std::vector<int> _vector;
    std::deque<int> _deque;

    void parseInput(int argc, char **argv);
    void print(std::string str) const;
    //void sortAndMeasure(void);

  public:
    PmergeMe(void);
    ~PmergeMe(void);
    PmergeMe(const PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);
    void process(int argc, char **argv);

};



#endif // !DEBUG
