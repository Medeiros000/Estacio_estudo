package org.estacio.tema2.modulo4;

import java.util.Calendar;

@Autor(nome = "Jr", ano = 2023)
public interface iPessoa {
    void atualizarNome ( String nome );
    String recuperarNome ( );
    String recuperarNacionalidade ( );
    String recuperarNaturalidade ( );
    void atualizarIdade ( Calendar data_inicio_existencia );
    int recuperarIdade ( );
    int retornaTipo ( );
    int calcularIdade ( Calendar data_inicio_existencia );
}