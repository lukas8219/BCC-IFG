package view;

import java.awt.GridLayout;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.SwingConstants;

import model.SumEvent;
import model.SumListener;

public class View extends JFrame implements SumListener {
	
	private ActionListener controller;
	
	private JTextField numA;
	private JTextField numB;
	private JButton sumButton;
	private JLabel result;
	

	public View() {
		
		setTitle("Somador de numeros");
		setSize(300, 200);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setLayout(new GridLayout(4, 1));
		
		numA = new JTextField();
		numB = new JTextField();
		sumButton = new JButton("somar");
		result = new JLabel("Resultado: ", SwingConstants.CENTER);
		
		add(numA);
		add(numB);
		add(sumButton);
		add(result);
		
		sumButton.addActionListener(controller);
	}

	public String getNumA() {
		return this.numA.getText();
	}
	public String getNumB() {
		return this.numB.getText();
	}
	public void setResult(String result) {
		this.result.setText(result);
	}
	
	@Override
	public void sum(SumEvent event) {
		this.setResult("Resultado: " + event.getSum());
	}
	
	public void setController(ActionListener controller) {
	    sumButton.addActionListener(controller);
	}

}
