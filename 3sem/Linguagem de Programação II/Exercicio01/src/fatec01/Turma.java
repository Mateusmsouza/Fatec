package fatec01;
import lombok.*;


@Getter
@Setter
public class Turma {
	private int numMax;
	private Aluno alunos[];
	private int gamb=0;
	
	// constructor 
	Turma(int inicializarVetor){
		if (inicializarVetor>0) {
			this.alunos = new Aluno[inicializarVetor];
		}
		this.numMax = inicializarVetor;
	}
	
	// methods
	public void Add(Aluno aluno) {
		
		if (gamb != (numMax-1)) {
			this.alunos[gamb] = aluno; 	
			this.setGamb(gamb+1);
			System.out.println("Aluno inserido com sucesso.");
		} else {
			System.out.print("Turma já está cheia!\n");
		}
	}
	
	public Aluno consultaPorNomeAluno(Aluno aluno) {
		if (alunos.length > 0) {
			for(Aluno toCompare: alunos) {
				if (toCompare != null) if (toCompare.getNome().equals(aluno.getNome())) return toCompare;
			}	
		}
		return null;
	}
	
	public Aluno consultaPorMatriculaAluno(Aluno aluno) {
		if (alunos.length > 0) {
			for(Aluno toCompare: alunos) {
				if (toCompare != null) if (toCompare.getMatricula() == aluno.getMatricula()) return toCompare;
			}	
		}
		return null;
	}
	
	public void excluirAluno(Aluno aluno) {
		for(Aluno toCompare: alunos) {
			if (toCompare.getMatricula() == aluno.getMatricula()) toCompare = null;
		}
		System.out.print("Aluno Excluido.");
	}
	
	public void imprimir() {
		for(Aluno toCompare: alunos) {
			if (toCompare.getNome() != null) System.out.print(toCompare);
		}
		System.out.print("Fim da impressão.");
	}
}
