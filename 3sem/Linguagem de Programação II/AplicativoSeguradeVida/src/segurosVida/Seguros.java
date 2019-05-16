package segurosVida;

public abstract class Seguros {

	private int numApolice;
	private String nome;
	private Endereco endereco;
	private float valor;
	private float premio;
	public int getNumApolice() {
		return numApolice;
	}
	public void setNumApolice(int numApolice) {
		this.numApolice = numApolice;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public Endereco getEndereco() {
		return endereco;
	}
	public void setEndereco(Endereco endereco) {
		this.endereco = endereco;
	}
	public float getValor() {
		return valor;
	}
	public void setValor(float valor) {
		this.valor = valor;
	}
	public float getPremio() {
		return premio;
	}
	public void setPremio(float premio) {
		this.premio = premio;
	}
	
	public String imprimirSeguro() {
		return "Número Apolice: "+this.getNumApolice()+" Nome: "+this.getNome()+" Endereco: "+this.getEndereco()+" Valor: "+this.getValor();
	}
}
