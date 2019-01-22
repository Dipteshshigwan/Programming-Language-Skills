package Armstrong;
import java.util.*;
public class Armstrong 
{

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = n;
        int temp = n;
        int unit;
        double sum = 0,count = 0,unitp;
        
        while(n>0)
        {
            unit = n%10;
            count++;		//digit counts
            n = n/10;       //Eliminating unit place digit
        }
        while(m>0)
        {
            unitp = m%10;
            sum = sum + Math.pow(unitp,count);	//summing all digits by raising to power of counts of digits
            m = m/10;
        }
        if(sum == temp)
            System.out.println("Armstrong");
        else
            System.out.println("Not Armstrong");
    }
    
}
