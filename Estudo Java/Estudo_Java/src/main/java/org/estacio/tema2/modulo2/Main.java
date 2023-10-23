package org.estacio.tema2.modulo2;

import java.text.SimpleDateFormat;
import java.util.Calendar;

public class Main {
    //Atributos
    private static Pessoa p1, p3;
    private static Fisica p2, p4;

    public static String teste = "teste louco";
    //Métodos
    public static void main(String[] args) {
        Calendar data_nasc = Calendar.getInstance();
        data_nasc.set(1999,10,10);

        p1 = new Fisica ( "Regis Antonio" , "36558687545", data_nasc,   "Brasil" , "Rio de Janeiro" );
        p2 = new Fisica ( "Rone Andrews" ,"36558687545" , data_nasc,   "Brasil" , "Rio de Janeiro" );
        p3 = new Juridica ( "Antonio Medeiros" , "96879646531640" , null ,  "Brasil" , "Rio de Janeiro");
        p4 = new Fisica ( "Santos Dumont" , "000000001" , null ,  "Brasil" , "Rio de Janeiro");
        p4.setCpf("888.888.888-88");
//        if (p1 instanceof Pessoa){
//            System.out.println("p1 é instância do tipo Pessoa.");
//        } else {
//            System.out.println("p1 não é instância do tipo Pessoa.");
//        }
//        if (p2 instanceof Pessoa){
//            System.out.println("p2 é instância do tipo Pessoa.");
//        } else {
//            System.out.println("p2 não é instância do tipo Pessoa.");
//        }
//        if(p3 instanceof Pessoa) {
//            System.out.println("p3 é instância do tipo Pessoa.");
//        } else {
//            System.out.println("p3 não é instância do tipo Pessoa.");
//        }
//        if(p3 instanceof Fisica) {
//            System.out.println("p3 é instância do tipo Física.");
//        } else {
//            System.out.println("p3 não é instância do tipo Física.");
//        }
//        System.out.println(p4.toString());
//        System.out.println(teste.toString());

        Pessoa[] pessoas = new Pessoa[4];
        pessoas[0] = p1;
        pessoas[1] = p2;
        pessoas[2] = p3;
        pessoas[3] = p4;

        for(Pessoa pessoa : pessoas) {
            System.out.println(pessoa.getNome() + " é Pessoa " + pessoa.getClass().getSimpleName());
            SimpleDateFormat df = new SimpleDateFormat("dd/MM/yyyy");
            if (pessoa.getData_nasc() != null) {
                System.out.println("Data de nascimento: " + df.format(pessoa.getData_nasc().getTime()));
            }
            System.out.println(pessoa.toString());
        }
    }

}