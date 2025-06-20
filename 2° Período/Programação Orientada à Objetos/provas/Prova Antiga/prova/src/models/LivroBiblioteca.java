package models;

public class LivroBiblioteca extends Livro {
	private String sessao;
	private String status;
	
	public LivroBiblioteca(String titulo, String autor, String editora, String ISBN, String sessao, String status) {
		super(titulo, autor, editora, ISBN);
		this.setSessao(sessao);
		this.setStatus(status);
	}
	
	public String getSessao() {
		return this.sessao;
	}
	public String getStatus() {
		return this.status;
	}
	
	public void setSessao(String sessao) {
		this.sessao = sessao;
	}
	public void setStatus(String status) {
		this.status = status;
	}
	
	@Override
	public String toString() {
		return super.toString() + "Biblioteca[sessao=" + sessao +
		"status=" + status + "]";
	}
}
