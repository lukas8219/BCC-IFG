package biblioteca;

import java.util.Date;
import java.util.ArrayList;
import java.util.List;

import itensBiblioteca.DVD;
import itensBiblioteca.Item;
import itensBiblioteca.Livro;
import itensBiblioteca.Revista;

public class Biblioteca {
	private static int totalItensEmprestados = 0;
	private List<Livro> livros;
	private List<Revista> revistas;
	private List<DVD> DVDs;
	// a biblioteca deveria ter uma lista de usuarios e uma lista de emprestimos
	// mas nao implementarei por hora, acho
	
	public Biblioteca(List<Livro> livros, List<Revista> revistas, List<DVD> DVDs) {
		this.setLivros(livros);
		this.setRevistas(revistas);
		this.setDVDs(DVDs);
	}
	
	// LIVROS
	// MANIPULANDO A LISTA
	public List<Livro> getLivros() {
		return this.livros;
	}
	public void setLivros(List<Livro> livros) {
		this.livros = livros;
	}
	public void addLivro(Livro livro) {
		this.livros.add(livro);
	}
	public void removeLivro(Livro livro) {
		this.livros.remove(livro);
	}
	
	// REVISTAS
	public List<Revista> getRevistas() {
		return this.revistas;
	}
	public void setRevistas(List<Revista> revistas) {
		this.revistas = revistas;
	}
	public void addRevista(Revista revista) {
		this.revistas.add(revista);
	}
	public void removeRevista(Revista revista) {
		this.revistas.remove(revista);
	}
	
	// DVDs
	public List<DVD> getDVDs() {
		return this.DVDs;
	}
	public void setDVDs(List<DVD> DVDs) {
		this.DVDs = DVDs;
	}
	public void addDVD(DVD dvd) {
		this.DVDs.add(dvd);
	}
	public void removeDVD(DVD dvd) {
		this.DVDs.remove(dvd);
	}
	
	public int getTotalItensEmprestados () {
		return totalItensEmprestados;
	}
	
	public static void contagemItensEmprestados(char a) {
		if (a == '+') {
			totalItensEmprestados++;
		} else {
			totalItensEmprestados--;
		}
	}
	
	
	// METHODS 
	// possivelmente seria melhor criar uma classe emprestimo para associar os elementos
	// usuario, itens, data do emprestimo e de devolucao, mas manterei simples por hora
	// ignore a classe emprestimo, pois nao foi implementada
	
	public Item getItemBiblioteca(String titulo) {
		for (Item item: this.livros) {
			if (item.getTitulo().equalsIgnoreCase(titulo)) {
				return item;
			}
		}
		for (Item item: this.revistas) {
			if (item.getTitulo().equalsIgnoreCase(titulo)) {
				return item;
			}
		}
		for (Item item: this.DVDs) {
			if(item.getTitulo().equalsIgnoreCase(titulo)) {
				return item;
			}
		}
		return null;
	}
	
	// idealmente, o parametro de entrada deveria ser o ID, mas assim é mais facil de testar
	public void novoEmprestismo(String titulo) throws Exception {
		Item item = getItemBiblioteca(titulo);
		if (item == null ) {
			throw new Exception ("Item nao disponivel no sistema.");
		} else if (item.getStatus().equals("Emprestado")) {
			throw new Exception ("Item ja emprestado.");
		}
		item.emprestar();
		System.out.println("Emprestimo realizado com sucesso: " + item.getTitulo() + " " + item.getStatus());
		Biblioteca.contagemItensEmprestados('+');
	}
	
	// idealmente, o parametro de entrada deveria ser o ID, mas assim é mais facil de testar
	public void novaDevolucao(String titulo) throws Exception {
		Item item = getItemBiblioteca(titulo);
		if (item == null ) {
			throw new Exception ("Item nao disponivel no sistema.");
		} 
		item.devolver();
		Biblioteca.contagemItensEmprestados('-');
		System.out.println("Devolucao realizado com sucesso: " +  item.getTitulo() + " " + item.getStatus());
	}
}
