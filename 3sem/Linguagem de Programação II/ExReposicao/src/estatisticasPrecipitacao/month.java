package estatisticasPrecipitacao;

import java.util.ArrayList;
import java.util.List;


public class month {
	private String nameMonth;
	private int HowManyDays;
	private List<day> days = new ArrayList<day>(); 
	
	month(String nameMonth,int HowManyDays, List<day> days){
		this.nameMonth = nameMonth;
		this.HowManyDays =  HowManyDays;
		this.days = days;
	}

	public String getNameMonth() {
		return nameMonth;
	}

	public void setNameMonth(String nameMonth) {
		this.nameMonth = nameMonth;
	}

	public int getHowManyDays() {
		return HowManyDays;
	}

	public void setHowManyDays(int howManyDays) {
		HowManyDays = howManyDays;
	}

	public List<day> getDays() {
		return days;
	}

	public void setDays(List<day> days) {
		this.days = days;
	}
	
	public Double getAllPrecipitacao() {
		return this.days.stream().mapToDouble(day::getPrecipitacaoOfDay).sum();
	}
}
