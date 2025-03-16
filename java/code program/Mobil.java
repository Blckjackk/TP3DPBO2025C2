public class Mobil extends Kendaraan {
    private int doors;
    private String fuelType;

    public Mobil(String brand, String model, int year, double price, int doors, String fuelType) {
        super(brand, model, year, price);
        this.doors = doors;
        this.fuelType = fuelType;
    }

    public int getDoors() {
        return doors;
    }

    public void setDoors(int doors) {
        this.doors = doors;
    }

    public String getFuelType() {
        return fuelType;
    }

    public void setFuelType(String fuelType) {
        this.fuelType = fuelType;
    }
}
