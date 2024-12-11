package departamentoDeRH;

public class Vendedor extends Empregado {
    private float salesValue;
    private float commission;

    Vendedor(String name, String address, String number, int departmentCode, float baseSalary, float taxAmount, float salesValue, float commission) {
        super(name, address, number, departmentCode, baseSalary, taxAmount);
        this.setSalesValue(salesValue);
        this.setComission(commission);
    }
    public float getSalesValue() {
        return this.salesValue;
    }
    public float getCommission() {
        return this.commission;
    }

    public void setSalesValue(float salesValue) {
        this.salesValue = salesValue;
    }
    public void setComission(float commission) {
        this.commission = commission;
    }

    @Override
    public float computeSalary() {
        return super.computeSalary() + commission;
    }
}