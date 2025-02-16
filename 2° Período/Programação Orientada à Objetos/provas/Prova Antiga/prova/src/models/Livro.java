package models;

public class Livro {
	private String titulo;
	private String autor;
	private String editora;
	private String ISBN;
	
	public Livro(String titulo, String autor, String editora, String ISBN) {
		this.setAutor(autor);
		this.setEditora(editora);
		this.setISBN(ISBN);
		this.setTitulo(titulo);
	}
	public Livro(String ISBN) {
		this.setISBN(ISBN);
	}
	
	public String getTitulo() {
		return this.titulo;
	}
	public String getAutor() {
		return this.autor;
	}
	public String getEditora() {
		return this.editora;
	}
	public String getISBN() {
		return this.ISBN;
	}
	
	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}
	public void setAutor(String autor) {
		this.autor = autor;
	}
	public void setEditora(String editora) {
		this.editora = editora;
	}
	public void setISBN(String ISBN) {
		this.ISBN = ISBN;
	}
	
	@Override
	public String toString() {
		return "Livro [titulo=" + titulo + 
				", autor=" + autor + 
				", editora=" + editora + 
				", ISBN=" + ISBN + "]";
	}
	
}
