package itensBiblioteca;

import java.util.Date;

import biblioteca.Biblioteca;
import interfaces.InformacaoItem;
import interfaces.ItemBiblioteca;

public abstract class Item implements ItemBiblioteca, InformacaoItem {
	protected String id;
	protected String titulo;
	protected String autor;
	protected Date anoPublicacao;
	protected String status;
	
	public Item(String id, String titulo, String autor, Date anoPublicacao, String status) {
		this.setId(id);
		this.setTitulo(titulo);
		this.setAutor(autor);
		this.setAnoPublicacao(anoPublicacao);
		this.setStatus(status);
	}
	
	public String getInformacao() {
		return ("Titulo: " + this.titulo + " Autor: " + this.autor + " Ano de Publicacao " + this.anoPublicacao);
	}
	
	public void emprestar()  {
		this.status = "Emprestado";
	}
	
	public void devolver() {
		this.status = "Disponivel";
	}
	
	public String getId() {
		return this.id;
	}
	public void setId(String id) 
	{
		this.id = id;
	}
	
	public String getTitulo() {
		return this.titulo;
	}
	public void setTitulo (String titulo) {
		this.titulo = titulo;
	}
	
	public String getAutor() {
		return this.autor;
	}
	public void setAutor (String autor) {
		this.autor = autor;
	}
	
	public Date getAnoPublicacao() {
		return this.anoPublicacao;
	}
	public void setAnoPublicacao(Date anoPublicacao) {
		this.anoPublicacao = anoPublicacao;
	}
	
	public String getStatus() {
		return this.status;
	}
	public void setStatus(String status) {
		this.status = status;
	}
}
