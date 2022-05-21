import java.util.ArrayList;

/** 表示产生数值对象的抽象类，即抽象主题类Subject */
public abstract class NumberGenerator {

	/** 在数组中存储Observers对象 */
	private ArrayList<Observer> observers = new ArrayList<Observer>();

	/** 新增Observer */
	public void addObserver(Observer observer) {
		observers.add(observer);
	}

	/** 通知所有Observers更新数据 */
	public void notifyObservers() {
		for (Observer obs : observers)
			obs.update(this);
	}

	/** 取得数值 */
	public abstract int getNumber();

	/** 产生数值 */
	public abstract void execute();
}
