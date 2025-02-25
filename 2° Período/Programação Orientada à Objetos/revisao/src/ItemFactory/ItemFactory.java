package ItemFactory;

import java.util.Date;

import itensBiblioteca.*;

public class ItemFactory {
	public static Item newItem(String tipo, String id, String titulo, String autor, Date anoPublicacao, Status status, String ISBN, String editora, String ISSN, String idioma) {
		Item item = null;
		switch (tipo.toLowerCase()) {
		case "livro":
			item = new Livro(id, titulo, autor, anoPublicacao, status, ISBN, editora);
			break;
		case "revista":
			item = new Revista(id, titulo, autor, anoPublicacao, status, editora, ISSN);
			break;
		case "dvd":
			item = new DVD(id, titulo, autor, anoPublicacao, status, idioma);
			break;
		}
		return item;
	}
}
