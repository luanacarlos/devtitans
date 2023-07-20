import java.util.Scanner;
public class AsciiArt {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int quantidade = scan.nextInt();
        String asteriscos = "";
        String espacos = "";
        System.out.println(asteriscos);
        int iterador = 0;
        int aux = iterador;
        while(quantidade > 0){
            asteriscos = "";
            espacos = "";
            for(int i = 0; i < quantidade; i ++){
                asteriscos += "*";
            }
            for (int j = 0; aux > j; j++) {
                espacos += " ";
            }
            aux++;
             System.out.print(asteriscos);
             System.out.print(espacos);
             System.out.print(espacos);
             System.out.printf(asteriscos+"\n");

            quantidade--;
        }
        scan.close();
    }
}