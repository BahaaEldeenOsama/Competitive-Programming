import java.util.Scanner;
import java.util.*;
 
 
/// Info.
///****************************************************************************************************************************************///
/// My name               : BAHAA El_DEEN OSAMA .
/// Problem name          : A. Left-handers, Right-handers and Ambidexters
/// Method                : IM
/// Date                  : 27/3/2020
///****************************************************************************************************************************************///
 
 
 
 
public class main {
 
	public main() 
	{
		
 
	}
 
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
 
        Scanner myObj = new Scanner(System.in);  // Create a Scanner object
    	int l  =myObj.nextInt();
    	int r  =myObj.nextInt();
    	int both  =myObj.nextInt();
    	
    	System.out.println( Math.min( (l+both) , Math.min( (r+both) , (l+r+both)/2   )) *2  );
		
		
		
		
	}
 
}
