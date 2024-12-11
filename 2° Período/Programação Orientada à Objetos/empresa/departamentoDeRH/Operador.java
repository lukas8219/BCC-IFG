package departamentoDeRH;

public class Operador extends Empregado {
    private float productionValue;
    private float commission;

    Operador(String name, String address, String number, int departmentCode, float baseSalary, float taxAmount, float productionValue, float commission) {
        super(name, address, number, departmentCode, baseSalary, taxAmount);
        this.setProductionValue(productionValue);
        this.setComission(commission);  
    }

    public float getProductionValue() {
        return this.productionValue;
    }
    public float getComission() {
        return this.commission;
    }

    public void setProductionValue(float productionValue) {
        this.productionValue = productionValue;
    }
    public void setComission(float commission) {
        this.commission = commission;
    }

    @Override
    public float computeSalary() {
        return super.computeSalary() + commission;
    }
}