package org.estacio;

import java.util.Calendar;

public class Fisica extends Pessoa {


    public Fisica(String nome, Calendar data_nasc, String cpf, String rg, String nacionalidade, String naturalidade) {
        super(nome, data_nasc, cpf, rg, nacionalidade, naturalidade);
    }

//    @Override
//    public String toString() {
//        // toString modo Json
//        return ("{\nnome=" + super.getNome() +
//                "\ndata_nasc = " + super.getData_nasc() +
//                "\ncpf= " + super.getCpf() +
//                "\nrg= " + super.getRg() +
//                "\nnacionalidade= " + super.getNacionalidade() +
//                "\nnaturalidade= " + super.getNaturalidade() + "\n}");
//    }
}
