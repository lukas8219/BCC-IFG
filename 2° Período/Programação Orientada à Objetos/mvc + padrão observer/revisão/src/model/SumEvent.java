package model;

import java.util.EventObject;

public class SumEvent extends EventObject{
	private int sum;
	
	public SumEvent(Model source) {
		super(source);
	}
	public SumEvent(Model source, int sum) {
		super(source);
		this.sum  = sum;
	}
	
	public int getSum( ) {
		return this.sum;
	}
}
