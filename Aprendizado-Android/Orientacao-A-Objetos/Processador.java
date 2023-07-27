public class Processador {
    public String marca;
    public String modelo;
    public double velocidade;
    public int numNucleos;

    public Processador(){


    }

    public Processador(String marca, String modelo, double velocidade, int numNucleos){
        this.marca = marca;
        this.modelo = modelo;
        this.velocidade = velocidade;
        this.numNucleos = numNucleos;
    }

    public double getVelocidadeParalela(){
        return (this.numNucleos*velocidade);
    }

    public String getDescricao(){
        return String.format("Processador: marca=%s, modelo=%s, velocidade=%.1fGHz, numNucleos=%d, velocidadeParalela=%.1fGHz.", this.marca, this.modelo, this.velocidade, this.numNucleos, getVelocidadeParalela());
    }
    
}