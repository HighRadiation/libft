# Libft

42 okulu projesi. C'nin standart string ve bellek fonksiyonlarını sıfırdan yeniden yazar.

## Fonksiyonlar

**Karakter kontrol**
`ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_toupper` `ft_tolower`

**String ve bellek**
`ft_strlen` `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_strlcpy` `ft_strlcat` `ft_strdup` `ft_calloc`

**Arama ve karşılaştırma**
`ft_strchr` `ft_strrchr` `ft_strncmp` `ft_memchr` `ft_memcmp` `ft_strnstr`

**Diğer**
`ft_atoi` `ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_itoa` `ft_strmapi` `ft_striteri` `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd`

## Kullanım

```bash
make        # libft.a oluşturur
make clean  # .o dosyalarını siler
make fclean # tüm çıktıları siler
make re     # fclean + make
```

## Kurallar

- Norm hatası olmamalı
- Global değişken yok
- `-Wall -Wextra -Werror` ile derlenir
- Her `malloc` için `free` şart
- Segfault veya double free kabul edilmez

## Not

`strlcpy`, `strlcat`, `bzero` glibc'de standart değildir. Linux'ta test için `<bsd/string.h>` ve `-lbsd` gerekebilir.

---

42 Network — Libft
[HighRadiation](https://github.com/HighRadiation)
