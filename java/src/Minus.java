public class Minus {
    public float x = 0;
    public float y = 0;
    public Minus(float a, float b) {
        x = a; y = b;
    }
    public int getResultMinus() {
        return Math.round(x) - Math.round(y);
    }
}
