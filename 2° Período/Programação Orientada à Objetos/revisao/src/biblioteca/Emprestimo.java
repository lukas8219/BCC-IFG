package biblioteca;

import java.util.Date;
import java.util.List;

import itensBiblioteca.Item;

public class Emprestimo {
	private Date dataEmprestimo;
	private Date dataDevolucao;
	private Usuario usuario;
	private List<Item> itens;
	
	public Emprestimo() {
		this.setDataEmprestimo(new Date());
	}
	
	public Date getDataEmprestimo() {
		return dataEmprestimo;
	}
	public void setDataEmprestimo(Date dataEmprestimo) {
		this.dataEmprestimo = dataEmprestimo;
	}
	public Date getDataDevolucao() {
		return dataDevolucao;
	}
	public void setDataDevolucao(Date dataDevolucao) {
		this.dataDevolucao = new Date(dataEmprestimo.getTime() + 604800000);
		// quantos MILISEGUNDOS tem 7 dias = 7d X 24h x 60min x 60s x 1000milis 
	}
	public Usuario getUsuario() {
		return usuario;
	}
	public void setUsuario(Usuario usuario) {
		this.usuario = usuario;
	}
	public List<Item> getItens() {
		return itens;
	}
	public void setItens(List<Item> itens) {
		this.itens = itens;
	}
}
