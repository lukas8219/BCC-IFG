package modelos;

import java.util.Date;

public class Pagamento {
	protected double valor;
	protected Date data;
	// a diferenca entre private e protected é que o private permite que classes filhas 
	// acessem os atributos da classe mãe diretamente
	// fazemos isso aqui pelos metodos de processarPagamento(), nos quais buscamos o valor
	
	public Pagamento(double valor, Date data) {
		this.setData(data);
		this.setValor(valor);
	}
	
	public double getValor() {
		return this.valor;
	}
	public void setValor(double valor) {
		this.valor = valor;
	}
	
	public Date getData() {
		return this.data;
	}
	public void setData(Date data) {
		this.data = data;
	}
	
	public String processarPagamento() {
		return ("Processando pagamento no valor de: " + valor);
	}
}
