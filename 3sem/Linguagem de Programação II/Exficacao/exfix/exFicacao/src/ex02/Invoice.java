package ex02;

public class Invoice {
		private int numeroItemFaturado;
		private String descricaoItem;
		private int quantidadeComprada;
		private float precoUnitario;
		
		// construtor
		Invoice(int numItFaturado, String descricaoItem, int quantComprada, float precoUnit){
			if (precoUnit > 0) {
				this.precoUnitario = precoUnit;
			}else {
				this.precoUnitario = 0;
			}
			if (quantComprada > 0) {
				this.quantidadeComprada = quantComprada;
			}else {
				this.quantidadeComprada = 0;
			}
		}

		public int getNumeroItemFaturado() {
			return numeroItemFaturado;
		}

		public void setNumeroItemFaturado(int numeroItemFaturado) {
			this.numeroItemFaturado = numeroItemFaturado;
		}

		public String getDescricaoItem() {
			return descricaoItem;
		}

		public void setDescricaoItem(String descricaoItem) {
			this.descricaoItem = descricaoItem;
		}

		public int getQuantidadeComprada() {
			return quantidadeComprada;
		}

		public void setQuantidadeComprada(int quantidadeComprada) {
			this.quantidadeComprada = quantidadeComprada;
		}

		public float getPrecoUnitario() {
			return precoUnitario;
		}

		public void setPrecoUnitario(float precoUnitario) {
			this.precoUnitario = precoUnitario;
		}
		
		public double getInvoiceAmount() {
			return this.precoUnitario * this.quantidadeComprada;
		}
}
