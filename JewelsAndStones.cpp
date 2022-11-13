#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int res = 0;
        for (int i = 0; i < stones.length(); i++)
        {
            for (int j = 0; j < jewels.length(); j++)
            {
                if (stones[i] == jewels[j])
                {
                    res++;
                }
            }
        }
        return res;
    }
};

int main()
{
    Solution s;
    cout << s.numJewelsInStones("aA", "aAAbbbb")<<endl;
    cout << s.numJewelsInStones("z", "ZZ");
    return 0;
}
