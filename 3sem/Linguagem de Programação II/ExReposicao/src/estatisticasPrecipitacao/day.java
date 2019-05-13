package estatisticasPrecipitacao;

public class day {
	private double precipitacaoOfDay;
	
	day(double precipitacaoOfDay){
		if (precipitacaoOfDay >= 0) {
			this.precipitacaoOfDay = precipitacaoOfDay;
		}
	}

	public double getPrecipitacaoOfDay() {
		return precipitacaoOfDay;
	}

	public void setPrecipitacaoOfDay(double d) {
		this.precipitacaoOfDay = d;
	}
}
