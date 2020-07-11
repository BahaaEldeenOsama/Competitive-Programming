import java.util.Scanner;
import java.util.*;
 
 
/// Info.
///****************************************************************************************************************************************///
/// My name               : BAHAA El_DEEN OSAMA .
/// Problem name          : A. The New Year: Meeting Friends
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
    	int p1  =myObj.nextInt();
    	int p2 =myObj.nextInt();
    	int p3 =myObj.nextInt();
    	
    	System.out.println(  Math.max(p1,Math.max(p2, p3)) -  Math.min(p1,Math.min(p2, p3)) );
		
		
		
		
	}
 
}
