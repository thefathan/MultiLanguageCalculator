public class Plus {
    public float x = 0;
    public float y = 0;
    public Plus(float a, float b) {
        x = a; y = b;
    }
    public int getResultPlus() {
        return Math.round(x) + Math.round(y);
    }
}
