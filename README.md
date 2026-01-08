# 25360859078Avp_donem_proje
AVP Dönem Projesi- UZAY FİZİK SİMÜLASYONU


# UZAY FİZİK SİMULASYONU PROJESİ

## PROJE HAKKINDA

Bu proje, Bursa Teknik Üniversitesi Bilgisayar Mühendisliği bölümü "Algoritmalar ve Programlama" dersi için geliştirilmiş konsol tabanlı bir uzay simülasyonudur. Program tamamen C dili ile yazılmıştır ve görsel arayüz içermez.

## ÖZELLİKLER

- 9 farklı fizik deneyinin simülasyonu
- Güneş Sistemindeki 8 gezegen için ayrı hesaplamalar
- Pointer aritmetiği kullanımı
- Ternary operatör ile negatif değer kontrolü
- Modüler fonksiyonel yapı
- Konsol tabanlı kullanıcı arayüzü

## SİMÜLE EDİLEN DENEYLER

1. Serbest Düşme Deneyi
2. Yukarı Atış Deneyi
3. Ağırlık Deneyi
4. Kütleçekimsel Potansiyel Enerji Deneyi
5. Hidrostatik Basınç Deneyi
6. Arşimet Kaldırma Kuvveti Deneyi
7. Basit Sarkaç Periyodu Deneyi
8. Sabit İp Gerilmesi Deneyi
9. Asansör Deneyi

## TEKNİK ÖZELLİKLER

- Programlama Dili: C (C99 Standardı)
- Platform: Windows, Linux, macOS
- Gerekli Kütüphaneler: stdio.h, stdlib.h, math.h, string.h, ctype.h
- Derleyici: GCC veya uyumlu C derleyicisi

## KURULUM VE ÇALIŞTIRMA

### Linux/macOS için:
gcc main.c -o uzay_simulasyonu -lm
./uzay_simulasyonu

### Windows için (MinGW):
gcc main.c -o uzay_simulasyonu.exe -lm
uzay_simulasyonu.exe

## KULLANIM

1. Program çalıştırıldığında kullanıcıdan bilim insanı adı istenir
2. Ana menüde 9 deney listelenir
3. Kullanıcı 1-9 arası deney seçer veya -1 ile çıkış yapar
4. Seçilen deney için gerekli parametreler girilir
5. Sonuçlar tüm gezegenler için hesaplanır ve gösterilir
6. Program -1 girilene kadar menüye döner

## ÖRNEK ÇIKTI

UZAY FİZİK SİMULASYONU

İsminizi giriniz: Dr. Muhammed  Türkoğlu

hosgeldiniz Dr. Muhammed  Türkoğlu

Deney Listesi:
1. serbest dusme deneyi
2. yukari atis deneyi
3. agirlik deneyi
4. kütlecekimsel potansiyel enerji deneyi
5. hidrostatik basinc deneyi
6. arsimet kaldirma kuvveti deneyi
7. basit sarkac periyodu deneyi
8. sabit ip gerilmesi deneyi
9. asansor deneyi

-1:programdan cikis

seciminiz: 1

--- SERBEST DUSME DENEYI ---
Dusme suresini (saniye) girin: 5

gezegenlerde sonuclar:
Merkur    :    46.25 m
Venus     :   110.88 m
Dunya     :   122.62 m
Mars      :    46.51 m
Jupiter   :   309.88 m
Saturn    :   130.50 m
Uranus    :   108.62 m
Neptun    :   139.38 m

## GEZEGEN VERİLERİ

Programda kullanılan gezegen yerçekimi ivmeleri:
- Merkur: 3.7 m/s²
- Venus: 8.87 m/s²
- Dunya: 9.81 m/s²
- Mars: 3.721 m/s²
- Jupiter: 24.79 m/s²
- Saturn: 10.44 m/s²
- Uranus: 8.69 m/s²
- Neptun: 11.15 m/s²

## PROJE GEREKSİNİMLERİ

- Tüm deneyler ayrı fonksiyonlarda hesaplanır
- Gezegen verileri dizi içinde tutulur
- Dizi işlemleri pointer mantığında yapılır
- Negatif değerler ternary operatör ile mutlak değere çevrilir
- Kullanıcı -1 girene kadar program çalışmaya devam eder
- Tüm çıktılar birimleri ile birlikte gösterilir

## KOD YAPISI

Ana fonksiyonlar:
- main(): Programın ana kontrol akışı
- serbestdusme(): Serbest düşme hesaplamaları
- yukariatis(): Yukarı atış hesaplamaları
- agirlikdeneyi(): Ağırlık hesaplamaları
- potansiyelenerji(): Potansiyel enerji hesaplamaları
- hidrostatikbasinc(): Hidrostatik basınç hesaplamaları
- arsimet(): Arşimet kuvveti hesaplamaları
- sarkacperiyodu(): Sarkaç periyodu hesaplamaları
- ipgerilmesi(): İp gerilmesi hesaplamaları
- asansordeneyi(): Asansör deneyi hesaplamaları
- gezegensonuclari(): Sonuçları ekrana yazdırma
- mutlakdeger(): Ternary operatör ile mutlak değer alma
- temizlebuffer(): Girdi bufferını temizleme

## GELİŞTİRİCİ BİLGİLERİ

- Hazırlayan: Muhammed Abdulhakim Türkoğlu
- Öğrenci No: 25360859078
- Bölüm: Bilgisayar Mühendisliği
- Ders: Algoritmalar ve Programlama
- Dönem: 2025-2026 Güz Dönemi
- Ders Sorumluları: Arş. Gör. Hasibe Candan Kadem, Arş. Gör. Yusuf Kayıpmaz, Arş. Gör. Zeynep Barut

## LİSANS

Bu proje eğitim amaçlı olarak geliştirilmiştir. Bursa Teknik Üniversitesi "Algoritmalar ve Programlama" dersi proje ödevi kapsamında hazırlanmıştır.

## SON TESLİM TARİHİ

8 Ocak 2026, 23:59
