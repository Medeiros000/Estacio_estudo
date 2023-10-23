package org.estacio.exemplos.threadComportada;

public class ThreadMain {
    public static void main(String[] args) throws Exception {
        Thread thr2 = new Thread (new Execution2());
        Thread thr1 = new Thread (new Execution1(thr2));
        System.out.println ("Iniciando a thread 1...");
        thr1.start();
        System.out.println ("Esperando a thread 1 voltar...");
        thr1.join();
        System.out.println ("Esperando a thread 2 voltar...");
        thr2.join();
        System.out.println ("Fim.");
    }
}

