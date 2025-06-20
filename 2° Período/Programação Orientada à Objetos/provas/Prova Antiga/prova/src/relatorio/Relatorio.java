package relatorio;

import models.Livro;
import models.LivroLivraria;
import models.LivroBiblioteca;

public class Relatorio {
	public void listar(Livro f) {
		System.out.println(f);
		System.out.println(f.getTitulo() + f.getAutor() + f.getEditora() + f.getISBN());
		
		if (f instanceof LivroBiblioteca) {
			System.out.println("Biblioteca");
			LivroBiblioteca fNovo = (LivroBiblioteca)f;
			System.out.println(fNovo.getSessao() + fNovo.getStatus());
		} else {
			if (f instanceof LivroLivraria) {
				System.out.println("Livraria");
				LivroLivraria fNovo = (LivroLivraria)f;
				System.out.println(fNovo.getPreco() + fNovo.getQuantidade());
			} else {
				if (f instanceof Livro) {
					System.out.println("Livro");
				}
			}
		}
		
	}
}
