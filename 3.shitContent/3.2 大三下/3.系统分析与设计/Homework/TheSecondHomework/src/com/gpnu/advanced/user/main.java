package com.gpnu.advanced.user;

import com.gpnu.advanced.subclass.Apple;
import com.gpnu.advanced.parent.Fruit;

public class main {

    public static void main(String[] args) {
        // write your code here
        Client client = new Client();
        Fruit apple = new Apple(2,"Apple2",20,0.6);
        client.printf(apple);
    }
}
