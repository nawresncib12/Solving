#include <iostream>
#include <vector>
#include <string> 
using std::string;
using std::vector;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> v;
        for (int i = 1; i < n+1; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                v.push_back("FizzBuzz");
            }
            else if (i % 3 == 0)
            {
                v.push_back("Fizz");
            }
            else if (i % 5 == 0)
            {
                v.push_back("Buzz");
            }
            else
            {
                v.push_back(std::to_string(i));
            }
        }
        return v;
    }
};

int main()
{
    Solution s;
     for (int i = 0; i < 3; i++) {
        std::cout << s.fizzBuzz(3).at(i) << ' ';
    }
    return 0;
}
