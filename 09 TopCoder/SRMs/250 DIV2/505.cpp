#include<bits/stdc++.h>
using namespace std;

/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El_DEEN OSAMA
/// Date                  : 6/9/2020
///****************************************************************************************************************************************///


class SentenceCapitalizerInator {
public:
	string fixCaps(string paragraph) {
	for(int i=0; i<paragraph.size(); ++i )
		{
		        paragraph[0] = toupper(paragraph[0]);
		        if(paragraph[i]=='.'  && paragraph[i+1]==' ')
		        {
		           paragraph[i+2] = toupper(paragraph[i+2]);
		        }
		}

		return paragraph;
	}


};
/*
int main()
{
    return 0;
}
*/
