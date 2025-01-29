package colaboradores;

public class Empregado extends Pessoa {
    private int codigoSetor;
    private float salarioBase;
    private float imposto;

    // CONSTRUCTOR
    public Empregado(String nome, String endereco, String telefone, int codigoSetor, float salarioBase, float imposto) {
        super(nome, endereco, telefone);
        this.setCodigoSetor(codigoSetor);
        this.setSalarioBase(salarioBase);
        this.setImposto(imposto);
    }

    // GETTERS
    public int getCodigoSetor() {
        return this.codigoSetor;
    }
    public float getSalarioBase() {
        return this.salarioBase;
    }
    public float getImpostot() {
        return this.imposto;
    }

    // SETTERS
    public void setCodigoSetor(int codigoSetor) {
        this.codigoSetor = codigoSetor;
    }
    public void setSalarioBase(float salarioBase) {
        this.salarioBase = salarioBase;
    }
    public void setImposto(float imposto) {
        this.imposto = imposto;
    }

    // METHOD'S
    public float computeSalary() {
        return salarioBase - (salarioBase * imposto);
    }
}