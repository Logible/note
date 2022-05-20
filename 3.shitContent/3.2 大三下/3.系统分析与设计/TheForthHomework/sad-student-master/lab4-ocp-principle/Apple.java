public class Apple extends Fruit {

    public Apple(Integer id, String name, Double price) {
        super(id, name, price);
    }

    public Double getApplePromotionPrice() {
        return getPrice() * 0.8;
    }

}
