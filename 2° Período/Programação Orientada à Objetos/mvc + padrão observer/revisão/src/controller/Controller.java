package controller;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import model.Model;
import view.View;

public class Controller implements ActionListener {
	private Model model;
	private View view;
	
	public Controller(Model model, View view) {
		this.model = model;
		this.view = view;

		this.model.addListener(view);
	}

	public void actionPerformed(ActionEvent e) {
		try {
			model.setNumA(Integer.parseInt(view.getNumA()));
			model.setNumB(Integer.parseInt(view.getNumB()));
			model.sum();
		} catch (NumberFormatException ex) {
			view.setResult("Por favor, insira numeros validos!");
		}
	}
}
