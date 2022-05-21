import java.util.ArrayList;
import java.util.List;
// import java.util.concurrent.Executor;

public class UserController1 {
    private UserService userService = new UserService();
    private List<RegObserver> regObservers = new ArrayList<>();
    // private Executor executor;

    // public UserController(Executor executor) {
    //     this.executor = executor;
    // }

    public void setRegObservers(RegObserver observers) {
        regObservers.add(observers);
    }

    public Long register(String telephone, String password) {
        long userId = userService.register(telephone, password);
        for (RegObserver observer : regObservers) {
            observer.handleRegSuccess(userId);
        }
        return userId;
    }

    // 使用线程池的方式
    // public Long register(String telephone, String password) {
    //     long userId = userService.register(telephone, password);
    //     for (RegObserver observer : regObservers) {
    //         executor.execute(new Runnable() {
    //             @Override
    //             public void run() {
    //                 observer.handleRegSuccess(userId);
    //             }
    //         });
    //     }
    //     return userId;
    // }
}
