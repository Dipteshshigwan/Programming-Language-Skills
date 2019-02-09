
package Palindrome;
import java.util.*;
public class Palindrome 
{

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        
        String n = sc.nextLine();
        int len = n.length();
        
        char strarr[] = new char[len];
        char revstrarr[] = new char[len];
        
        strarr = n.toCharArray();
        for(int i=0;i<len;i++)
        {
            revstrarr[i] = strarr[len-i-1];
        }
        int count = 0;
        for(int i=0;i<len;i++)
        {
            if(strarr[i] == revstrarr[i])
                count++;
        }
            
            if(count == len)
            System.out.println("Palindrome");
        else
            System.out.println("Not Palindrome");
                
    }
    
}
