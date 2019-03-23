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
		
		if (gamb != (numMax)) {
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
		for ( int i = 0; i < alunos.length; i++ ) {
			if (alunos[i] != null) {
				
				if ( alunos[i].getNome().equals(aluno.getNome())) {
					alunos[i] = null;
				}
			}
		}
		
		System.out.print("Aluno Excluido.");
		realocaArray();
	}
	
	private void realocaArray() {
		for(int i = 0; i < alunos.length-1; i++) {
			if(alunos[i] == null) {
				alunos[i] = alunos[i+1];
				if ( ( 1+i != alunos.length ) ) alunos[i+1]=null;
			}
		}
	}
	public void imprimir() {
		for(Aluno toCompare: alunos) {
			if (toCompare.getNome() != null) System.out.print(toCompare.getNome());
		}
		System.out.print("Fim da impressão.");
	}
}
