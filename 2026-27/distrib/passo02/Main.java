public class Main {
    public static void main(String[] args) {
        VendingMachine distributore = new VendingMachine(10);
        distributore.getVani()[0] = new Vano( new Prodotto("A01", "Snack", 150), 5); //da ridefinire
    }
}