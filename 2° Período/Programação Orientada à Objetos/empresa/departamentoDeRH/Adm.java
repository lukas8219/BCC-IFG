package departamentoDeRH;

public class Adm extends Empregado {
    private float costAssistance;

    Adm(String name, String address, String number, int departmentCode, float baseSalary, float taxAmount, float costAssistance) {
        super(name, address, number, departmentCode, baseSalary, taxAmount);
        this.setCostAssistance(costAssistance);
    }

    public float getCostAssistance() {
        return this.costAssistance;
    }

    public void setCostAssistance(float costAssistance) {
        this.costAssistance = costAssistance;
    }

    @Override
    public float computeSalary() {
        return super.computeSalary() + costAssistance;
    }
}