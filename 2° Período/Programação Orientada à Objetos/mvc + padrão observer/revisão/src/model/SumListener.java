package model;

import java.util.EventListener;

public interface SumListener extends EventListener {
	public void sum(SumEvent event);
}
