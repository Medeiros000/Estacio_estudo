package org.estacio.tema3.modulo2;

public class Main2 {

    public static void main(String[] args) {
        // Extensão de Thread
        ThreadSubclasse novaT = new ThreadSubclasse (200);
        novaT.start ();
// Implementação de Runnable
        ThreadInterface novaT2 = new ThreadInterface (200);
        new Thread ( novaT2 ).start ();
    }
}
