package validadores;

public class ValidadorNomeCompleto {

    public static boolean isValidNome(String nome) {
        return nome != null && !nome.trim().isEmpty() && nome.matches("[a-zA-Z ]+");
    }

    public static boolean isValidTamanho(String nome, int maxLength) {
        return nome.length() <= maxLength;
    }
}
