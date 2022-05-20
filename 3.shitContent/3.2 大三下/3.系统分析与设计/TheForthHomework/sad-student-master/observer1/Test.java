// 测试用的类
public class Test {

	public static void main(String[] args) {
		// 创建具体主题对象
		NumberGenerator generator = new RandomNumberGenerator();
		// 创建观察者对象
		Observer observerl = new DigitObserver();
		Observer observer2 = new GraphObserver();
		// 注册观察者
		generator.addObserver(observerl);
		generator.addObserver(observer2);
		// 产生数据，并通知观察者
		generator.execute();
	}

}
