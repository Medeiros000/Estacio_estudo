package org.estacio;

import java.util.Calendar;


public class Main {
    //Atributos
    private static Pessoa p1, p3;
    private static Fisica p2, p4;

    public static String teste = "teste louco";
    //Métodos
    public static void main(String[] args) {
        Calendar data_nasc = Calendar.getInstance();
        data_nasc.set(1980, Calendar.NOVEMBER, 23);
        p1 = new Fisica ( "Marco Antônio" , data_nasc , "365.586.875-45" , null , "Brasil" , "Rio de Janeiro" );
        p2 = new Fisica ( "Marco Antônio" , data_nasc , "365.586.875-45" , null , "Brasil" , "Rio de Janeiro" );
        p3 = new Pessoa ( "Classe Pessoa" , null , null , null , "Brasil" , "Rio de Janeiro");
        p4 = new Fisica ( "Santos Dumont" , null , null , null , "Brasil" , "Rio de Janeiro");
        p4.setCpf("888.888.888-88");
        if (p1 instanceof Pessoa){
            System.out.println("p1 é instância do tipo Pessoa.");
        } else {
            System.out.println("p1 não é instância do tipo Pessoa.");
        }
        if (p2 instanceof Pessoa){
            System.out.println("p2 é instância do tipo Pessoa.");
        } else {
            System.out.println("p2 não é instância do tipo Pessoa.");
        }
        if(p3 instanceof Pessoa) {
            System.out.println("p3 é instância do tipo Pessoa.");
        } else {
            System.out.println("p3 não é instância do tipo Pessoa.");
        }
        if(p3 instanceof Fisica) {
            System.out.println("p3 é instância do tipo Física.");
        } else {
            System.out.println("p3 não é instância do tipo Física.");
        }
        System.out.println(p4.toString());
        System.out.println(teste.toString());
    }

}