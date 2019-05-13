package estatisticasPrecipitacao;

import java.util.ArrayList;
import java.util.List;

public class year {
	
	private int numYear;
	private List<month> months = new ArrayList<month>();
	
	year(int numYear, ArrayList<month> months) {
		this.numYear = numYear;
		this.months = months;
	}

	public int getNumYear() {
		return numYear;
	}

	public void setNumYear(int numYear) {
		this.numYear = numYear;
	}

	public List<month> getMonths() {
		return months;
	}

	public void setMonths(List<month> months) {
		this.months = months;
	}
}
