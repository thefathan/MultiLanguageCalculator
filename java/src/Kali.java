public class Kali {
    public float x = 0;
    public float y = 0;
    public Kali(float a, float b) {
        x = a; y = b;
    }
    public int getResultKali() {
        return Math.round(x) * Math.round(y);
    }
}
