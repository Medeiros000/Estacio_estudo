package org.estacio.modulo3;

import java.rmi.server.UID;

public class Main {

    public static Medico medico1;

    public static void main(String[] args) {

//        Usuario paciente1 = new Paciente();
//        paciente1.setNome("João");
//        paciente1.setEmail("joao@modulo3.com");
//        paciente1.setTelefone("999999999");
//        paciente1.setSenha("123456");
//        ((Paciente) paciente1).setCpf("12345678910");
//        paciente1.setId(1);
//        ((Paciente) paciente1).setUid();//
//
//        Usuario medico1 = new Medico();
//        medico1.setNome("Maria");
//        medico1.setEmail("maria@modulo3.com");
//        medico1.setTelefone("888888888");
//        medico1.setSenha("123456");
//        ((Medico) medico1).setCrm("12345678910");
//        ((Medico) medico1).setEspecialidade("Cardiologista");
//        medico1.setId(2);
//        ((Medico) medico1).setUid();
//
//        Usuario[] cadastro = new Usuario[2];
//        cadastro[0] = paciente1;
//        cadastro[1] = medico1;

        Usuario[] cadastro = new Usuario[2];
        cadastro[0] = new Paciente(1, "João", "joao@modulo3.com", "999999999", "123456", new UID(), "12345678910");
        cadastro[1] = new Medico(2, "Maria", "maria@modulo3.com", "888888888", "123456", new UID(), "12345678910", "Cardiologista");
        for (Usuario usuario : cadastro) {
            System.out.println(usuario.getNome() + " é " + usuario.getClass().getSimpleName());
            System.out.println(usuario);
        }

    }
}
