#include <bits/stdc++.h>

using namespace std;


class MonochromaticBoard {
public:

    bool check_black(vector<string>str)
    {
          for(int i=0;i<str.size();++i)
          {
		     for(int j=0;j<str[0].size();++j)
		     {
		         if(str[i][j]=='W')
		         {
		            return false;
		         }
		     }
		  }
		  return true;
    }

    bool check_White(vector<string>str)
    {
          for(int i=0;i<str.size();++i)
          {
		     for(int j=0;j<str[0].size();++j)
		     {
		         if(str[i][j]=='B')
		         {
		            return false;
		         }
		     }
		  }
		  return true;
    }

  
	int theMin(vector <string> board) 
	{		  
	      int Min=1e6;
		  if(check_black(board))
		  {
		      Min = min(board.size(),board[0].size());
		  }
		  else
		  {
		      if(check_White(board))
		      {
		          Min=0;
		      }
		      else
		      {
		             Min=0;
		             bool Black_row =true;
		             bool Black_col =true;
		             for(int i=0;i<board.size();++i)
              		{
		   			 	 for(int j=0;j<board[0].size();++j)
		     		  	{
		         			if(board[i][j]=='W')
		         			{
		           				 Black_row=false;
		         			}
		     	 	    }
		     	 	    if(Black_row)
		     	 	    {
		     	 	        ++Min;
		     	 	    }
		     	 	    Black_row = true;
		  		     }
		  		     
		  		     for(int i=0;i<board[0].size();++i)
              		{
		   			 	 for(int j=0;j<board.size() ;++j)
		     		  	{
		         			if(board[j][i]=='W')
		         			{
		           				 Black_col=false;
		         			}
		     	 	    }
		     	 	    if(Black_col)
		     	 	    {
		     	 	        ++Min;
		     	 	    }
		     	 	    Black_col = true;
		  		     }		   		   
		      }
		  }
		  
		  
		  return Min;
	}
	
};


<%:testing-code%>
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
