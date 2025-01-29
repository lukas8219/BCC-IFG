package colaboradores;

public class Operario extends Empregado {
    private float valorProducao;
    private float comissao;

    public Operario(String nome, String endereco, String telefone, int codigoSetor, float salarioBase, float imposto, float valorProducao, float comissao) {
        super(nome, endereco, telefone, codigoSetor, salarioBase, imposto);
        this.setValorProducao(valorProducao);
        this.setComissao(comissao);  
    }

    public float getProductionValue() {
        return this.valorProducao;
    }
    public float getComissao() {
        return this.comissao;
    }

    public void setValorProducao(float valorProducao) {
        this.valorProducao = valorProducao;
    }
    public void setComissao(float comissao) {
        this.comissao = comissao;
    }

    @Override
    public float computeSalary() {
        return super.computeSalary() + comissao;
    }
}