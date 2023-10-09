package org.estacio.modulo2;

import java.util.Calendar;
import java.util.Date;

public class Fisica extends Pessoa {
    private String cpf;

    public Fisica(String nome, String cpf, Calendar data_nasc, String nacionalidade, String naturalidade) {
        super(nome, data_nasc, nacionalidade, naturalidade);
        this.cpf = cpf;
    }

    public String getCpf() {
        return cpf;
    }
    public void setCpf(String cpf) {
        this.cpf = cpf;
    }
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

