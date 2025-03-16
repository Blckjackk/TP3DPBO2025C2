import java.util.ArrayList;
import java.util.List;

public class Showroom {
    private String nama;
    private String lokasi;
    private List<Truck> truk;
    private List<Motorcycle> motor;
    private List<Mobil> mobil;

    public Showroom(String nama, String lokasi) {
        this.nama = nama;
        this.lokasi = lokasi;
        this.truk = new ArrayList<>();
        this.motor = new ArrayList<>();
        this.mobil = new ArrayList<>();
    }

    public String getNama() {
        return nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getLokasi() {
        return lokasi;
    }

    public void setLokasi(String lokasi) {
        this.lokasi = lokasi;
    }

    public void addTruck(Truck t) {
        truk.add(t);
    }

    public void addMotorcycle(Motorcycle m) {
        motor.add(m);
    }

    public void addCar(Mobil m) {
        mobil.add(m);
    }

    public void printMotorcycles() {
        System.out.println("Daftar Motor di Showroom " + nama + ":");
        if (motor.isEmpty()) {
            System.out.println("Tidak ada motor di showroom.");
            return;
        }
        for (int i = 0; i < motor.size(); i++) {
            Motorcycle m = motor.get(i);
            System.out.println("Motor " + (i + 1) + ":");
            System.out.println("Brand: " + m.getBrand());
            System.out.println("Model: " + m.getModel());
            System.out.println("Year: " + m.getYear());
            System.out.println("Price: " + m.getPrice());
            System.out.println("Type: " + m.getType());
            System.out.println("Has Windshield: " + (m.hasWindshield() ? "Yes" : "No"));
            System.out.println("--------------------");
        }
    }

    public void printTrucks() {
        System.out.println("Daftar Truk di Showroom " + nama + ":");
        if (truk.isEmpty()) {
            System.out.println("Tidak ada truk di showroom.");
            return;
        }
        for (int i = 0; i < truk.size(); i++) {
            Truck t = truk.get(i);
            System.out.println("Truk #" + (i + 1) + ":");
            System.out.println("Brand: " + t.getBrand());
            System.out.println("Model: " + t.getModel());
            System.out.println("Year: " + t.getYear());
            System.out.println("Price: " + t.getPrice());
            System.out.println("Kapasitas: " + t.getKapasitas() + " ton");
            System.out.println("Gerbong: " + (t.isGerbong() ? "Yes" : "No"));
            System.out.println("--------------------");
        }
    }

    public void printCars() {
        System.out.println("Daftar Mobil di Showroom " + nama + ":");
        if (mobil.isEmpty()) {
            System.out.println("Tidak ada mobil di showroom.");
            return;
        }
        for (int i = 0; i < mobil.size(); i++) {
            Mobil m = mobil.get(i);
            System.out.println("Mobil #" + (i + 1) + ":");
            System.out.println("Brand: " + m.getBrand());
            System.out.println("Model: " + m.getModel());
            System.out.println("Year: " + m.getYear());
            System.out.println("Price: " + m.getPrice());
            System.out.println("Doors: " + m.getDoors());
            System.out.println("Fuel Type: " + m.getFuelType());
            System.out.println("--------------------");
        }
    }

    public void printAllVehicles() {
        System.out.println("Showroom: " + nama + " | Lokasi: " + lokasi);
        System.out.println("=================================");
        printMotorcycles();
        System.out.println();
        printTrucks();
        System.out.println();
        printCars();
        System.out.println("=================================");
    }
}
