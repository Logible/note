import java.util.Random;

/** 产生随机数的类，即具体主题类ConcreteSubject */
public class RandomNumberGenerator extends NumberGenerator {

	/** 随机数产生器 */
	private Random random = new Random();

	/** 当前数值 */
	private int number;

	/** 取得数值 */
	public int getNumber() {
		return number;
	}

	/** 产生随机数，并通知观察者数据发生了变化 */
	public void execute() {
		for (int i = 0; i < 5; i++) {
			number = random.nextInt(20);
			notifyObservers(); // 该方法在父类中已实现
		}
	}
}
