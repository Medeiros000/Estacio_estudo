package org.estacio.modulo4;

public class Main {
    public static void main(String[] args) {
        System.out.println("Hello World!");
        @Autor(nome="Fulano", ano=2017)
        class Teste {
            public String toString() {
                return "Teste";
            }
        }
        System.out.println(Teste.class.getAnnotation(Autor.class).toString());
    }
}
