public class GestoreChiavetta {
    private final CalcolaCostiResti calcolatore;

    public GestoreChiavetta(CalcolaCostiResti calcolatore) {
        this.calcolatore = calcolatore;
    }

    public CalcolaCostiResti getCalcolatore() {
        return calcolatore;
    }
}