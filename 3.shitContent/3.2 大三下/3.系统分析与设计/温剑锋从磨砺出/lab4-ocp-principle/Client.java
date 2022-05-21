public class Client {
    public static void main(String[] args) {
        Fruit fruit = new Apple(1, "苹果", 20.0);
        printInfo(fruit);
    }

    public static void printInfo(Fruit fruit) {
        System.out.println("Id: " + fruit.getId() + "; 名称: " + fruit.getName() + "; 原价格: " + fruit.getPrice());
        if (fruit instanceof Apple)
            System.out.println("促销价格: " + ((Apple) fruit).getApplePromotionPrice());
        else if (fruit instanceof Banana) {
            System.out.println("促销价格: " + ((Banana) fruit).getBananaPromotionPrice());
        }
    }
}
