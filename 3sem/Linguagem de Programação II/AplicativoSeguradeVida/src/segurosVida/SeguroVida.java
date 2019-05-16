package segurosVida;

public class SeguroVida extends Seguros {

	private String beneficiario;
	private Data datanasc;
	
	public SeguroVida(String beneficiario, Data datanasc) {
		this.beneficiario = beneficiario;
		this.datanasc = datanasc;
	}
	public String getBeneficiario() {
		return beneficiario;
	}
	public void setBeneficiario(String beneficiario) {
		this.beneficiario = beneficiario;
	}
	public Data getDatanasc() {
		return datanasc;
	}
	public void setDatanasc(Data datanasc) {
		this.datanasc = datanasc;
	}
	
	
	public String imprimirSeguro() {
		return "Número Apolice de Seguro de Vida: "+(this.getNumApolice())+" Nome: "+(this.getNome()+" Endereco: "+(this.getEndereco()+" Valor: "+(this.getValor()))
				+" Beneficiário: "+this.getBeneficiario()+" Data de Nascimento: "+this.getDatanasc());
	}
}
