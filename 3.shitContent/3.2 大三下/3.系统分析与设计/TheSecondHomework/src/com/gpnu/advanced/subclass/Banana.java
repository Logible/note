package com.gpnu.advanced.subclass;

import com.gpnu.advanced.parent.Fruit;

public class Banana extends Fruit {
    public Banana(int id, String name, double price, double promotionRate) {
        super(id, name, price, promotionRate);
    }

    @Override
    public double getPromotionPrice() {
        return this.getPrice() * this.getPromotionRate();
    }
}

