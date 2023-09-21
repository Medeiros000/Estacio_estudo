package org.estacio.modulo3;

import java.rmi.server.UID;

public class Paciente extends Usuario {

    private UID uid;
    private String cpf;

    public Paciente(int id, String nome, String email, String telefone, String senha, UID uid, String cpf) {
        super(id, nome, email, telefone, senha);
        this.uid = uid;
        this.cpf = cpf;
    }

    public Paciente() {
    }

    public void setUid(UID uid) {
        this.uid = uid;
    }
    public void setCpf(String cpf) {
        this.cpf = cpf;
    }
    public UID getUid() {
        return uid;
    }
    public String getCpf() {
        return cpf;
    }

    @Override
    public String toString() {
        return  "\nPaciente" +
                "\nUid: " + uid +
                "\nCpf: " + cpf +
                 super.toString();
    }
}
