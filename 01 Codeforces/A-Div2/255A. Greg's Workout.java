import java.util.Scanner;
import java.util.*;
 
 
/// Info.
///****************************************************************************************************************************************///
/// My name               : BAHAA El_DEEN OSAMA .
/// Problem name          : A. Greg's Workout
/// Method                : IM
/// Date                  : 27/3/2020
///****************************************************************************************************************************************///
 
 
 
 
public class main {
 
 
 
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int []arr;
		arr=new int[30];
		int n=0,chest=0,biceps=0,Back=0;
 
        Scanner myObj = new Scanner(System.in);  // Create a Scanner object
    	
     	  n =myObj.nextInt();
    	  for(int i=0 ;i<n;++i)
    	  {
    		   arr[i]  =myObj.nextInt();
    	       if(i%3==0){chest+=arr[i];}
    	       if(i%3==1){biceps+=arr[i];}
    	       if(i%3==2){Back+=arr[i];}
    	  }
 
    	if(chest>biceps && chest>Back ){System.out.println("chest");}
    	else if((biceps>chest && biceps>Back)){System.out.println("biceps");}
    	else{{System.out.println("back");}
    	
		
		
	}
	}
 
    	
	}
	
