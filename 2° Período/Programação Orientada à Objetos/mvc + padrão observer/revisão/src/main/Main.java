package main;

import javax.swing.SwingUtilities;

import controller.Controller;
import model.Model;
import serializacao.Serializacao;
import view.View;

public class Main {
	public static void main(String[] str) {
            // Criar a View
            View view = new View();

            // Criar o Modelo (com valores iniciais)
            Model model = Model.start();
            if (model == null) {
            	model = new Model();
            }
            // Criar o Controlador
            Controller controller = new Controller(model, view);

            view.setController(controller);

            // Tornar a View visível
            view.setVisible(true);

	}
}
