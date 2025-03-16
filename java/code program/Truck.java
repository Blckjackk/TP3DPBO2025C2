public class Truck extends Kendaraan {
    
    private int kapasitas;
    private boolean gerbong;

    public Truck(String brand, String model, int year, double price, int kapasitas, boolean gerbong) {
        super(brand, model, year, price);
        this.kapasitas = kapasitas;
        this.gerbong = gerbong;
    }

    public int getKapasitas() {
        return kapasitas;
    }

    public void setKapasitas(int kapasitas) {
        this.kapasitas = kapasitas;
    }

    public boolean isGerbong() {
        return gerbong;
    }

    public void setGerbong(boolean gerbong) {
        this.gerbong = gerbong;
    }
}
