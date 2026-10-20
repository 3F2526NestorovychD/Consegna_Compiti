public class Vano {

    private Prodotto prodotto;
    private int quantita;

    public Vano(Prodotto p, int quantita){
        this.prodotto = p;
        this.quantita = quantita;
    }

    public void setProdotto(Prodotto p, int quantita){

    }

    public boolean isVuoto (){
        return true;
    }
    public Prodotto erogaProdotto(){
        return null;
    }

}