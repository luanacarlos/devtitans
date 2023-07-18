import java.util.Scanner;
import java.util.ArrayList;
public class SomaColecoes {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        ArrayList<Integer> ListaInterna = new ArrayList<>();
        ArrayList<Integer> ResultadoFinal = new ArrayList<>();
        int entrada = 0;
        int soma = 0;
        while(entrada != -1){
            while(entrada != -1){
                ListaInterna.add(entrada);
                entrada = scan.nextInt();
                if(entrada == -1){
                    for(Integer numero : ListaInterna){
                        soma += numero;
                    }
                    ResultadoFinal.add(soma);
                }


            }
            ListaInterna.clear();
        soma = 0;
        entrada = scan.nextInt();
        }
        for(Integer resultado : ResultadoFinal){
            System.out.println(resultado);
        }
    }
}