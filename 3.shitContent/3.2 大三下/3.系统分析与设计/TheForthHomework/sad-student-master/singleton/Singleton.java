public class Singleton {
    // 静态私有成员变量
    private static Singleton instance;

    // … … 其他成员变量

    private Singleton() { // 私有构造方法
    }

    // 静态公有工厂方法，返回唯一实例
    public static Singleton getInstance() {
        if (instance == null)
            instance = new Singleton();
        return instance;
    }

    // … … 其他方法
}
