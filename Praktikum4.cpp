#include <iostream>
#include <string>
using namespace std;
 //Prosedur untuk memasukkan data berat dan tinggi
 void inputData(float & berat, float & tinggi){
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (m): ";
    cin >> tinggi;
 }

 //Fungsi untuk menghitung BMI
 float hitungBMI(float berat, float tinggi) {
    return berat/(tinggi*tinggi);
 }

 //Fungsi untuk menentukan kondisi berat badan
 string kondisiBMI(float bmi) {
    if (bmi < 18.5)
        return "Berat badan kurang";
    else if (bmi < 25)
        return "Berat badan normal";
    else if (bmi <30)
        return "Berat badan kelebihan";
    else
        return "Obesitas";
 }