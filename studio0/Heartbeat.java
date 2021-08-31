
public class Heartbeat 
{
	public static void main(String[] args) 
	{
		int time = 0;
		while(true)
		{
			try
			{
			Thread.sleep(1000);
			//causes an exception since the computer takes over while thread is asleep
			//ruining the accuracy of the duration
			time += 1;
			System.out.println(time + " second(s) have elapsed");
			}catch(InterruptedException e) //exception passed as argument (e)
			{
				e.printStackTrace(); //pinpoints location of exception 
			}
			
		}
	}
}
