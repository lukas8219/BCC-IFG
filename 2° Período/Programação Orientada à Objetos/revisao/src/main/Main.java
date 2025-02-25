package main;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;

import ItemFactory.ItemFactory;
import biblioteca.Biblioteca;
import biblioteca.Usuario;
import excecao.MinhaExcecao;
import itensBiblioteca.*;

/* resumo de pontos para melhorar/revisar
* - é ideal criar a classe empretsimo que possua como atributos, pelo menos: item(s) emprestados, data do emprestimo, data da devolucao e usuario
* - adicionar aos atributos da biblioteca uma lista de usuarios e uma lista de emprestimos (apos implementar o metodo emprestimo)
* quem deve imprimir as mensagens de erro? imagino que posso resolver isso melhor caso aplique o modelo MVC 
* - usar IDs ao inves de titulos para manipular os itens da biblioteca (facil alterar)
*/

public class Main {
	public static void main(String[] str) {

        // instanciando a biblioteca
        Biblioteca ifg = new Biblioteca(new ArrayList<Livro>(), new ArrayList<Revista>(), new ArrayList<DVD>());
        
        // adicionando itens
        // é preciso fazer o casting pois Factory retorna um ponteiro pra Item, mas meu metodo add so aceita um ponteiro para Livro
        // seria melhor mudar o metodo add para aceitar item?
        // pensei que nao, pois quero me certificar que apenas livros estejam na lista de livros
        ifg.addLivro((Livro) ItemFactory.newItem("livro", "LIVRO1", "1984", "George Orwell", new Date(), Status.DISPONIVEL, "978-0451524935", "Harvill Secker", null, null));
        ifg.addLivro((Livro) ItemFactory.newItem("livro", "LIVRO2", "Brave New World", "Aldous Huxley", new Date(), Status.DISPONIVEL, "978-0060850524", "Harper Perennial", null, null));
        ifg.addLivro((Livro) ItemFactory.newItem("livro", "LIVRO3", "Fahrenheit 451", "Ray Bradbury", new Date(), Status.DISPONIVEL, "978-1451673319", "Simon & Schuster", null, null));
        
        ifg.addRevista((Revista) ItemFactory.newItem("revista", "REVISTA1", "Oyasumi Punpun", "Inio Asano", new Date(), Status.DISPONIVEL, null, "Shinshokan", "123456789", null));
        ifg.addRevista((Revista) ItemFactory.newItem("revista", "REVISTA2", "Chainsaw Man", "Tatsuki Fujimoto", new Date(), Status.DISPONIVEL, null, "Shueisha", "987654321", null));
        ifg.addRevista((Revista) ItemFactory.newItem("revista", "REVISTA3", "Hirunaka no Ryuusei", "Souichirou Yamamoto", new Date(), Status.DISPONIVEL, null, "Kodansha", "123789456", null));
        
        ifg.addDVD((DVD) ItemFactory.newItem("dvd", "DVD1", "Rebuild of Evangelion: 1.0 You Are (Not) Alone", "Hideaki Anno", new Date(), Status.DISPONIVEL, null, null, null, "Japonês"));
        ifg.addDVD((DVD) ItemFactory.newItem("dvd", "DVD2", "Rebuild of Evangelion: 2.0 You Can (Not) Advance", "Hideaki Anno", new Date(), Status.DISPONIVEL, null, null, null, "Japonês"));
        ifg.addDVD((DVD) ItemFactory.newItem("dvd", "DVD3", "Rebuild of Evangelion: 3.0 You Can (Not) Redo", "Hideaki Anno", new Date(), Status.DISPONIVEL, null, null, null, "Japonês"));
        
        // instanciando ususario
		Usuario karol = new Usuario("Karol");
		// adicionando emprestimos a conta de Karol
		try {
			ifg.novoEmprestismo("Brave New World");
		} catch (MinhaExcecao e) {
			System.out.println("Erro: " + e.getMessage());
		}
		try {
			ifg.novoEmprestismo("Oyasumi Punpun");
		} catch (MinhaExcecao e) {
			System.out.println("Erro: " + e.getMessage());
		}
		try {
			ifg.novoEmprestismo("Rebuild of Evangelion: 1.0 You Are (Not) Alone");
		} catch (MinhaExcecao e) {
			System.out.println("Erro: " + e.getMessage());
		}
		
		// adicionando novo usuario
		Usuario gustavo = new Usuario("Gustavo");
		// adicionando emprestimos errados
		try {
			ifg.novoEmprestismo("Brave new world");
		} catch (MinhaExcecao e) {
			System.out.println("Erro: " + e.getMessage());
		}
		try {
			ifg.novoEmprestismo("Brave new hello world");
		} catch (MinhaExcecao e) {
			System.out.println("Erro: " + e.getMessage());
		}
		
		// testando devolucao
		try {
			ifg.novaDevolucao("Brave new Hello world");
		} catch (MinhaExcecao e) {
			System.out.println("Erro: " + e.getMessage());
		}
		try {
			ifg.novaDevolucao("Brave new world");
		} catch (MinhaExcecao e) {
			System.out.println("Erro: " + e.getMessage());
		}
		
		// testando o static totalItensEmprestados
		System.out.println(ifg.getTotalItensEmprestados());
	}
}
