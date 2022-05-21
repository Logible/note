/**
 * 客户程序<br>
 * 由客户决定使用什么排序算法
 */
public class Client {
	public static void main(String args[]) {
		int arr[] = { 1, 4, 6, 2, 5, 3, 7, 10, 9 };
		int result[];

		ArrayHandler ah = new ArrayHandler(); // 环境（上下文）对象
		Sort sort; // 排序算法对象

		sort = new SelectionSort(); // 客户决定使用选择排序算法
		// sort = SortAlgorithmFactory.getSortAlgorithm("InsertionSort");
		ah.setSortObj(sort); // 在ArrayHandler类中设置具体排序算法

		result = ah.sort(arr); // 执行排序

		for (int i = 0; i < result.length; i++) {
			System.out.print(result[i]);
			if (i == result.length - 1) {
				System.out.println();
			} else {
				System.out.print(",");
			}
		}
	}
}