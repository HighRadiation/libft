# Makefile Kullanım Kılavuzu

Bu doküman, Libft projesinde kullanılan Makefile’ın yapısını ve temel kullanımını açıklar. Makefile, projeyi kolayca derlemek, temizlemek ve otomatikleştirilmiş işlemler yapmak için kullanılır.

## İçerik

- [Makefile Nedir?](#makefile-nedir)
- [Temel Hedefler (Targets)](#temel-hedefler-targets)
- [Değişkenler (Variables)](#değişkenler-variables)
- [Kuralların Yapısı (Rule Structure)](#kuralların-yapısı-rule-structure)
- [Kullanım Örnekleri](#kullanım-örnekleri)
- [Sıkça Sorulan Sorular](#sıkça-sorulan-sorular)
- [Kaynaklar](#kaynaklar)

---

## Makefile Nedir?

Makefile, projedeki kaynak dosyalarını nasıl derleyeceğinizi ve çeşitli işlemleri nasıl otomatikleştireceğinizi belirten özel bir dosyadır. GNU Make veya benzeri araçlarla çalışır. Özellikle büyük C projelerinde vazgeçilmezdir.

## Temel Hedefler (Targets)

Aşağıda, tipik bir Libft Makefile’ında bulunan ana hedefler yer almakta:

- **all**: Tüm projenin derlenmesi için kullanılır.
- **clean**: Derlemeden oluşan nesne dosyalarını (`*.o`) siler.
- **fclean**: Nesne dosyalarının yanı sıra, arşiv dosyasını (`libft.a`) da siler.
- **re**: Önce temizler, sonra tekrar derler.
- **bonus**: Bonus fonksiyonları da derler (varsa).
- **test**: (Varsa) Otomatik testleri çalıştırır.

Örnek:
```makefile
all: libft.a

libft.a: $(OBJ)
	$(AR) rcs $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libft.a

re: fclean all
```

## Değişkenler (Variables)

Makefile’da kod tekrarını önlemek için değişkenler kullanılır:

```makefile
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar
SRC     = ft_strlen.c ft_memset.c ...
OBJ     = $(SRC:.c=.o)
```

Yaygın değişkenler:
- **CC**: Kullanılacak derleyici (genellikle gcc)
- **CFLAGS**: Derleyiciye gönderilen bayraklar
- **SRC**: Kaynak dosyaların listesi
- **OBJ**: Nesne dosyaları (otomatik olarak SRC’den türetilir)
- **AR**: Arşiv oluşturucu (genellikle `ar`)

## Kuralların Yapısı (Rule Structure)

Her kural (rule) şu şekilde yazılır:
```makefile
target: dependencies
	[tab] command...
```
- **target**: Oluşturulacak dosya veya yapılacak işlem
- **dependencies**: Hedefin oluşturulması için gereken dosyalar
- **command**: Terminalde çalışacak komutlar (her satır başında TAB olmalı!)

Örnek:
```makefile
ft_strlen.o: ft_strlen.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
```

## Kullanım Örnekleri

Projeyi derlemek için:

```sh
make
```

Temizleme işlemleri:

```sh
make clean    # Sadece nesne dosyalarını siler (.o)
make fclean   # Nesne dosyalarını ve libft.a'yı siler
make re       # Tüm projeyi temizleyip tekrar derler
```

Bonus fonksiyonları (varsa):

```sh
make bonus
```

## Sıkça Sorulan Sorular

**Q:** Makefile neden gereklidir?  
**A:** Otomasyon sağlar; elle derleme hatalarını ve zaman kaybını önler.

**Q:** Komutlar neden TAB ile başlamak zorunda?  
**A:** Make, komut satırlarının başında TAB karakteri bekler. Boşluk kullanırsan hata alırsın.

**Q:** Hedeflerin sırası önemli mi?  
**A:** Evet. Varsayılan hedef (ilk yazılan) genellikle `all` olmalıdır.

## Kaynaklar

- [makefiletutorial.com](https://makefiletutorial.com/)
- [GNU Make Documentation](https://www.gnu.org/software/make/manual/make.html)
- [42 Network PDF'leri ve örnekleri](https://github.com/42Paris/42cursus-libft)

---

Hazırlayan: [HighRadiation](https://github.com/HighRadiation)
