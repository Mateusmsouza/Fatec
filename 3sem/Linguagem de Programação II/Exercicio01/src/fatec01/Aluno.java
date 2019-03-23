package fatec01;
import java.util.Scanner;

import lombok.*;


@Getter
@Setter
public class Aluno {
	private String nome;
	private int matricula;
	private String curso;
	private Prova provas[] = new Prova[4];

}