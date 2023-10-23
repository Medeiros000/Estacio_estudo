package org.estacio.tema4;

//Classe
public class Controle {
    //Atributo
    private int contador = 0;

    //Métodos
    public Controle(int contador) {
        this.contador = contador;
    }

    public synchronized void decrementa() {
        this.contador--;
    }

    public synchronized int getControle() {
        return this.contador;
    }
}
