#include <bits/stdc++.h>
using namespace std;

/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El_DEEN OSAMA .
/// Date                  : 5/9/2020
///****************************************************************************************************************************************///


class SRMCards
{
    public:
       int maxTurns(vector <int> cards)
        {
            sort(cards.begin(),cards.end());
            int sz = cards.size(), i=0, res=0;
            while(true)
            {
                if(sz==i+1)
                {
                    break;
                }

                if(cards[i]++ == cards[i+1])
                {
                    ++i;
                }

                ++i;
                ++res;
            }


            return res;
        }
};

