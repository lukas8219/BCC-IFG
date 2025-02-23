package biblioteca;

import itensBiblioteca.Item;
import java.util.List;
import java.util.ArrayList;

public class Usuario {
	private String nome;
	private List<Item> emprestimos = new ArrayList<Item>();
	
	public Usuario(String nome) {
		this.setNome(nome);
	}
	
	public String getNomem() {
		return this.nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}

	public List<Item> getEmprestimos() {
		return this.emprestimos;
	}
	public void novoEmprestimo(Item item) {
		emprestimos.add(item);
	}
	public void novaDevolucao(Item item) {
		emprestimos.remove(item);
	}
}
