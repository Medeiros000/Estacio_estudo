package org.estacio.modulo2;

import java.util.Calendar;
public abstract class Pessoa {

    private String nome;
    private Calendar data_nasc;
    private String nacionalidade;
    private String naturalidade;

    public Pessoa(String nome, Calendar data_nasc, String nacionalidade, String naturalidade) {
        this.nome = nome;
        this.data_nasc = data_nasc;
        this.nacionalidade = nacionalidade;
        this.naturalidade = naturalidade;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    public Calendar getData_nasc() {
        return data_nasc;
    }
    public void setData_nasc(Calendar data_nasc) {
        this.data_nasc = data_nasc;
    }
    public String getNacionalidade() {
        return nacionalidade;
    }
    public void setNacionalidade(String nacionalidade) {
        this.nacionalidade = nacionalidade;
    }
    public String getNaturalidade() {
        return naturalidade;
    }
    public void setNaturalidade(String naturalidade) {
        this.naturalidade = naturalidade;
    }
    @Override
    public String toString() {
        return "Pessoa{" +
                "\nnome='" + nome + '\'' +
                ", \ndata_nasc=" + data_nasc +
                ", \nnacionalidade='" + nacionalidade + '\'' +
                ", \nnaturalidade='" + naturalidade + '\'' +
                "\n}";
    }
}
