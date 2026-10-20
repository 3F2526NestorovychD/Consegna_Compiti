public class GestoreContanti {
    private final CalcolaCostiResti calcolatore;

    public GestoreContanti(CalcolaCostiResti calcolatore) {
        this.calcolatore = calcolatore;
    }

    public CalcolaCostiResti getCalcolatore() {
        return calcolatore;
    }
}