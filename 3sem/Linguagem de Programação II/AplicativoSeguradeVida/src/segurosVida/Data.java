package segurosVida;

public class Data {
	private int dia;
	private int mes;
	private int ano;
	public int getDia() {
		return dia;
	}
	public void setDia(int dia) {
		this.dia = dia;
	}
	public int getMes() {
		return mes;
	}
	public void setMes(int mes) {
		this.mes = mes;
	}
	public int getAno() {
		return ano;
	}
	public void setAno(int ano) {
		this.ano = ano;
	}

	public String imprimirData() {
		return this.getDia()+"/"+
				this.getMes()+"/"+
				this.getAno();
	}
}
