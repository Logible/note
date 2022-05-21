public class RegNotificationObserver implements RegObserver {

    private NotificationService notificationService = new NotificationService();

    @Override
    public void handleRegSuccess(long userId) {
        notificationService.sendInboxMessage(userId, "欢迎您");
    }

}
