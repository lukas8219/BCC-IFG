package departamentoDeRH;

public class Empregado extends Pessoa {
    private int departmentCode;
    private float baseSalary;
    private float taxAmount;

    Empregado(String name, String address, String number, int departmentCode, float baseSalary, float taxAmount) {
        super(name, address, number);
        this.setDepartmentCode(departmentCode);
        this.setBaseSalary(baseSalary);
        this.setTaxAmount(taxAmount);
    }

    public int getDepartmentCode() {
        return this.departmentCode;
    }
    public float getBaseSalary() {
        return this.baseSalary;
    }
    public float getTaxAmount() {
        return this.taxAmount;
    }

    public void setDepartmentCode(int departmentCode) {
        this.departmentCode = departmentCode;
    }
    public void setBaseSalary(float baseSalary) {
        this.baseSalary = baseSalary;
    }
    public void setTaxAmount(float taxAmount) {
        this.taxAmount = taxAmount;
    }

    public float computeSalary() {
        return baseSalary - (baseSalary * taxAmount);
    }
}