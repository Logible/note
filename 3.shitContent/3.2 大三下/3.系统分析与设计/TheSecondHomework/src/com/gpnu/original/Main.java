package com.gpnu.original;

import com.gpnu.original.subclass.Apple;
import com.gpnu.original.user.Client;
import com.gpnu.original.parent.Fruit;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Client client = new Client();
        Fruit apple = new Apple(1,"Apple1",20);
        client.printf(apple);
    }
}
