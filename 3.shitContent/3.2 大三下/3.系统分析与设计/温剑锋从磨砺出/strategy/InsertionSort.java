/**
 * 实现插入排序算法的类<br>
 * 相当于ConcreteStrategy类
 */
public class InsertionSort implements Sort {

	/** sort()的具体实现之一：插入排序 */
	public int[] sort(int arr[]) {
		int len = arr.length;
		for (int i = 1; i < len; i++) {
			int j;
			int temp = arr[i];
			for (j = i; j > 0; j--) {
				if (arr[j - 1] > temp) {
					arr[j] = arr[j - 1];

				} else
					break;
			}
			arr[j] = temp;
		}
		System.out.println("插入排序");
		return arr;
	}
}