package sistemaDePagamentos;

import java.util.Date;
import modelos.Pagamento;
import modelos.CartaoCredito;
import modelos.Boleto;
import modelos.Pix;

public class SistemaDePagamentos {
	public static void main(String[] str) {
		Pagamento vetor[] = new Pagamento[5];
		
		vetor[0] = new CartaoCredito(100, new Date(), "123", "Karol", new Date(), "456");
		vetor[1] = new Boleto(100, new Date(), "123", new Date());
		vetor[2] = new Pix(100, new Date(), "hello, world");
		vetor[3] = new Pix(100, new Date(), "programe to work");
		vetor[4] = new Pix(100, new Date(), "and not to feel");
		
		
		for (Pagamento pagamentos: vetor) {
			System.out.println(pagamentos.processarPagamento());
		}
		System.out.println(Pix.getTotalPix());
	}
}
