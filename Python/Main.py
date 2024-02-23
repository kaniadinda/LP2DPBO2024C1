# library
from Clothing import Clothing
from Shirt import Shirt
from Produk import Produk

# welcome!
print ("\n===== Database Busana =====\n")

m = int(input("Banyak data : "))

# membuat array of objects untuk kelas Clothing
arrClothing = []

# isi data untuk kelas Clothing
print ("\nIsi Data Clothing!\n")
for i in range(m):
    # input data
    size = str(input("Ukuran    : "))
    material = str(input("Material  : "))
    gender = str(input("Gender    : "))
    print ("\n")
    
    # masukkan nilai atribut
    arrClothing.append(Clothing(size, material, gender))

# menampilkan data kelas Clothing
print("== Data Clothing ==\n")

# tampilkan data. int hitung untuk menunjukkan urutan data
hitung = 1
for Clothing in arrClothing:
    print("# No-",hitung)
    print("Ukuran        : ",Clothing.get_size(), "\nMaterial      : ",Clothing.get_material())
    print("Gender        : ",Clothing.get_gender(),"\n") 
    
    # increment
    hitung = hitung+1

# membuat array of objects untuk kelas Shirt
arrShirt = []

# isi data untuk kelas Shirt
print ("\nIsi Data Baju !\n")
for i in range(m):
    # input data
    warna = str(input("Warna           : "))
    lengan = str(input("Tipe Lengan     : "))
    print ("\n")
    
    # masukkan nilai atribut
    arrShirt.append(Shirt(warna, lengan))

# menampilkan data kelas Shirt
print("== Data Baju ==\n")

# tampilkan data. int hitung untuk menunjukkan urutan data
hitung = 1
for Shirt in arrShirt:
    print("# No-",hitung)
    print("Warna        : ",Shirt.get_color())
    print("Tipe Lengan  : ",Shirt.get_sleevetype(),"\n") 
    
    # increment
    hitung = hitung+1

# membuat array of objects untuk kelas Produk
arrPrdk = []

# isi data untuk kelas Produk
print ("\nIsi Data Produk!\n")
for i in range(m):
    # input data
    id = int(input("ID       : "))
    name = str(input("Nama     : "))
    brand = str(input("Brand    : "))
    price = str(input("Harga    : "))
    print ("\n")
    
    # masukkan nilai atribut
    arrPrdk.append(Produk(id, name, brand, price))

# menampilkan data kelas Produk
print("== Data Produk ==\n")

# tampilkan data. int hitung untuk menunjukkan urutan data
hitung = 1
for Produk in arrPrdk:
    print("# No-",hitung)
    print("ID         : ",Produk.get_id(), "\nNama        : ",Produk.get_name())
    print("Brand       : ",Produk.get_brand(), "\nPrice       : ",Produk.get_price())
    
    # increment
    hitung = hitung+1