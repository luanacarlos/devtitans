public class Memoria {
    String marca;
    String tipo;
    double tamanho;
    double velocidade;
    int numPentes;

    public Memoria(){

    }
    
    public Memoria(String marca, String tipo, double tamanho, double velocidade, int numPentes){
        this.marca = marca;
        this.tipo = tipo;
        this.tamanho = tamanho;
        this.velocidade = velocidade;
        this.numPentes = numPentes;
    }

    public double getTamanhoTotal(){
        return (this.numPentes*tamanho);
    } 

    public double getVelocidadeParalela(){
        return (numPentes*velocidade);
    }

    public String getDescricao(){
        return String.format("Memoria: marca=%s, tipo=%s, tamanho=%.1fGB, velocidade=%.1fGHz, numPentes=%d, tamanhoTotal=%.1fGB, velocidadeParalela=%.1fGHz.", this.marca, this.tipo, this.tamanho, this.velocidade, this.numPentes, getTamanhoTotal(), getVelocidadeParalela());
    }
}