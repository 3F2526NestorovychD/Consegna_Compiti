public class VendingMachine {
    private Vano[] vani;
    private processPayment cassa;
    private Display schermo;

    public VendingMachine(){
        vani = new Vano[10]; 
        cassa = new processPayment;
        schermo = new Display;
    }

    public void caricaVano(int posizione, Prodotto p, int quantita){
        vani[posizione] = new Vano(p, quantita);
    }

    public void inserisciMoneta(int val){

    }

    public Prodotto selezionaVano(int posizione){
        return null; //per il momento
    }

    public int annullaTransazione(){
        return 0; //per il momento
    }
}