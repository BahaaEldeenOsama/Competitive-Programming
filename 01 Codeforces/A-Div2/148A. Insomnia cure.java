import java.util.Scanner;
import java.util.*;
public class main {
 
	public main() {
		// TODO Auto-generated constructor stub
	}
 
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int k=0,l=0,m=0,n=0,d=0,cnt=0;
	     	
		    k=in.nextInt();
		    l=in.nextInt();
		    m=in.nextInt();
		    n=in.nextInt();
		    d=in.nextInt();
		    
		    for(int i=1 ;i<=d;++i)
		    {
		    	if( i%l==0 ||i%m==0 ||i%n==0 ||i%k==0 )
		    	{
		    		++cnt;
		    	}
		    }
		    System.out.print(cnt);
		 
 
	}
 
}
