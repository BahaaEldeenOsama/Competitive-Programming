import java.util.Scanner;
import java.util.*;
 
 
/// Info.
///****************************************************************************************************************************************///
/// My name               : BAHAA El_DEEN OSAMA .
/// Problem name          : A. Cupboards
/// Method                : IM
/// Date                  : 25/3/2020
///****************************************************************************************************************************************///
 
 
 
 
public class main {
 
	public main() {
		// TODO Auto-generated constructor stub
	}
 
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int n  = in.nextInt();
		int left=0,right=0 ,l=0,r=0;
		for(int i=0 ; i<n;++i)
		{
			 l = in.nextInt();
			 r = in.nextInt();
			left+=l;
			right+=r;
		}	
	     
		    System.out.print( Math.min(right ,n-right ) + Math.min(left ,n-left )  );
		 
 
	}
 
}
