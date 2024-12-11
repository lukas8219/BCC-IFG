package animals;

public class Mammal extends LivingBeings {

	private boolean hotBlooded;
	private boolean producesMilk;
	private boolean hasHair;
	private boolean hasMammaryGlands;
	
	// CONSTRUCTOR
	public Mammal() {
		this.hasHair = true;
		this.producesMilk = true;
		this.hasMammaryGlands = true;
		this.hasHair = true;
	}
	
	// METHODS 
	public void moviment(int x, int y, int z) {
		System.out.println("Procurando comida...");
		System.out.println("Indo para x " + x + " y " + y + " z " + z);
	}
	public void reproduce() {
		System.out.println("Reproduzindo!");
	}
	
	// GET'S
	public boolean getHotBlooded() {
		return this.hotBlooded;
	}
	public boolean getProducesMilk() {
		return this.producesMilk;
	}
	public boolean getMammaryGlands() {
		return this.hasMammaryGlands;
	}
	public boolean getHair() {
		return this.hasHair;
	}
	
	// SET'S
	public void setHasHair(boolean hasHair) {
		this.hasHair = hasHair;
	}

	@Override
	public String toString() {
		return ("Mamiferos [hotBlooded=" + this.getHotBlooded() + ", producesMilk=" + this.getProducesMilk() 
		+ ", hasHair=" + getHair() + ", mammaryGlands=" + getMammaryGlands());
	}
}
