package colaboradores;
import validadores.ValidadorNomeCompleto;
import validadores.ValidadorEndereco;
import validadores.ValidadorTelefone;

public class Pessoa {
    private String nome;
    private String endereco;
    private String telefone;

    // CONSTRUCTOR
    public Pessoa(String nome, String endereco, String telefone) {
        this.setNome(nome);
        this.setEndereco(endereco);
        this.setTelefone(telefone);
    }
   
    //GETTERS
    public String getNome() {
        return this.nome;
    }
    public String getEndereco() {
    	return this.endereco;
    }
    public String getTelefone() {
        return this.telefone;
    }

    // SETTERS
    public void setNome(String nome) {
    	if (ValidadorNomeCompleto.isValidNome(nome) && ValidadorNomeCompleto.isValidTamanho(nome, 100)) {
            this.nome = nome;
    	}
    }
    public void setEndereco(String endereco) {
        if(ValidadorEndereco.isValid(endereco)) {
        	this.endereco = endereco;
        }
    }
    public void setTelefone(String telefone) {
        if(ValidadorTelefone.isValidTelefone(telefone)) {
        	this.telefone = telefone;
        }
    }
}