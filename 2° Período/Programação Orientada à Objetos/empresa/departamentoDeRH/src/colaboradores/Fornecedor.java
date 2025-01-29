package colaboradores;

public class Fornecedor extends Pessoa {
    private float valorCredito;
    private float valorDivida;

    public Fornecedor(String nome, String endereco, String telefone, float valorCredito, float valorDivida) {
        super(nome, endereco, telefone);   
        this.setValorCredito(valorCredito); 
        this.setValorDivida(valorDivida); 
    }

    public float getValorCredito() {
        return this.valorCredito;
    }
    public float getDebitValue() {
        return this.valorDivida;
    }

    public void setValorCredito(float valorCredito) {
        this.valorCredito = valorCredito;
    }
    
    public void setValorDivida(float valorDivida) {
        this.valorDivida = valorDivida;
    }
}