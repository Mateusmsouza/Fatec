package fatec01;
import lombok.*;

@Getter
@Setter
public class Prova {
	private int notaProva;
	private int peso;
	
	Prova(int nota, int peso){
		this.notaProva = nota;
		this.peso = peso;
	}
	
}
