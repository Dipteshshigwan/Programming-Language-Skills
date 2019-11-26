import java.util.*;

public class stack_LIFO
{
	public static void main(String[] args) 
	{
	    Scanner sc = new Scanner(System.in);
	    arrayStack stk = new arrayStack(5);
	    
	    while(true)
	    {
	        System.out.println("\n*** Stack Menu ***");
	        System.out.println("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
		    System.out.println("\n\nEnter your choice(1-4):");
		    int ch = sc.nextInt();
		    
		    switch(ch)
		    {
		        case 1: stk.push();
					    break;
			    case 2: stk.pop();
					    break;
			    case 3: stk.display();
					    break;
			    case 4: System.exit(0);
			
			    default: System.out.println("\nWrong Choice!!"); 
		    }
	    }
	}
}

class arrayStack 
{
    protected int stack[];
    protected int top, MAX;
    
    Scanner sc = new Scanner(System.in);
    
    public arrayStack(int n)
    {
        MAX = n;
	    top = -1;
        stack = new int[MAX];
    }
    
	public void push()
    {
	    int val;
		//System.out.println("\nStack is fukat!!" + top + "\n" + MAX);

    	if(top==MAX-1)
	    {
		    System.out.println("\nStack is full!!");
	    }
	    else
	    {
		    System.out.println("\nEnter element to push:");
		    val=sc.nextInt();
		    top=top + 1;
		    stack[top]=val;
	    }
    }
 
    public void pop()
    {
	    if(top== -1)
	    {
		    System.out.println("\nStack is empty!!");
	    }
	    else
	    {
		    System.out.println("\nDeleted element is " +stack[top]);
		    top=top - 1;
	    }
    }
 
    public void display()
    {
	    int i;
	
	    if(top== -1)
	    {
		    System.out.println("\nStack is empty!!");
	    }
	    else
	    {
		    System.out.println("\nStack is...\n");
		    for(i=top;i>=0;--i)
			    System.out.println("\n" +stack[i]);
	    }
    }
	
}
