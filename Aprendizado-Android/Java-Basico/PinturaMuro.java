import java.util.Scanner;
public class PinturaMuro {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        float valor = scan.nextFloat();
        float preco = 100 + (36 * valor);
        System.out.printf("%.1f\n", preco);
        scan.close();

    }
}