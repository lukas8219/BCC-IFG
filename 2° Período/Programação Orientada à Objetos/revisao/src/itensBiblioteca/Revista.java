package itensBiblioteca;

import java.util.Date;

public class Revista extends Item {
	private String editora;
	private String ISSN;
	
	public Revista(String id, String titulo, String autor, Date anoPublicacao, String status, String editora, String ISSN) {
		super(id, titulo, autor, anoPublicacao, status);
		this.setEditora(editora);
		this.setISSN(ISSN);
	}
	
	public String getEditora() {
		return this.editora;
	}
	public void setEditora(String editora) {
		this.editora = editora;
	}
	
	public String getISSN() {
		return this.ISSN;
	}
	public void setISSN(String ISSN) {
		this.ISSN = ISSN;
	}
	
	public String getInformacao() {
		return (super.getInformacao() + " Editora: " + this.editora + " ISSN: " + this.ISSN + " Status: " + this.status);
	}
}
