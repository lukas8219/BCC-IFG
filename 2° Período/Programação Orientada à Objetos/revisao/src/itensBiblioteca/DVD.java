package itensBiblioteca;

import java.util.Date;

public class DVD extends Item {
	private String idioma;
	
	public DVD (String id, String titulo, String autor, Date anoPublicacao, Status status, String idioma) {
		super(id, titulo, autor, anoPublicacao, status);
		this.setIdioma(idioma);
	}
	public String getIdioma() {
		return this.idioma;
	}
	public void setIdioma(String idioma) {
		this.idioma = idioma;
	}
	
	public String getInformacao() {
		return (super.getInformacao() + " Idioma: " + this.idioma + " Status: " + this.status);
	}
}
