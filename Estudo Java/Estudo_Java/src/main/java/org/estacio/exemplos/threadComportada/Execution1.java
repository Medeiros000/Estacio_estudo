package org.estacio.exemplos.threadComportada;

public class Execution1 implements Runnable {
    private Thread second;
    public Execution1(Thread second) {
        this.second = second;
    }
    public void run () {
        System.out.println ("thread 1");
        second.start();
    }

}
