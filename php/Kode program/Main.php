<?php
require_once "Showroom.php";

$showroom = new Showroom("Blackjack Showroom", "Bandung");

$showroom->addCar(new Mobil("Toyota", "Camry", 2022, 500000000, 4, "Bensin"));
$showroom->addCar(new Mobil("Mahaya", "Kembric", 2023, 400000, 6, "Solar"));

$showroom->addMotorcycle(new Motorcycle("Yamaha", "R15", 2021, 35000000, "Sport", true));
$showroom->addMotorcycle(new Motorcycle("Yamaha", "R25", 2022, 35000000, "Sport", true));

$showroom->addTruck(new Truck("Dino", "Butro", 2022, 650000000, 3, true));

$vehicles = [
    "Mobil" => $showroom->getCars(),
    "Motor" => $showroom->getMotorcycles(),
    "Truk" => $showroom->getTrucks()
];
?>

<!DOCTYPE html>
<html lang="id">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Showroom Blackjack</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
</head>
<body>

<div class="container mt-5">
    <h1 class="text-center">Showroom Blackjack</h1>
    <p class="text-center">Lokasi: <?= htmlspecialchars($showroom->getLokasi()); ?></p>

    <?php foreach ($vehicles as $type => $list): ?>
        <div class="mt-4">
            <h2><?= htmlspecialchars($type) ?></h2>
            <?php if (empty($list)): ?>
                <p class="text-muted">Tidak ada <?= strtolower(htmlspecialchars($type)) ?> tersedia.</p>
            <?php else: ?>
                <div class="row">
                    <?php foreach ($list as $vehicle): ?>
                        <div class="col-md-4">
                            <div class="card mb-4">
                                <div class="card-body">
                                    <h5 class="card-title"> <?= htmlspecialchars($vehicle->getBrand() . " " . $vehicle->getModel()) ?> </h5>
                                    <p class="card-text">Tahun: <?= htmlspecialchars($vehicle->getYear()) ?></p>
                                    <p class="card-text">Harga: Rp<?= number_format($vehicle->getPrice(), 0, ',', '.') ?></p>
                                    <?php 
                                    $properties = ["Doors", "FuelType", "Type", "Windshield", "Kapasitas", "Gerbong"];
                                    foreach ($properties as $prop) {
                                        $method = "get" . $prop;
                                        if (method_exists($vehicle, $method)) {
                                            $value = $vehicle->$method();
                                            echo "<p class='card-text'>" . htmlspecialchars($prop) . ": " . htmlspecialchars($value) . "</p>";
                                        }
                                    }
                                    ?>
                                </div>
                            </div>
                        </div>
                    <?php endforeach; ?>
                </div>
            <?php endif; ?>
        </div>
    <?php endforeach; ?>
</div>

<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js"></script>
</body>
</html>
