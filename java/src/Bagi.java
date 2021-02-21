public class Bagi {
    public float x = 0;
    public float y = 0;
    public Bagi(float a, float b) {
        x = a; y = b;
    }
    public int getResultBagi() {
        return Math.round(x) / Math.round(y);
    }
}
