package segurosVida;

public class SeguroCasa extends Seguros{

	private int deducaoCasa;
	private int anoConstrucao;
	
	public SeguroCasa(int deducaoCasa, int anoConstrucao) {
		this.deducaoCasa = deducaoCasa;
		this.anoConstrucao = anoConstrucao;
	}
	public int getDeducaoCasa() {
		return deducaoCasa;
	}
	public void setDeducaoCasa(int deducaoCasa) {
		this.deducaoCasa = deducaoCasa;
	}
	public int getAnoConstrucao() {
		return anoConstrucao;
	}
	public void setAnoConstrucao(int anoConstrucao) {
		this.anoConstrucao = anoConstrucao;
	}
	
	public String imprimirSeguro() {
		return "Número Apolice de seguro de Casa: "+this.getNumApolice()+" Nome: "+this.getNome()+" Endereco: "+this.getEndereco()+" Valor: "+this.getValor()
				+" dedução da casa: " + this.getDeducaoCasa() + " Ano Construcao: "+ this.getAnoConstrucao();
	}
}
