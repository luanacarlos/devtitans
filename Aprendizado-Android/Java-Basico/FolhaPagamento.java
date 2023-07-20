import java.util.Scanner;
public class FolhaPagamento {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        float valorHora = scan.nextFloat();
        float horasTrabalhadas = scan.nextFloat();
        float salarioBruto = (valorHora*horasTrabalhadas);
        float parteDoLiao = (float)(0.11*salarioBruto);
        float apusentaduria = (float)(0.08*salarioBruto);
        float descontos = parteDoLiao + apusentaduria;
        float sobrou = salarioBruto - descontos;
        System.out.printf("Salario bruto: R$%.2f\nIR: R$%.2f\nINSS: R$%.2f\nTotal de descontos: R$%.2f\nSalario liquido: R$%.2f\n", salarioBruto, parteDoLiao, apusentaduria, descontos, sobrou);
        scan.close();

    }
}