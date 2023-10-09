package org.estacio.modulo4;

import java.util.Calendar;

import static java.util.Calendar.*;

public class Pessoa implements iPessoa , Identificador {
    //Atributos
    int idade;
    String nome = "" , naturalidade = "" , nacionalidade = "" , identificador = "";
    //Métodos
    public void atualizarNome ( String nome ) {
        if ( !nome.isBlank() )
            this.nome = nome;
        else
            System.out.println ( "ERRO: nome em branco!" );
    }
    public String recuperarNome ( ) {
        return this.nome;
    }
    public void atualizarID ( String identificador ) {
        this.identificador = identificador;
    }
    public String recuperarID ( ) {
        return this.identificador;
    }
    public void formatarID ( int id ){
        this.identificador = String.valueOf (id);
    }
    public boolean validarID (String id ) {
        if ( id.isBlank() || id.isEmpty() )
            return false;
        else
            return true;
    }
    public String recuperarNacionalidade ( ) {
        return this.nacionalidade;
    }
    public String recuperarNaturalidade ( ) {
        return this.naturalidade;
    }
    public void atualizarIdade ( Calendar data_inicio_existencia ) {
        this.idade = calcularIdade ( data_inicio_existencia );
    }
    public int recuperarIdade ( ) {
        return this.idade;
    }
    public int retornaTipo ( ) {
        return 0;
    }
    public int calcularIdade ( Calendar data_inicio_existencia ){
        int lapso;
        Calendar hoje = Calendar.getInstance();
        lapso = hoje.get(YEAR) - data_inicio_existencia.get(YEAR);
        if ( ( data_inicio_existencia.get(MONTH) > hoje.get(MONTH) ) ||	( data_inicio_existencia.get(MONTH) == hoje.get(MONTH) && data_inicio_existencia.get(DATE) > hoje.get(DATE) ) )
            lapso--;
        return lapso;
    }

    @Override
    public String toString() {
        return "Pessoa{" +
                "idade=" + idade +
                ", nome='" + nome + '\'' +
                ", naturalidade='" + naturalidade + '\'' +
                ", nacionalidade='" + nacionalidade + '\'' +
                ", identificador='" + identificador + '\'' +
                '}';
    }
}