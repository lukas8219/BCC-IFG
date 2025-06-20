package main;

import models.Livro;
import models.LivroBiblioteca;
import models.LivroLivraria;
import relatorio.Relatorio;

public class Main {
	public static void main(String[] str) {
		Livro livro = new Livro("A Karol", "Karol", "IFG", "123");
		LivroBiblioteca biblioteca = new LivroBiblioteca("A Ana", "Ana", "IFG", "456", "Doce", "Disponivel");
		LivroLivraria livraria = new LivroLivraria("A Yasmin", "Yasmin", "IFG", "789", 1000.0f, 1);
		
		System.out.println(livro.toString());
		System.out.println(biblioteca.toString());
		System.out.println(livraria.toString());
		
		Relatorio relatorio = new Relatorio();
		
		relatorio.listar(livro);
		relatorio.listar(livraria);
		relatorio.listar(biblioteca);
	}
}
