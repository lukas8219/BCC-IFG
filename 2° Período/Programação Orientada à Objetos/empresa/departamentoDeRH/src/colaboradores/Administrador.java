package colaboradores;

public class Administrador extends Empregado {
    private float ajudaDeCusto;

    public Administrador(String nome, String endereco, String telefone, int codigoSetor, float salarioBase, float imposto, float ajudaDeCusto) {
        super(nome, endereco, telefone, codigoSetor, salarioBase, imposto);
        this.setAjudaDeCusto(ajudaDeCusto);
    }

    public float getAjudaDeCusto() {
        return this.ajudaDeCusto;
    }

    public void setAjudaDeCusto(float ajudaDeCusto) {
        this.ajudaDeCusto = ajudaDeCusto;
    }

    @Override
    public float computeSalary() {
        return super.computeSalary() + ajudaDeCusto;
    }
}