package com.gpnu.original.subclass;

import com.gpnu.original.parent.Fruit;

public class Banana extends Fruit {

    public Banana(int id, String name, double price) {
        super(id, name, price);
    }

    public double getApplePromotionPrice(){
        return 16;
    }

}
