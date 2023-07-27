public class Computador {
    String fabricante;
    Processador processador;
    Memoria memoria;
    Disco disco;

    public Computador(){

    }
    
    public Computador(String fabricante, Processador processador, Memoria memoria, Disco disco){
        this.fabricante = fabricante;
        this.processador = processador;
        this.memoria = memoria;
        this.disco = disco;
    }

    public String getDescricao(){
        return String.format("Computador da fabricante %s. %s  %s %s", this.fabricante, this.processador.getDescricao(), this.memoria.getDescricao(), this.disco.getDescricao());
    }
}