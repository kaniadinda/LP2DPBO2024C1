<?php
    // import file
    require ('Produk.php');
    
    // membuat list of objek produk
    $arrayprdk = array(); 
    # Intansiasi objek 1
    $prdk1 = new Produk();
    // inisialisasi menggunakan method setter
    $prdk1->set_id("1");
    $prdk1->set_name("Jas");
    $prdk1->set_brand('Screamous');
    $prdk1->set_price("Rp 150.000");
    $prdk1->set_size("M");
    $prdk1->set_material("Katun");
    $prdk1->set_gender("L");
    $prdk1->set_color("Hitam");
    $prdk1->set_sleevetype("Panjang");
    array_push($arrayprdk, $prdk1);
    
    # Intansiasi objek 2
    $prdk2 = new Produk();
    // inisialisasi menggunakan setter
    $prdk2->set_id("2");
    $prdk2->set_name("Kaos");
    $prdk2->set_brand('Lawless');
    $prdk2->set_price("Rp 200.000");
    $prdk2->set_size("L");
    $prdk2->set_material("Satin");
    $prdk2->set_gender("P");
    $prdk2->set_color("Putih");
    $prdk2->set_sleevetype("Pendek");
    array_push($arrayprdk, $prdk2);
    
    # Intansiasi objek 3
    $prdk3 = new Produk();
    // inisialisasi menggunakan setter
    $prdk3->set_id("3");
    $prdk3->set_name("Jaket");
    $prdk3->set_brand('Wadezig');
    $prdk3->set_price("Rp 250.000");
    $prdk3->set_size("XL");
    $prdk3->set_material("Linen");
    $prdk3->set_gender("P");
    $prdk3->set_color("Hitam");
    $prdk3->set_sleevetype("Panjang");
    array_push($arrayprdk, $prdk3);
    
    // menampilkan isi list of objek dalam tabel
    echo '<center>List Busana<br><br>';
    // judul kolom tabel
    echo "<center><table border='3'>";
            echo "<tr>
                <th> ID </th>
                <th> Nama </th>
                <th> Brand </th>
                <th> Harga </th>
                <th> Ukuran </th>
                <th> Material </th>
                <th> Gender </th>
                <th> Warna </th>
                <th> Tipe Lengan </th>
                </tr>";
    // isi kolom tabel
    for ($i=0; $i < count($arrayprdk); $i++)
    {
    echo "<tr><td>";
                    echo $arrayprdk[$i]->get_id();
                    echo "</td><td>";
                    echo $arrayprdk[$i]->get_name();
                    echo "</td><td>";
                    echo $arrayprdk[$i]->get_brand();
                    echo "</td><td>";
                    echo $arrayprdk[$i]->get_price();
                    echo "</td><td>";
                    echo $arrayprdk[$i]->get_size();
                    echo "</td><td>";
                    echo $arrayprdk[$i]->get_material();
                    echo "</td><td>";
                    echo $arrayprdk[$i]->get_gender();
                    echo "</td><td>";
                    echo $arrayprdk[$i]->get_color();
                    echo "</td><td>";
                    echo $arrayprdk[$i]->get_sleevetype();
                    echo "</td>";
                    echo "</tr>";
        }
     echo "</table> </center>";
            
?>