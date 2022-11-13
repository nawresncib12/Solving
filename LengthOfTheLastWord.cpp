#include <iostream>
#include <string>
using std::string;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int res = 0;
        if (s.length())
        {
            int i = s.length() - 1;
            while ((s.at(i) == ' ') && (i >= 0))
            {
                i--;
                if (i == -1)
                    break;
            }
            while ((s.at(i) != ' ') && (i >= 0))
            {
                res++;
                i--;
                if (i == -1)
                    break;
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    std::cout << s.lengthOfLastWord("a");
    return 0;
}
