public class VendingMachine {
    private final Vano[] vani;
    private final GestoreContanti gestoreContanti;
    private final GestoreChiavetta gestoreChiavetta;
    private final Display display;

    public VendingMachine(int numeroVani) {
        vani = new Vano[numeroVani];
        CalcolaCostiResti calcolatoreContanti = new CalcolaCostiResti();
        CalcolaCostiResti calcolatoreChiavetta = new CalcolaCostiResti();
        gestoreContanti = new GestoreContanti(calcolatoreContanti);
        gestoreChiavetta = new GestoreChiavetta(calcolatoreChiavetta);
        display = new Display();
    }

    public Vano[] getVani() {
        return vani;
    }

    public GestoreContanti getGestoreContanti() {
        return gestoreContanti;
    }

    public GestoreChiavetta getGestoreChiavetta() {
        return gestoreChiavetta;
    }

    public Display getDisplay() {
        return display;
    }
}