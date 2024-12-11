package departamentoDeRH;

public class Pessoa {
    private String name;
    private String address;
    private String number;

    Pessoa(String name, String address, String number) {
        this.setName(name);
        this.setAddress(address);
        this.setNumber(number);
    }

    //Pessoa(String name, String number) {
    //    this.setName(name);
    //    this.setNumber(number);
    //}

    //Pessoa(String name, String address) {
    //    this.setName(name);
    //    this.setAddress(address);
    //}sss

    public String getName() {
        return this.name;
    }
    public String getAddress() {
        return this.address;
    }
    public String getNumber() {
        return this.number;
    }

    public void setName(String name) {
        this.name = name;
    }
    public void setAddress(String address) {
        this.address = address;
    }
    public void setNumber(String number) {
        this.number = number;
    }
}