import java.util.HashMap;
import java.util.Map;

public class SortAlgorithmFactory {
    private static final Map<String, Sort> algs = new HashMap<>();
    static {
        algs.put("BubbleSort", new BubbleSort());
        algs.put("InsertionSort", new InsertionSort());
        algs.put("SelectionSort", new SelectionSort());
        algs.put("QuickSort", new QuickSort());
    }

    public static Sort getSortAlgorithm(String type) {
        if (type == null || type.isEmpty()) {
            throw new IllegalArgumentException("type should not be empty.");
        }
        return algs.get(type);
    }
}