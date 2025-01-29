package colaboradores;

public class Vendedor extends Empregado {
    private float valorVendas;
    private float comissao;

    public Vendedor(String nome, String endereco, String telefone, int codigoSetor, float salarioBase, float imposto, float valorVendas, float comissao) {
        super(nome, endereco, telefone, codigoSetor, salarioBase, imposto);
        this.setValorVendas(valorVendas);
        this.setComissao(comissao);
    }
    public float getSalesValue() {
        return this.valorVendas;
    }
    public float getComissao() {
        return this.comissao;
    }

    public void setValorVendas(float valorVendas) {
        this.valorVendas = valorVendas;
    }
    public void setComissao(float comissao) {
        this.comissao = comissao;
    }

    @Override
    public float computeSalary() {
        return super.computeSalary() + comissao;
    }
}