package ex02;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class ex02JunitTest {

	@Test
	void test() {
		Invoice teste = null;
		teste = new Invoice(12, "Produto bom e barato", 10 , 10 );
		System.out.print(teste.getInvoiceAmount());
	}

}
