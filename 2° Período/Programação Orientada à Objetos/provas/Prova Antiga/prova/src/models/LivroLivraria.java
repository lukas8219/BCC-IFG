package models;

public class LivroLivraria extends Livro {
	private float preco;
	private int quantidade;
	
	public LivroLivraria(String titulo, String autor, String editora, String ISBN, float preco, int quantidade) {
		super(titulo, autor, editora, ISBN);
		this.setPreco(preco);
		this.setQuantidade(quantidade);
	}
	
	public float getPreco() {
		return this.preco;
	}
	public int getQuantidade() {
		return this.quantidade;
	}
	
	public void setPreco(float preco) {
		this.preco = preco;
	}
	public void setQuantidade(int quantidade) {
		this.quantidade = quantidade;
	}
	
	@Override
	public String toString() {
		return super.toString() + "Livraria[preco=" + preco +
				", quantidade=" + quantidade + "]";
	}
}
