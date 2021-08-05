import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
         
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();
        
         
        String str = "";
        if (n % 2 == 1) {
            str = "Weird";
        } else {
            if (n >= 6 && n <= 20) {
                str = "Weird";
            } else {
                str = "Not Weird";
            }
        }
        
         
        System.out.println(str);
    }
}
