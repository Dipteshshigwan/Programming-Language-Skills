import java.util.*;

public class queue_FIFO
{
	public static void main(String[] args) 
	{
	    Scanner sc = new Scanner(System.in);
	    arrayQueue que = new arrayQueue(5);
	    
	    while(true)
	    {
	        System.out.println("\n*** Queue Menu ***");
	        System.out.println("\n\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
		    System.out.println("\n\nEnter your choice(1-4):");
		    int ch = sc.nextInt();
		    
		    switch(ch)
		    {
		        case 1: que.enQueue();
					    break;
			    case 2: que.deQueue();
					    break;
			    case 3: que.display();
					    break;
			    case 4: System.exit(0);
			
			    default: System.out.println("\nWrong Choice!!"); 
		    }
	    }
	}
}

class arrayQueue 
{
    protected int queue[];
    protected int front, rear, SIZE;
    
    Scanner sc = new Scanner(System.in);
    
    public arrayQueue(int n)
    {
        SIZE = n;
	    front = -1; rear = -1;
        queue = new int[SIZE];
    }
    
	public void enQueue()
    {
	    int val;
		
    	if(rear==SIZE-1)
	    {
		    System.out.println("\nQueue is full!!");
	    }
	    else
	    {
		    System.out.println("\nEnter element to enqueue:");
		    val=sc.nextInt();
		    if(front == -1)
		        front = 0;
		    rear++;
		    queue[rear] = val;
	    }
    }
 
    public void deQueue()
    {
	    if(front == -1)
	    {
		    System.out.println("\nQueue is empty!!");
	    }
	    else
	    {
		    System.out.println("\nDeleted element is " +queue[front]);
		    front++;
		    if(front > rear)
		        front = rear = -1;
	    }
    }
 
    public void display()
    {
	    int i;
	
	    if(rear== -1)
	    {
		    System.out.println("\nQueue is empty!!");
	    }
	    else
	    {
		    System.out.println("\nQueue is...\n");
		    for(i=front;i<=rear;i++)
			    System.out.print(queue[i]+ "\t");
	    }
    }
	
}
