package fatec01;
import java.util.Scanner;

public class main {

	public static void main(final String[] args) { 
		Scanner Input = new Scanner(System.in);
		boolean continua = true;
		int menu = 99;
		
		System.out.println("Qual o tamanho da turma?");
		Turma turma = inicializaTurma(Input.nextInt());
		
		while(continua && (turma!=null) ) {
			
			System.out.println("Hub:");
			System.out.print("1 - Inserir aluno\n");
			System.out.print("2 - Alterar dados de um aluno\n");
			System.out.print("3 - Consultar aluno por nome\n");
			System.out.print("4 - Consultar aluno por matrícula\n");
			System.out.print("5 - Excluir aluno pelo nome\n");
			System.out.println("6 - Imprimir lista de Alunos");
			//System.out.println("6 - validar se aluno já foi informado");
			menu = Input.nextInt();
			
			if (menu== 1) adicionaAluno(turma);
			else if(menu == 2) alteraAluno(turma);
			else if(menu == 3) consultaNome(turma);
			else if(menu == 4) consultaMatricula(turma);
			else if(menu == 5) excluirAluno(turma);
			else if(menu == 5) imprimirAlunos(turma);
			
		}
		Input.close();
	}
	
	private static Turma inicializaTurma(int tamanho) {
		Turma turma = null;
		
		if (tamanho > 0) turma = new Turma(tamanho);
		return turma;
	}
	
	private static void adicionaAluno(Turma turma){
		// Iniciando aluno novo
		Aluno newAluno = new Aluno();
		
		Scanner adcInput = new Scanner(System.in); // out terminal
		
		// Criando o novo aluno
		System.out.println("Insira o nome do Aluno.");
		newAluno.setNome(adcInput.nextLine());
		System.out.println("Insira o curso do Aluno.");
		newAluno.setCurso(adcInput.nextLine());
		System.out.println("Insira a matricula do Aluno [INT TYPE].");
		newAluno.setMatricula(adcInput.nextInt());
		
		System.out.println("Insira a nota.");
		newAluno.setP1(new Prova(adcInput.nextInt(), 1));
		newAluno.setP2(new Prova(adcInput.nextInt(), 2));
		newAluno.setP3(new Prova(adcInput.nextInt(), 3));
		newAluno.setP4(new Prova(adcInput.nextInt(), 4));
		
		// validando que aluno não existe em turma
		if ((turma.consultaPorNomeAluno(newAluno) != null) && (turma.consultaPorMatriculaAluno(newAluno) != null)) {
			System.out.println("Aluno já cadastrado. Operação abortada.");
			adcInput.close();
			return ;
		}
		
		// adicionando aluno
		turma.Add(newAluno);
		System.out.println("Aluno inserido com sucesso.");
		adcInput.close();	
	}
	
	private static void alteraAluno(Turma turma) {
		Scanner adcAltera = new Scanner(System.in);
		
		//criando um objeto template para armazenar matrícula
		System.out.println("Insira matricula do aluno [INT TYPE]");
		Aluno templateAluno = new Aluno();
		templateAluno.setMatricula(adcAltera.nextInt());
		
		if (turma.consultaPorMatriculaAluno(templateAluno) != null) {
			System.out.println("Aluno inexistente na base. Operação abortada");
			adcAltera.close();
			return ;
		}
		
		
		adcAltera.close();
	}
	
	private static void consultaNome(Turma turma) {
		Scanner adcAltera = new Scanner(System.in);
		
		//criando um objeto template para armazenar matrícula
		System.out.println("Insira nome do aluno [INT TYPE]");
		Aluno templateAluno = new Aluno();
		templateAluno.setNome(adcAltera.nextLine());		
		adcAltera.close();
		if (turma.consultaPorNomeAluno(templateAluno) != null ) {
			System.out.print("Aluno existe: ");
			System.out.print(turma.consultaPorNomeAluno(templateAluno));
			return ;
		}
		System.out.print("Aluno não existe");
	}
	
	private static void consultaMatricula(Turma turma) {
		Scanner adcAltera = new Scanner(System.in);
		
		//criando um objeto template para armazenar matrícula
		System.out.println("Insira matricula do aluno [INT TYPE]");
		Aluno templateAluno = new Aluno();
		templateAluno.setMatricula(adcAltera.nextInt());		
		adcAltera.close();
		if (turma.consultaPorNomeAluno(templateAluno) != null ) {
			System.out.print("Aluno existe: ");
			System.out.print(turma.consultaPorNomeAluno(templateAluno));
			return ;
		}
		System.out.print("Aluno não existe");
	}
	
	private static void excluirAluno(Turma turma) {
		Scanner adcAltera = new Scanner(System.in);
		
		//criando um objeto template para armazenar matrícula
		System.out.println("Insira matricula do aluno [INT TYPE]");
		Aluno templateAluno = new Aluno();
		templateAluno.setMatricula(adcAltera.nextInt());		
		adcAltera.close();
		
		// excluindo aluno
		if (turma.consultaPorMatriculaAluno(templateAluno) != null ) {
			System.out.print("Aluno existe: ");
			turma.excluirAluno( turma.consultaPorMatriculaAluno(templateAluno) );
			return ;
		}
	}
	
	private static void imprimirAlunos(Turma turma) {
		turma.imprimir();
	}
	
}
