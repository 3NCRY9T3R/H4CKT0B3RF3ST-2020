package HiloThread;

public class HiloThread extends Thread {

	public HiloThread(String name) {
		super(name);
	}
	
	public void run() {
		
		for(int i=0;i<=10;i++) {
			System.out.println(i + " " + getName());
			
			try {
				Thread.sleep(1000);
			}
			catch(InterruptedException e) {
				e.printStackTrace();
			}
		}
		
		System.out.println("FIN DEL HILO" + " " + getName());
		
	}
	
}
