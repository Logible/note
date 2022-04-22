package com.gpnu.advanced.user;

import com.gpnu.advanced.parent.Fruit;
import com.gpnu.advanced.subclass.Apple;

public class Client {
    public void printf(Fruit fruit){
        System.out.println("ID: "+fruit.getId()+" 名称"+fruit.getName()+" 原价格:"+fruit.getPrice());
        System.out.println("促销价格："+ fruit.getPromotionPrice());
    }
}
