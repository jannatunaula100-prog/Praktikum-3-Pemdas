while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    choice = int(input("Masukkan Pilihan : "))

    if choice == 5:
        print("Terimakasih, telah menggunakan kalkulator Jannatun Aula")
        break

    elif choice == 1:
        first_value = float(input("Masukkan nilai pertama : "))
        second_value = float(input("Masukkan nilai kedua : "))
        hasil = first_value + second_value

        print(f"Hasil Penjumlahan antara {first_value:.2f} dengan {second_value:.2f} adalah {hasil:.2f}")

    elif choice == 2:
        first_value = float(input("Masukkan nilai pertama : "))
        second_value = float(input("Masukkan nilai kedua : "))
        hasil = first_value - second_value

        print(f"Hasil Pengurangan antara {first_value:.2f} dengan {second_value:.2f} adalah {hasil:.2f}")

    elif choice == 3:
        first_value = float(input("Masukkan nilai pertama : "))
        second_value = float(input("Masukkan nilai kedua : "))
        hasil = first_value * second_value

        print(f"Hasil Perkalian antara {first_value:.2f} dengan {second_value:.2f} adalah {hasil:.2f}")

    elif choice == 4:
        first_value = float(input("Masukkan nilai pertama : "))
        second_value = float(input("Masukkan nilai kedua : "))
        hasil = first_value / second_value

        print(f"Hasil Pembagian antara {first_value:.2f} dengan {second_value:.2f} adalah {hasil:.2f}")

    else:
        print("Input anda salah, silahkan coba lagi")