package estatisticasPrecipitacao;

import static org.junit.Assert.*;

import java.util.ArrayList;
import java.util.List;
import java.util.Random;

import org.junit.Test;

public class EPtest {

	@Test
	public void test() {

		Random rand = new Random();
		
		List<day> days = new ArrayList<day>();
		List<month> months = new ArrayList<month>();
		for (int a = 1; a <= 12; a += 1) {
			if (a == 1) months.add(new month("Janeiro", 31, null));
			if (a == 2) months.add(new month("Fevereiro", 31, null));
			if (a == 3) months.add(new month("Março", 31, null));
			if (a == 4) months.add(new month("Abril", 30, null));
			if (a == 5) months.add(new month("Maio", 31, null));
			if (a == 6) months.add(new month("Junho", 30, null));
			if (a == 7) months.add(new month("Julho", 31, null));
			if (a == 8) months.add(new month("Agosto", 30, null));
			if (a == 9) months.add(new month("Setembro", 31, null));
			if (a == 10) months.add(new month("Outubro", 31, null));
			if (a == 11) months.add(new month("Novembro", 30, null));
			if (a == 12) months.add(new month("Dezembo", 31, null));
			
		}
		
		for(month mes : months) {
			
			for (int i=0; i <= mes.getHowManyDays(); i++) {
				days.add(new day(rand.nextInt( 4 )) );
			}
			mes.setDays(days);
			days.clear();
		}
		year ano = new year(1990, null);
		ano.setMonths(months);
		
		// Total de precipitação para cada mês do ano
		// maior e menor dia
		day maiorPrec = new day((float) 0);
		day menorPrec = new day((float) 99);;
		for(month mes: ano.getMonths()) {
			mes.getAllPrecipitacao();
			
			for(day dia: mes.getDays()) {
				if (dia.getPrecipitacaoOfDay() > maiorPrec.getPrecipitacaoOfDay()) maiorPrec.setPrecipitacaoOfDay(dia.getPrecipitacaoOfDay());
				if (dia.getPrecipitacaoOfDay() < menorPrec.getPrecipitacaoOfDay()) menorPrec.setPrecipitacaoOfDay(dia.getPrecipitacaoOfDay());

			}
		}
		
	}

}
