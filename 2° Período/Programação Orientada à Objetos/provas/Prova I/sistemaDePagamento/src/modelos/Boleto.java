package modelos;

import java.util.Date;

public class Boleto extends Pagamento {
	private String numeroBoleto;
	private Date dataVencimento;
	
	public Boleto(double valor, Date dataPagamento, String numeroBoleto, Date dataVencimento) {
		super(valor, dataPagamento);
		this.setNumeroBoleto(numeroBoleto);
		this.setDataVencimento(dataVencimento);
	}
	
	public String getNumeroBoleto() {
		return this.numeroBoleto;
	}
	public void setNumeroBoleto(String numeroBoleto) {
		this.numeroBoleto = numeroBoleto;
	}
	
	public Date getDataVencimento() {
		return this.dataVencimento;
	}
	public void setDataVencimento (Date dataVencimento) {
		this.dataVencimento = dataVencimento;
	}
	
	@Override
	public String processarPagamento() {
		return ("Processando pagamento boleto no valor de: " + valor);
	}
}
