package hello;

import static spark.Spark.get;

import java.util.List;

import com.google.gson.Gson;

public class Controller {
	
	private Model model;
	
	
	public Controller(Model model){
		this.model = model;
	}
	
	public void buscarCarro(){
		
		get("/carro/main/:modelo/:marca/:cor", (req, res) -> {
			System.out.print("Buscar Carro Acionado.");
			Especificacao espec = new Especificacao(req.params(":modelo"), req.params(":marca"), req.params(":cor"));	
			List<Carro> carrosEncontrados = model.buscarEspecificacao(espec);	
			return new Gson().toJson(carrosEncontrados);
			
		});
	}
	
	
	public void buscarCarroPlaca(){
		get("/carro/main/:placa", (req, res) -> {
			System.out.print("Buscar Carro Placa Acionado.");
			
			Carro carrosEncontrado = model.buscarPlaca(req.params(":placa"));	
			return new Gson().toJson(carrosEncontrado);
			
		});
	}
	
	public void buscarCarroModelo(){
		get("/carro/modelo/:modelo", (req, res) -> {
			System.out.print("Buscar Modelo Acionado.");
			
			List<Carro> carrosEncontrado = model.buscarModelo(req.params(":modelo"));	
			return new Gson().toJson(carrosEncontrado);
			
		});
	}
	
	public void buscarCarroMarca() {
		
		get("/carro/marcasearch/:marca", (req, res) -> {
			System.out.print("Buscar Marca Acionado.");
			List<Carro> carrosEncontrado = model.buscarMarca(req.params(":marca"));
			return new Gson().toJson(carrosEncontrado);
	});
	}
	
	public void adCar() {
		get("/newcar", (req, res) -> {
			return "<h1>pau no cu</h1>";
		});
	}
}
