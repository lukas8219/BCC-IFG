package aplicativo;

/*Programa Java para implementar um formulário simples de cadastro.*/

import javax.swing.*;

import colaboradores.Pessoa;

import java.awt.*;
import java.awt.event.*;
import java.util.Date;

public class InterfaceDoUsuario extends JFrame implements ActionListener {

	// Elementos do formulario
	private Container container;
	private JLabel titulo;
	
	// pessoa
	private JLabel nome, numeroCelular, endereco;
	private JTextField tnome, tNumeroCelular;
	JTextArea tEndereco;
	
	// fornecedor
	private JLabel fornecedor, valorCredito, valorDivida;
	private JTextField tvalorCredito, tvalorDivida;
	
	// empregado
	private JLabel empregado, codigoSeto, salarioBase, imposto;
	private JTextField tcodigoSetor, tsalarioBase, timposto;

	// administrador
	private JLabel administrador, ajudaDeCusto;
	private JTextField tajudaDeCusto;
	
	// operario
	private JLabel operario, valorProducao, comissaoOp;
	private JTextField tvalorProducao, tcomissaoOp;
	
	// vendedor
	private JLabel vendedor, valorVendas, comissaoVd;
	private JTextField tvalorVendas, tcomissaoVd;
	
	
	private JCheckBox termoConcentimento;
	
	private JButton bEnviarPessoa, bEnviarEmpregado, bEnviarFornecedor, bEnviarAdm, bEnviarOperario, bEnviarVendedor;
	
	private JTextArea tAOutrasInformacoes;
	private JLabel mensagem;

	//Por enquanto a pessoa virá aqui como atributo
	Pessoa pessoa;

	/*Construtor para inicializar os componentes das tela com valores padrões.*/
	
	public InterfaceDoUsuario()
	{		
		setTitle("Formulario de Registro");
		setBounds(300, 90, 900, 900);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setResizable(false);

		
		container = getContentPane();
		container.setLayout(null);

		titulo = new JLabel("Formulario de Registro");
		titulo.setFont(new Font("Arial", Font.PLAIN, 25));
		titulo.setSize(300, 30);
		titulo.setLocation(281, 0);
		container.add(titulo);

		nome = new JLabel("Nome");
		nome.setFont(new Font("Arial", Font.PLAIN, 20));
		nome.setSize(100, 20);
		nome.setLocation(60, 65);
		container.add(nome);
		tnome = new JTextField();
		tnome.setFont(new Font("Arial", Font.PLAIN, 15));
		tnome.setSize(571, 23);
		tnome.setLocation(190, 65);
		container.add(tnome);

		numeroCelular = new JLabel("Telefone: ");
		numeroCelular.setFont(new Font("Arial", Font.PLAIN, 20));
		numeroCelular.setSize(100, 20);
		numeroCelular.setLocation(60, 98);
		container.add(numeroCelular);
		tNumeroCelular = new JTextField();
		tNumeroCelular.setFont(new Font("Arial", Font.PLAIN, 15));
		tNumeroCelular.setSize(571, 23);
		tNumeroCelular.setLocation(190, 98);
		container.add(tNumeroCelular);
		
		endereco = new JLabel("Endereco");
		endereco.setFont(new Font("Arial", Font.PLAIN, 20));
		endereco.setSize(100, 20);
		endereco.setLocation(60, 129); 
		container.add(endereco);
		tEndereco = new JTextArea();
		tEndereco.setFont(new Font("Arial", Font.PLAIN, 15));
		tEndereco.setSize(571, 76);
		tEndereco.setLocation(190, 129);
		tEndereco.setLineWrap(false);
		container.add(tEndereco);

		//private JLabel fornecedor, valorCredito, valorDivida;
		//private JTextArea tvalorCredito, tvalorDivida;
		fornecedor = new JLabel("FORNECEDOR");
		fornecedor.setFont(new Font("Arial", Font.PLAIN, 20));
		fornecedor.setSize(200, 30);
		fornecedor.setLocation(60, 214);
		container.add(fornecedor);
		
		valorCredito = new JLabel("Valor de credito:");
		valorCredito.setFont(new Font("Arial", Font.PLAIN, 20));
		valorCredito.setSize(250, 20);
		valorCredito.setLocation(60, 239);
		container.add(valorCredito);
		tvalorCredito = new JTextField();
		tvalorCredito.setFont(new Font("Arial", Font.PLAIN, 15));
		tvalorCredito.setSize(150, 20);
		tvalorCredito.setLocation(210, 239);
		container.add(tvalorCredito);
		
		valorDivida = new JLabel("Valor de divida:");
		valorDivida.setFont(new Font("Arial", Font.PLAIN, 20));
		valorDivida.setSize(250, 20);
		valorDivida.setLocation(380, 239);
		container.add(valorDivida);
		tvalorDivida = new JTextField();
		tvalorDivida.setFont(new Font("Arial", Font.PLAIN, 15));
		tvalorDivida.setSize(150, 20);
		tvalorDivida.setLocation(520, 239);
		container.add(tvalorDivida);
	
		//	private JLabel empregado, codigoSeto, salarioBase, imposto;
		//private JTextField tcodigoSetor, tsalarioBase, timposto;
		
		empregado = new JLabel("EMPREGADO");
		empregado.setFont(new Font("Arial", Font.PLAIN, 20));
		empregado.setSize(200, 30);
		empregado.setLocation(60, 279);
		container.add(empregado);
		
		codigoSeto = new JLabel("Código do setor:");
		codigoSeto.setFont(new Font("Arial", Font.PLAIN, 20));
		codigoSeto.setSize(250, 20);
		codigoSeto.setLocation(60, 304);
		container.add(codigoSeto);
		tcodigoSetor = new JTextField();
		tcodigoSetor.setFont(new Font("Arial", Font.PLAIN, 15));
		tcodigoSetor.setSize(100, 20);
		tcodigoSetor.setLocation(210, 304);
		container.add(tcodigoSetor);
		
		salarioBase = new JLabel("Salário base:");
		salarioBase.setFont(new Font("Arial", Font.PLAIN, 20));
		salarioBase.setSize(250, 20);
		salarioBase.setLocation(325, 304);
		container.add(salarioBase);
		tsalarioBase = new JTextField();
		tsalarioBase.setFont(new Font("Arial", Font.PLAIN, 15));
		tsalarioBase.setSize(100, 20);
		tsalarioBase.setLocation(450, 304);
		container.add(tsalarioBase);
		
		imposto = new JLabel("Imposto:");
		imposto.setFont(new Font("Arial", Font.PLAIN, 20));
		imposto.setSize(250, 20);
		imposto.setLocation(569, 304);
		container.add(imposto);
		timposto = new JTextField();
		timposto.setFont(new Font("Arial", Font.PLAIN, 15));
		timposto.setSize(100, 20);
		timposto.setLocation(655, 304);
		container.add(timposto);
		
		
		//	private JLabel administrador, ajudaDeCusto;
		//private JTextField tajudaDeCusto;
		administrador = new JLabel("ADMINISTRADOR");
		administrador.setFont(new Font("Arial", Font.PLAIN, 20));
		administrador.setSize(200, 30);
		administrador.setLocation(60, 334);
		container.add(administrador);
		
		ajudaDeCusto = new JLabel("Ajuda de custo:");
		ajudaDeCusto.setFont(new Font("Arial", Font.PLAIN, 20));
		ajudaDeCusto.setSize(250, 20);
		ajudaDeCusto.setLocation(60, 377);
		container.add(ajudaDeCusto);
		tvalorCredito = new JTextField();
		tvalorCredito.setFont(new Font("Arial", Font.PLAIN, 15));
		tvalorCredito.setSize(100, 20);
		tvalorCredito.setLocation(212, 377);
		container.add(tvalorCredito);
		
		
		//	private JLabel operario, valorProducao, comissaoOp;
		//private JTextField tvalorProducao, tcomissaoOp;
		
		operario = new JLabel("OPERÁRIO:");
		operario.setFont(new Font("Arial", Font.PLAIN, 20));
		operario.setSize(200, 30);
		operario.setLocation(325, 334);
		container.add(operario);
		
		valorProducao = new JLabel("Valor de Produção:");
		valorProducao.setFont(new Font("Arial", Font.PLAIN, 20));
		valorProducao.setSize(250, 20);
		valorProducao.setLocation(325, 377);
		container.add(valorProducao);
		tvalorProducao = new JTextField();
		tvalorProducao.setFont(new Font("Arial", Font.PLAIN, 15));
		tvalorProducao.setSize(100, 20);
		tvalorProducao.setLocation(500, 377);
		container.add(tvalorProducao);
		
		comissaoOp = new JLabel("Comissão:");
		comissaoOp.setFont(new Font("Arial", Font.PLAIN, 20));
		comissaoOp.setSize(250, 20);
		comissaoOp.setLocation(324, 401);
		container.add(comissaoOp);
		tcomissaoOp = new JTextField();
		tcomissaoOp.setFont(new Font("Arial", Font.PLAIN, 15));
		tcomissaoOp.setSize(100, 20);
		tcomissaoOp.setLocation(429, 401);
		container.add(tcomissaoOp);
	
		//	private JLabel vendedor, valorVendas, comissaoVd;
		//private JTextField tvalorVendas, tcomissaoVd;
		vendedor = new JLabel("VENDEDOR:");
		vendedor.setFont(new Font("Arial", Font.PLAIN, 20));
		vendedor.setSize(200, 30);
		vendedor.setLocation(620, 334);
		container.add(vendedor);
		
		valorVendas = new JLabel("Valor de vendas:");
		valorVendas.setFont(new Font("Arial", Font.PLAIN, 20));
		valorVendas.setSize(250, 20);
		valorVendas.setLocation(620, 377);
		container.add(valorVendas);
		tvalorVendas = new JTextField();
		tvalorVendas.setFont(new Font("Arial", Font.PLAIN, 15));
		tvalorVendas.setSize(100, 20);
		tvalorVendas.setLocation(770, 377);
		container.add(tvalorVendas);
		
		comissaoVd = new JLabel("Comissão:");
		comissaoVd.setFont(new Font("Arial", Font.PLAIN, 20));
		comissaoVd.setSize(250, 20);
		comissaoVd.setLocation(620, 401);
		container.add(comissaoVd);
		tcomissaoVd = new JTextField();
		tcomissaoVd.setFont(new Font("Arial", Font.PLAIN, 15));
		tcomissaoVd.setSize(100, 20);
		tcomissaoVd.setLocation(720, 401);
		container.add(tcomissaoVd);
		

		bEnviarPessoa = new JButton("Enviar pessoa");
		bEnviarPessoa.setFont(new Font("Arial", Font.PLAIN, 15));
		bEnviarPessoa.setSize(200, 20);
		bEnviarPessoa.setLocation(60, 454);
		bEnviarPessoa.addActionListener(this);
		container.add(bEnviarPessoa);

		bEnviarFornecedor = new JButton("Enviar fornecedor");
		bEnviarFornecedor.setFont(new Font("Arial", Font.PLAIN, 15));
		bEnviarFornecedor.setSize(200, 20);
		bEnviarFornecedor.setLocation(344, 454);
		bEnviarFornecedor.addActionListener(this);
		container.add(bEnviarFornecedor);
		
		bEnviarEmpregado = new JButton("Enviar empregado");
		bEnviarEmpregado.setFont(new Font("Arial", Font.PLAIN, 15));
		bEnviarEmpregado.setSize(200, 20);
		bEnviarEmpregado.setLocation(643, 454);
		bEnviarEmpregado.addActionListener(this);
		container.add(bEnviarEmpregado);
		
		bEnviarAdm = new JButton("Enviar administrador");
		bEnviarAdm.setFont(new Font("Arial", Font.PLAIN, 15));
		bEnviarAdm.setSize(200, 20);
		bEnviarAdm.setLocation(60, 493);
		bEnviarAdm.addActionListener(this);
		container.add(bEnviarAdm);

		bEnviarOperario = new JButton("Enviar operário");
		bEnviarOperario.setFont(new Font("Arial", Font.PLAIN, 15));
		bEnviarOperario.setSize(200, 20);
		bEnviarOperario.setLocation(344, 493);
		bEnviarOperario.addActionListener(this);
		container.add(bEnviarOperario);
		
		bEnviarVendedor = new JButton("Enviar vendedor");
		bEnviarVendedor.setFont(new Font("Arial", Font.PLAIN, 15));
		bEnviarVendedor.setSize(200, 20);
		bEnviarVendedor.setLocation(643, 493);
		bEnviarVendedor.addActionListener(this);
		container.add(bEnviarVendedor);

		termoConcentimento = new JCheckBox("Aceitar termos e condições");
		termoConcentimento.setFont(new Font("Arial", Font.PLAIN, 15));
		termoConcentimento.setSize(250, 20);
		termoConcentimento.setLocation(358, 544);
		container.add(termoConcentimento);
		
		tAOutrasInformacoes = new JTextArea();
		tAOutrasInformacoes.setFont(new Font("Arial", Font.PLAIN, 15));
		tAOutrasInformacoes.setSize(780, 245);
		tAOutrasInformacoes.setLocation(60, 577);
		tAOutrasInformacoes.setLineWrap(true);
		tAOutrasInformacoes.setEditable(false);
		container.add(tAOutrasInformacoes);

		mensagem = new JLabel("");
		mensagem.setFont(new Font("Arial", Font.PLAIN, 20));
		mensagem.setSize(780, 245);
		mensagem.setLocation(60, 657);
		container.add(mensagem);
		setVisible(true);
	}
    
	//Metodo para capturar uma ação de usuário e fazer o necessário
	//
	public void actionPerformed(ActionEvent e)
	{
		if (e.getSource() == bEnviarPessoa) {
			if (termoConcentimento.isSelected()) {
				String dadosPessoa = "Nome : "
				        + tnome.getText() + "\n"
				        + "Celular : "
				        + tNumeroCelular.getText() + "\n"
				        + "Endereco : " + tEndereco.getText();
				tAOutrasInformacoes.setText(dadosPessoa + "\n\n"+ pessoa);
				tAOutrasInformacoes.setEditable(false);
				mensagem.setText("Registrado com Sucesso...");
			}
		}
		if (e.getSource() == bEnviarFornecedor) {
			if (termoConcentimento.isSelected()) {
				String dadosPessoa = "Nome : "
				        + tnome.getText() + "\n"
				        + "Celular : "
				        + tNumeroCelular.getText() + "\n"
				        + "Endereco : " + tEndereco.getText() + "\n";
				String dadosFornecedor = "Valor de crédito: "
						+ tvalorCredito.getText()+ "\n"
						+ "Valor de dívida: "
						+ tvalorDivida.getText() + "\n";
				tAOutrasInformacoes.setText(dadosPessoa + dadosFornecedor + "\n\n"+ pessoa);
				tAOutrasInformacoes.setEditable(false);
				mensagem.setText("Registrado com Sucesso...");
			}
		}
		if (e.getSource() == bEnviarEmpregado) {
			if (termoConcentimento.isSelected()) {
				String dadosPessoa = "Nome : "
				        + tnome.getText() + "\n"
				        + "Celular : "
				        + tNumeroCelular.getText() + "\n"
				        + "Endereco : " + tEndereco.getText() + "\n";
				String dadosEmpregado = "Codigo do setor: "
						+ tcodigoSetor.getText() + "\n"
						+ "Salário base: " + "\n"
						+ tsalarioBase.getText()
						+ "Imposto: " + "\n"
						+ timposto.getText() + "\n";
				tAOutrasInformacoes.setText(dadosPessoa + dadosEmpregado + "\n\n"+ pessoa);
				tAOutrasInformacoes.setEditable(false);
				mensagem.setText("Registrado com Sucesso...");
			}
		}
		if (e.getSource() == bEnviarAdm) {
			if (termoConcentimento.isSelected()) {
				String dadosPessoa = "Nome : "
				        + tnome.getText() + "\n"
				        + "Celular : "
				        + tNumeroCelular.getText() + "\n"
				        + "Endereco : " + tEndereco.getText() + "\n";
				String dadosEmpregado = "Codigo do setor: "
						+ tcodigoSetor.getText() + "\n"
						+ "Salário base: " + "\n"
						+ tsalarioBase.getText()
						+ "Imposto: " + "\n"
						+ timposto.getText() + "\n";
				String dadosAdm = "Ajuda de custo: "
						+ tajudaDeCusto.getText() + "\n";
				tAOutrasInformacoes.setText(dadosPessoa + dadosEmpregado + dadosAdm + "\n\n"+ pessoa);
				tAOutrasInformacoes.setEditable(false);
				mensagem.setText("Registrado com Sucesso...");
			}
		}
		if (e.getSource() == bEnviarOperario) {
			if (termoConcentimento.isSelected()) {
				String dadosPessoa = "Nome : "
				        + tnome.getText() + "\n"
				        + "Celular : "
				        + tNumeroCelular.getText() + "\n"
				        + "Endereco : " + tEndereco.getText() + "\n";
				String dadosEmpregado = "Codigo do setor: "
						+ tcodigoSetor.getText() + "\n"
						+ "Salário base: " + "\n"
						+ tsalarioBase.getText()
						+ "Imposto: " + "\n"
						+ timposto.getText() + "\n";
				String dadosOperario = "Valor de produção: "
						+ tvalorProducao.getText() + "\n"
						+ "Comissão: " + "\n"
						+ tcomissaoOp.getText() + "\n";
				tAOutrasInformacoes.setText(dadosPessoa + dadosEmpregado + dadosOperario + "\n\n"+ pessoa);
				tAOutrasInformacoes.setEditable(false);
				mensagem.setText("Registrado com Sucesso...");
			}
		}
		
		if (e.getSource() == bEnviarVendedor) {
			if (termoConcentimento.isSelected()) {
				String dadosPessoa = "Nome : "
				        + tnome.getText() + "\n"
				        + "Celular : "
				        + tNumeroCelular.getText() + "\n"
				        + "Endereco : " + tEndereco.getText() + "\n";
				String dadosEmpregado = "Codigo do setor: "
						+ tcodigoSetor.getText() + "\n"
						+ "Salário base: " + "\n"
						+ tsalarioBase.getText()
						+ "Imposto: " + "\n"
						+ timposto.getText() + "\n";
				String dadosVendedor = "Valor de vendas: "
						+ tvalorVendas.getText() + "\n"
						+ "Comissão: " + "\n"
						+ tcomissaoVd.getText() + "\n";
				tAOutrasInformacoes.setText(dadosPessoa + dadosEmpregado + dadosVendedor + "\n\n"+ pessoa);
				tAOutrasInformacoes.setEditable(false);
				mensagem.setText("Registrado com Sucesso...");
			}
		}

	}
}