package model;

import java.io.Serializable;
import java.util.LinkedList;
import java.util.List;

import serializacao.Serializacao;

public class Model implements Serializable {
	
	private static final long serialVersionUID = 1L;
	private int numA;
	private int numB;
	private int sum;
	private List<SumListener>listeners = new LinkedList<>();
	
	public Model() {
	}
	
	public int getNumA() {
		return this.numA;
		
	}
	public void setNumA(int numA) {
		this.numA = numA;
		try {
			Serializacao.serializar("./somador.obj", this);
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	public int getNumB() {
		return this.numB;
	}
	public void setNumB(int numB) {
		this.numB = numB;
		try {
			Serializacao.serializar("./somador.obj", this);
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	public void sum() {
		this.sum = this.numA + this.numB;
		notifyListeners(this.sum);
		try {
			Serializacao.serializar("./somador.obj", this);
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public int getSum() {
	    return this.sum;
	}

	// observer pattern
	
	public void addListener(SumListener listener) {
		if(!listeners.contains(listener)) {
			listeners.add(listener);
		}
	}
	
	public void notifyListeners(int sum) {
		for(SumListener listener: this.listeners) {
			listener.sum(new SumEvent(this, sum));
		}
	}
	
	public static Model start() {
		try {
        	return (Model) Serializacao.deserializar("./somador.obj");
        } catch (Exception e) {
        	return null;
        }
		
	}
}
