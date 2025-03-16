public class Motorcycle extends Kendaraan {
    private String type;
    private boolean hasWindshield;

    public Motorcycle(String brand, String model, int year, double price, String type, boolean hasWindshield) {
        super(brand, model, year, price);
        this.type = type;
        this.hasWindshield = hasWindshield;
    }

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public boolean hasWindshield() {
        return hasWindshield;
    }

    public void setHasWindshield(boolean hasWindshield) {
        this.hasWindshield = hasWindshield;
    }
}
