package validadores;

public class ValidadorEndereco {

    //public static boolean isValidEndereco(String rua, String numero, String cidade, String cep) {
    //    return isValid(rua) && isValid(numero) && isValid(cidade) && isValid(cep);
    //}

    public static boolean isValid(String str) {
        return str != null && !str.trim().isEmpty();
    }
}
