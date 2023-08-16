# ESP32 Projesi

Bu proje, ESP32 mikrodenetleyicisinin kullanıldığı örnek bir uygulamayı içermektedir. 
ESP32, Wi-Fi ve Bluetooth özelliklerini bir araya getiren güçlü bir mikrodenetleyicidir. 
Bu projede, ESP32'nin bir WiFi ağı araması, bulursa bağlanması, belirli bir süre bir ağa bağlanamazsa bir erişim noktasına dönmesi sağlanmıştır.

## Projenin temel özellikleri:

- Kablosuz ağa bağlanma
- Bağlantı sağlanamazsa durumu bildirme
- Durumu bildirdikten sonra ESP32'nin bir erişim noktasına dönüşmesi.

## Nasıl Başlanır

Bu adımlar, projeyi kendi ESP32 cihazınızda çalıştırmak için temel rehber sağlar:

1. Bu projeyi bilgisayarınıza klonlayın ya da indirin.
2. Arduino IDE veya uygun başka bir geliştirme ortamı kullanarak `sketch_aug15a.ino` dosyasını açın.
3. ESP32 kartınızı seçin ve gerekli bağımlılıkları yükleyin.
4. Bağlantıları doğru şekilde yaparak ESP32'yi bilgisayarınıza bağlayın.
5. Kodu ESP32'ye yükleyin.
6. Seri monitörü açarak ESP32'nin IP adresini gözlemleyin.

## Katkıda Bulunma

Eğer bu projeye katkıda bulunmak isterseniz, çekme isteklerini bekliyoruz. Projeyi çatallayabilir, geliştirebilir ve iyileştirmeler yapabilirsiniz.

## Lisans

Bu projenin lisansı falan yoktur. Dilediğiniz gibi kullanabilirsiniz. Eksik, hata, soru veya önerileriniz için bana ulaşabilirsiniz.

---

- Geliştirici: Mustafa Arslan
- E-posta: mustafaarslan.92@gmail.com

---------------------------------------------------

# ESP32 Project

This project contains a sample application utilizing the ESP32 microcontroller. The ESP32 is a robust microcontroller that combines Wi-Fi and Bluetooth capabilities. In this project, the ESP32 is programmed to search for available Wi-Fi networks, establish a connection when found, and revert to an access point mode if unable to connect within a specified time.

## Project Highlights

- Establishing a connection to wireless networks
- Providing status notifications in case of connection issues
- Automatically transitioning to an access point mode after notifying the status

## Getting Started

Follow these steps to run the project on your ESP32 device:

1. Clone or download this project to your computer.
2. Open the `sketch_aug15a.ino` file using the Arduino IDE or an appropriate development environment.
3. Select your ESP32 board and install any required dependencies.
4. Connect the ESP32 to your computer with the correct wiring.
5. Upload the code to the ESP32.
6. Open the serial monitor to observe the assigned IP address.

## Contributing

We welcome contributions to this project. If you're interested, feel free to submit pull requests. You can fork the project, make enhancements, and propose improvements.

## License

This project has no license. You can use it however you want. Feel free to reach out to me for any issues, errors, questions, or suggestions.

---

- Developer: Mustafa Arslan
- E-mail: mustafaarslan.92@gmail.com
