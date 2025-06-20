package itensBiblioteca;

import java.util.Date;

public class Livro extends Item {
	private String ISBN;
	private String editora;
	
	public Livro (String id, String titulo, String autor, Date anoPublicacao, Status status, String ISBN, String editora) {
		super(id, titulo, autor, anoPublicacao, status);
		this.setISBN(ISBN);
		this.setEditora(editora);
	}
	
	public String getISBN() {
		return this.ISBN;
	}
	public void setISBN (String ISBN) {
		this.ISBN = ISBN;
	}
	
	public String getEditora() {
		return this.editora;
	}
	public void setEditora(String editora) {
		this.editora = editora;
	}

	@Override
	public String getInformacao() {
		return (super.getInformacao() + " ISBN: " + this.ISBN + " Editora: " + this.editora + " Status: " + this.status);
	}
}
