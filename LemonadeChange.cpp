#include <iostream>
#include <map>
#include <vector>
using namespace std;
class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        map<int, int> m;
        m = {{5, 0}, {10, 0}};
        for (int bill : bills)
        {
            if (bill == 5)
            {
                m[5]++;
            }
            else if (bill == 10)
            {
                if (!m[5])
                {
                    return false;
                }
                else
                {
                    m[5]--;
                    m[10]++;
                }
            }
            else
            {
                if (m[10] && m[5])
                {
                    m[5]--;
                    m[10]--;
                }
                else if (m[5] > 2)
                {
                    m[5] -= 3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};
int main()
{
    Solution s;
    vector<int> v{5,5,5,10,5,5,10,20,20,20};
    cout << s.lemonadeChange(v);
    return 0;
}
