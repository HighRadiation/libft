# Libft
Karakter Kontrol Fonksiyonları
1)ft_isalpha: Bir karakterin alfabetik olup olmadığını kontrol eder.
2)ft_isdigit: Bir karakterin rakam olup olmadığını kontrol eder.
3)ft_isalnum: Alfabetik veya rakam kontrolü yapar.
4)ft_isascii: ASCII karakter kontrolü.
5)ft_isprint: Yazdırılabilir karakter kontrolü.
String ve Memory Fonksiyonları
6)ft_strlen: String uzunluğunu hesaplar.
7)ft_memset: Bellek bloğunu verilen değerle doldurur.
8)ft_bzero: Belleği sıfırlar (memset kullanarak).
9)ft_memcpy: Belleği kopyalar (overlap yoksa).
10)ft_memmove: Belleği güvenli kopyalar (overlap destekler).
11)ft_strlcpy: Stringi güvenli kopyalar (buffer taşmasını önler).
12)ft_strlcat: Stringleri güvenli birleştirir (buffer taşmasını önler).
13)ft_toupper: Küçük harfi büyüğe çevirir.
14)ft_tolower: Büyük harfi küçüğe çevirir.
Arama ve Karşılaştırma Fonksiyonları
15)ft_strchr: Stringte karakter arar (ilk geçtiği yer).
16)ft_strrchr: Stringte karakter arar (son geçtiği yer).
17)ft_strncmp: İki stringi belirli uzunlukta karşılaştırır.
18)ft_memchr: Bellekte karakter arar.
19)ft_memcmp: Bellek bloklarını karşılaştırır.
20)ft_strnstr: String içinde substring arar.
Diğerleri
21)ft_atoi:  string’i integer’a çevirir.
22)ft_calloc: Bellek ayırır ve sıfırlar (malloc + memset).
23)ft_strdup: Stringi kopyalar (malloc ile).

Ek Fonksiyonlar
24)ft_substr: Bir string’in belirli bir başlangıç indeksinden itibaren verilen uzunluk kadar alt string’ini oluşturur.
25)ft_strjoin: İki string’i birleştirip yeni bir string döner.
26)ft_strtrim: Belirtilen karakterleri (set) bir string’in başından ve sonundan kırpar.
27)ft_split: Verilen ayırıcı karaktere göre bir string’i parçalara ayırır (dizi olarak döner).
28)ft_itoa: Tamsayıyı string'e çevirir
29)ft_strmapi:Bir fonksiyonu her karaktere uygulayarak yeni bir string oluşturur (karakter indeksini de alır).
30)ft_striteri:Her karakteri değiştirmek için bir fonksiyonu string’in her karakterine uygular (in-place).
31)ft_putchar_fd: Bir karakteri verilen file descriptor’a yazar.
32)ft_putstr_fd:  Bir string’i verilen file descriptor’a yazar.
33)ft_putendl_fd: Bir string’i yazdıktan sonra newline karakteri de ekler, belirli file descriptor’a yazar.
34)ft_putnbr_fd: Bir tamsayıyı yazı olarak belirli file descriptor’a yazar.
