package modelos;

import java.util.Date;

public class CartaoCredito extends Pagamento {
	private String numeroCartao;
	private String nomeTitular;
	private Date validade;
	private String codigoSeguranca;
	
	public CartaoCredito(double valor, Date dataPagamento, String numeroCartao, String nomeTitular, Date validade, String codigoSeguranca) {
		super(valor, dataPagamento);
		this.setNumeroCartao(numeroCartao);
		this.setNomeTitular(nomeTitular);
		this.setValidade(validade);
		this.setCodigoSeguranca(codigoSeguranca);
	}
	
	public String getNumerocCartao() {
		return this.numeroCartao;
	}
	public void setNumeroCartao(String numeroCartao) {
		this.numeroCartao = numeroCartao;
	}
	
	public String getNomeTitular() {
		return this.nomeTitular;
	}
	public void setNomeTitular(String nomeTitular) {
		this.nomeTitular = nomeTitular;
	}
	
	public Date getValidade() {
		return this.validade;
	}
	public void setValidade(Date validade) {
		this.validade = validade;
	}
	
	public String getCodigoSeguranca() {
		return this.codigoSeguranca;
	}
	public void setCodigoSeguranca(String codigoSeguranca) {
		this.codigoSeguranca = codigoSeguranca;
	}
	
	@Override
	public String processarPagamento() {
		return ("Processando pagamento de Cartao de Credito no valor de: " + valor);
	}
}
