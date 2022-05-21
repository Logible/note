public class Client {
	public static void main(String args[]) {
		TV tv;
		TVFactory factory;
		factory = new HaierTVFactory();
		tv = factory.produceTV();
		tv.play();
	}
}
