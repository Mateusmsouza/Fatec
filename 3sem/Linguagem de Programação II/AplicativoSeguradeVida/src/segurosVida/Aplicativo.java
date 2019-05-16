package segurosVida;

import java.util.ArrayList;
import java.util.List;

public class Aplicativo {

	private List<Seguros> seguros = new ArrayList<Seguros>();

	
	
	public void segurosAuto(int deducaoAutomovel, int numLicenca, String estado, String modelo, int ano) {
		this.seguros.add(new SeguroAuto(deducaoAutomovel, numLicenca, estado, modelo, ano));
	}
	
	public void segurosCasa(int deducaoCasa, int anoConstrucao) {
		this.seguros.add(new SeguroCasa(deducaoCasa, anoConstrucao));
	}
	
	public void segurosVida(String beneficiario, Data datanasc) {
		this.seguros.add(new SeguroVida(beneficiario, datanasc));
	}
	
	public Seguros search(int numApolice) {
		for(Seguros seguro:seguros) if(seguro.getNumApolice() == numApolice) return seguro;
		return null;
	}
}
