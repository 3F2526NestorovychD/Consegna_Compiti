public class Prodotto {
    private final String codice;
    private final String nome;
    private final int prezzoCent;

    public Prodotto(String codice, String nome, int prezzoCent) {
        this.codice = codice;
        this.nome = nome;
        this.prezzoCent = prezzoCent;
    }

    public String getCodice() {
        return codice;
    }

    public String getNome() {
        return nome;
    }

    public int getPrezzoCent() {
        return prezzoCent;
    }
}