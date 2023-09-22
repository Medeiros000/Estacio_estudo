package org.estacio.modulo3;

import java.rmi.server.UID;

public class Medico extends Usuario{

    private UID uid;
    private String crm;
    private String especialidade;

    public Medico(int id, String nome, String email, String telefone, String senha, UID uid, String crm, String especialidade) {
        super(id, nome, email, telefone, senha);
        this.uid = uid;
        this.crm = crm;
        this.especialidade = especialidade;
    }

    public Medico() {
    }

    public UID getUid() {
        return uid;
    }

    public void setUid(UID uid) {
        this.uid = uid;
    }

    public String getCrm() {
        return crm;
    }

    public void setCrm(String crm) {
        this.crm = crm;
    }

    public String getEspecialidade() {
        return especialidade;
    }

    public void setEspecialidade(String especialidade) {
        this.especialidade = especialidade;
    }

    @Override
    public String toString() {
        return "Medico" +
                "\nUid: " + uid +
                "\nCrm: " + crm +
                "\nEspecialidade: " + especialidade +
                super.toString();
    }
}
