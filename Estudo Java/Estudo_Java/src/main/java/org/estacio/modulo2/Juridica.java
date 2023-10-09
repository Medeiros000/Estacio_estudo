package org.estacio.modulo2;

import java.util.Calendar;
import java.util.Date;

public class Juridica extends Pessoa{
    private String cnpj;

    public Juridica(String nome, String cnpj, Calendar data_nasc, String nacionalidade, String naturalidade) {
        super(nome, data_nasc, nacionalidade, naturalidade);
        this.cnpj = cnpj;
    }

    public String getCnpj() {
        return cnpj;
    }
    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }
}
