# Basit Konsol Giriş Sistemi

Bu proje, C++ ile geliştirilmiş basit bir konsol tabanlı giriş (login) sistemidir. Kullanıcı adı ve şifre doğrulaması yapar.

## Özellikler

- Önceden tanımlanmış bir kullanıcı adı ve şifreye sahiptir.
- Kullanıcıdan kullanıcı adı ve şifre girmesini ister.
- Girilen bilgilerle sistemdeki kayıtlı bilgileri karşılaştırır.
- Doğrulama başarılı olursa "Auth !" (Yetkilendirildi) mesajı gösterir.
- Doğrulama başarısız olursa "Error !" (Hata) mesajı gösterir.

## Nasıl Çalışır?

Program başlatıldığında, kullanıcıdan bir kullanıcı adı ve ardından bir şifre girmesi istenir. Girilen kullanıcı adı ve şifre, `LogIn` sınıfında tanımlanmış sabit kullanıcı adı ("asd") ve şifre ("1234") ile karşılaştırılır. Önce kullanıcı adı kontrol edilir. Eğer kullanıcı adı eşleşirse, şifre kontrol edilir. Her iki bilgi de eşleşirse "Auth !" mesajı gösterilir. Herhangi bir eşleşmeme durumunda "Error !" mesajı görüntülenir.

## Kurulum ve Çalıştırma

Bu projeyi derlemek ve çalıştırmak için bir C++ derleyicisine (örneğin g++) ihtiyacınız vardır.

1.  **Kaynak Kodlarını İndirin:**
    Tüm `.hpp` ve `.cpp` dosyalarını bilgisayarınıza indirin.

2.  **Derleme:**
    Terminalinizde veya komut istemcinizde aşağıdaki komutu kullanarak projeyi derleyin:

    ```bash
    g++ main.cpp LogIn.cpp -o login_system
    ```
    Bu komut, `login_system` adında çalıştırılabilir bir dosya oluşturacaktır.

3.  **Çalıştırma:**
    Derledikten sonra, projeyi çalıştırmak için:

    ```bash
    ./login_system
    ```

## Dosya Yapısı

-   `LogIn.hpp`: `LogIn` sınıfının sınıf tanımını (metodlar ve üye değişkenleri) içerir.
-   `LogIn.cpp`: `LogIn` sınıfının metodlarının implementasyonlarını (uygulamalarını) içerir. Giriş mantığı, kullanıcı adı ve şifre karşılaştırması gibi fonksiyonlar burada tanımlıdır.
-   `main.cpp`: Programın ana giriş noktasıdır. `LogIn` sınıfından bir nesne oluşturur ve giriş sürecini başlatır.
