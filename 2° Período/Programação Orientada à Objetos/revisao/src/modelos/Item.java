package modelos;

import java.util.Date;

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
	
	public abstract String getInformacao();
	
	public String emprestar() throws Exception {
		if (this.status == "Emprestado") {
			throw new Exception("Livro nao disponivel para emprestimo.");
		} else {
			this.status = "Emprestado";
			return ("Emprestimo realizado.");
		}
	}
	
	public String devolver() {
		this.status = "Disponivel";
		return ("Devolucao realizada.");
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
