// import java.util.concurrent.Executor;
// import java.util.concurrent.ExecutorService;
// import java.util.concurrent.Executors;

public class DemoObserver {
    public static void main(String[] args) {

        // 创建线程池对象
        // ExecutorService executor = Executors.newFixedThreadPool(5);

        // 创建主题对象
        UserController1 userController = new UserController1();
        // UserController userController = new UserController(executor);

        // 创建观察者对象
        RegObserver observer1 = new RegPromotionObserver();
        RegObserver observer2 = new RegNotificationObserver();

        // 在主题对象中添加观察者对象
        userController.setRegObservers(observer1);
        userController.setRegObservers(observer2);

        // 用户注册
        userController.register("13512345678", "password");

        // 关闭线程池
        // executor.shutdown();
    }
}
