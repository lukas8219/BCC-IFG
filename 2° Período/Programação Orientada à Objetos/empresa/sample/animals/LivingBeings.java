package animals;

public class LivingBeings {

	private boolean isAlive;
	
	LivingBeings() {
		this.setAlive(true);
	}
	
	public boolean isAlive() {
		return isAlive;
	}
	
	public void setAlive(boolean isAlive) {
		this.isAlive = isAlive;
	}
}
