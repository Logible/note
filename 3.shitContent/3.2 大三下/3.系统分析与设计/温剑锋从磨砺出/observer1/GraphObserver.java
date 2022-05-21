/** 以简易长条图表示数值的类，即具体观察者类ConcreteObserver */
public class GraphObserver implements Observer {

	public void update(NumberGenerator generator) {
		System.out.print("GraphObserver:");
		int count = generator.getNumber();
		for (int i = 0; i < count; i++) {
			System.out.print("*"); // 打印星号
		}
		System.out.println();
		try {
			Thread.sleep(500);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
	}
}
