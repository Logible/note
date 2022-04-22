package com.gpnu.original.user;

import com.gpnu.original.parent.Fruit;
import com.gpnu.original.subclass.Apple;

public class Client {
    public void printf(Fruit fruit){
        System.out.println("ID "+fruit.getId()+" 名称"+fruit.getName()+" 原价格:"+fruit.getPrice());
        System.out.println("促销价格："+ ((Apple) fruit).getApplePromotionPrice());
    }
}
