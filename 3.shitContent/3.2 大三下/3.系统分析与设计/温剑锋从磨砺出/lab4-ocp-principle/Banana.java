public class Banana extends Fruit {

    public Banana(Integer id, String name, Double price) {
        super(id, name, price);
    }

    public Double getBananaPromotionPrice() {
        return getPrice() * 0.9;
    }

}
