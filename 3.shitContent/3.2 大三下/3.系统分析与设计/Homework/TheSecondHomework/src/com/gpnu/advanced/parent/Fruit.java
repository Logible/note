package com.gpnu.advanced.parent;

public abstract class Fruit {
    private int id;
    private String name;
    private double price;
    private double promotionRate;

    public Fruit(int id, String name, double price, double promotionRate) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.promotionRate = promotionRate;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public double getPromotionRate() {
        return promotionRate;
    }

    public void setPromotionRate(double promotionRate) {
        this.promotionRate = promotionRate;
    }

    public abstract double getPromotionPrice();
}
