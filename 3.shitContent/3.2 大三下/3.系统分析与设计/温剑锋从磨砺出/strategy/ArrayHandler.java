/**
 * 环境（上下文）类<br>
 * 相当于Context类
 */
public class ArrayHandler {

	private Sort sortObj; // 排序算法对象

	/** 使用所设置的排序算法进行排序 */
	public int[] sort(int arr[]) {
		sortObj.sort(arr);
		return arr;
	}

	/** 设置具体使用的排序算法 */
	public void setSortObj(Sort sortObj) {
		this.sortObj = sortObj;
	}
}