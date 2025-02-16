package modelos;

import java.util.Date;

public class Pix extends Pagamento {
	private String chavePix;
	private static int totalPix = 0;
	
	public Pix(double valor, Date dataPagamento, String chavePix) 
	{
		super(valor, dataPagamento);
		this.setChavePix(chavePix);
		totalPix++;
	}
	
	public String getChavePix() {
		return this.chavePix;
	}
	public void setChavePix(String chavePix) {
		this.chavePix = chavePix;
	}
	
	public static int getTotalPix() {
		return totalPix;
	}
	
	@Override
	public String processarPagamento() {
		return ("Processando pagamento pix no valor de: " + valor);
	}
}
