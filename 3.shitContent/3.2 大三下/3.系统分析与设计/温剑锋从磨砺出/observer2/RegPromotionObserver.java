
public class RegPromotionObserver implements RegObserver {

	private PromotionService promotionService = new PromotionService();

	@Override
	public void handleRegSuccess(long userId) {
	promotionService.issueNewUserExperienceCash(userId);
	}

	// 在新线程中执行
	// @Override
	// public void handleRegSuccess(long userId) {
	// 	Thread thread = new Thread(new Runnable() {
	// 		@Override
	// 		public void run() {
	// 			promotionService.issueNewUserExperienceCash(userId);
	// 		}
	// 	});
	// 	thread.start();
	// }

}
