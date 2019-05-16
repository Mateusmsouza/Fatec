package segurosVida;

public class SeguroAuto extends Seguros{

	private int deducaoAutomovel;
	private int numLicenca;
	private String estado;
	private String modelo;
	private int ano;
	
	public SeguroAuto(int deducaoAutomovel, int numLicenca, String estado, String modelo, int ano) {
		this.deducaoAutomovel = deducaoAutomovel;
		this.numLicenca = numLicenca;
		this.estado = estado;
		this.modelo = modelo;
		this.ano = ano;
		
	}
	
	public int getDeducaoAutomovel() {
		return deducaoAutomovel;
	}
	public void setDeducaoAutomovel(int deducaoAutomovel) {
		this.deducaoAutomovel = deducaoAutomovel;
	}
	public int getNumLicenca() {
		return numLicenca;
	}
	public void setNumLicenca(int numLicenca) {
		this.numLicenca = numLicenca;
	}
	public String getEstado() {
		return estado;
	}
	public void setEstado(String estado) {
		this.estado = estado;
	}
	public String getModelo() {
		return modelo;
	}
	public void setModelo(String modelo) {
		this.modelo = modelo;
	}
	public int getAno() {
		return ano;
	}
	public void setAno(int ano) {
		this.ano = ano;
	}
	
	public String imprimirSeguro() {
		return "Número Apolice: "+this.getNumApolice()+" Nome: "+this.getNome()+" Endereco: "+this.getEndereco()+" Valor: "+this.getValor()+
				" Deducao automovel: "+this.getDeducaoAutomovel() + " numLicenca: "+ this.getNumLicenca();
		
	}
}
