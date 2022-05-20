/**
 * 实现选择排序算法的类<br>
 * 相当于ConcreteStrategy类
 */
public class SelectionSort implements Sort {

	/** sort()的具体实现之一：选择排序 */
	public int[] sort(int arr[]) {
		int len = arr.length;
		int temp;
		for (int i = 0; i < len; i++) {
			temp = arr[i];
			int j;
			int samllestLocation = i;
			for (j = i + 1; j < len; j++) {
				if (arr[j] < temp) {
					temp = arr[j];
					samllestLocation = j;
				}
			}
			arr[samllestLocation] = arr[i];
			arr[i] = temp;
		}
		System.out.println("选择排序");
		return arr;
	}
}