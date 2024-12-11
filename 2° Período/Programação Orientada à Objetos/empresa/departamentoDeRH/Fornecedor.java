package departamentoDeRH;

public class Fornecedor extends Pessoa {
    private float creditValue;
    private float debitValue;

    Fornecedor(String name, String address, String number, float creditValue, float debitValue) {
        super(name, address, number);   
        this.setCreditValue(creditValue); 
        this.setDebitValue(debitValue); 
    }

    public float getCreditValue() {
        return this.creditValue;
    }
    public float getDebitValue() {
        return this.debitValue;
    }

    public void setCreditValue(float creditValue) {
        this.creditValue = creditValue;
    }
    
    public void setDebitValue(float debitValue) {
        this.debitValue = debitValue;
    }
}