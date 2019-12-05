package client_sock;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.net.Socket;


public class Client_Sock {

   
    public static void main(String[] args) {
       
        try
        {
            Socket sock = new Socket("localhost",9999);
            
            PrintStream pr = new PrintStream(sock.getOutputStream());
            
            System.out.print("Enter Something : ");
          
            InputStreamReader rd = new InputStreamReader(System.in);
            BufferedReader ed = new BufferedReader(rd);
            
            String temp = ed.readLine();
            
            pr.println(temp);
        
            BufferedReader gt = new BufferedReader(new InputStreamReader(sock.getInputStream()));
            
            String tm = gt.readLine();
            System.out.print(tm);
            
        }
        catch(Exception ex)
        {
            
        }
    }
}
