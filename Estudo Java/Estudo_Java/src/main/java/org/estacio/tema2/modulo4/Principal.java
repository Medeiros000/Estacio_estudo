package org.estacio.tema2.modulo4;

import java.util.Calendar;

import static java.util.Calendar.NOVEMBER;

public class Principal {
    //Atributos
    private static Identificador refIdt;
    private static iPessoa refiPessoa;
    //Métodos
    public static void main (String[] args) {
        refIdt = new Pessoa ( );
        refIdt.atualizarID("M-1020/001");
        System.out.println ( refIdt.recuperarID() );
        //refIdt.atualizarNome ("João Batista");
        refiPessoa = (Pessoa) refIdt;
        refiPessoa.atualizarNome("João Batista");
        Pessoa p = (Pessoa) refiPessoa;
        Calendar data_inicio_existencia = Calendar.getInstance();
        data_inicio_existencia.set(1990,NOVEMBER,01);
        p.atualizarIdade(data_inicio_existencia);
        System.out.println(p);
        System.out.println(refiPessoa.recuperarNome());
        System.out.println(refIdt.getClass().getSimpleName());
        System.out.println(refiPessoa.getClass().getSimpleName());
    }
}