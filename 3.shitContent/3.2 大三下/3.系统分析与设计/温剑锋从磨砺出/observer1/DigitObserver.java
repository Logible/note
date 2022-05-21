/** 以数字表示数值的类，即具体观察者类ConcreteObserver */
public class DigitObserver implements Observer {

	public void update(NumberGenerator generator) {
		System.out.println("DigitObserver:" + generator.getNumber());
		try {
			Thread.sleep(100);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
	}
}
