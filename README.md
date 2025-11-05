<img width="359" height="114" alt="ascii-art-text (2)" src="https://github.com/user-attachments/assets/f1817c15-5087-4cf7-8f3a-b369ddcbe1dc" />

## 🗂️ Fonctions Implémentées

### 1. 🔤 Classification des Caractères (`is...`)

Ces fonctions analysent un caractère et retournent vrai (une valeur non nulle) ou faux (0) s'il correspond au critère.

```
| `ft_isalpha` | Vérifie si le caractère est une lettre de l'alphabet. |

| `ft_isdigit` | Vérifie si le caractère est un chiffre (0-9). |

| `ft_isalnum` | Vérifie si le caractère est alphanumérique (lettre ou chiffre). |

| `ft_isascii` | Vérifie si le caractère fait partie de la table ASCII (0-127). |

| `ft_isprint` | Vérifie si le caractère est imprimable. |
```
---

### 2. 🔄 Conversion des Caractères (`to...`)

Ces fonctions convertissent un caractère d'une casse à l'autre.
```
| `ft_tolower` | Convertit une lettre majuscule en minuscule. |

| `ft_toupper` | Convertit une lettre minuscule en majuscule. |
```
---

### 3. 🧠 Manipulation de Mémoire (`mem...` et `bzero`)

Ces fonctions opèrent directement sur des zones de mémoire.
```
| `ft_memset` | Remplit une zone mémoire avec un octet donné. |
| `ft_bzero` | Met à zéro les octets d'une zone mémoire. |

| `ft_memcpy` | Copie une zone mémoire dans une autre (sans chevauchement). |

| `ft_memmove` | Copie une zone mémoire dans une autre (gère le chevauchement). |

| `ft_memchr` | Recherche un octet dans une zone mémoire. |

| `ft_memcmp` | Compare deux zones de mémoire. |
```
---

### 4. 🧵 Manipulation de Chaînes (`str...`)

Toutes les fonctions classiques pour travailler avec des chaînes de caractères terminées par `\0`.
```
| `ft_strlen` | Calcule la longueur d'une chaîne. |
| `ft_strlcpy` | Copie une chaîne dans une autre avec protection de taille. |

| `ft_strlcat` | Concatène deux chaînes avec protection de taille. |

| `ft_strchr` | Trouve la première occurrence d'un caractère dans une chaîne. |

| `ft_strrchr` | Trouve la dernière occurrence d'un caractère dans une chaîne. |

| `ft_strncmp` | Compare les `n` premiers octets de deux chaînes. |

| `ft_strnstr` | Trouve une sous-chaîne dans une chaîne sur `n` octets. |

| `ft_strdup` | Duplique une chaîne en allouant de la mémoire. |

| `ft_substr` | Extrait une sous-chaîne d'une chaîne. |

| `ft_strjoin` | Concatène deux chaînes pour en créer une nouvelle. |

| `ft_strtrim` | Supprime les caractères d'un "set" au début et à la fin d'une chaîne. |

| `ft_split` | Découpe une chaîne en un tableau de sous-chaînes basé sur un délimiteur. |

| `ft_strmapi` | Applique une fonction à chaque caractère d'une chaîne pour en créer une nouvelle. |

| `ft_striteri` | Applique une fonction à chaque caractère d'une chaîne (modification sur place). |
```
---

### 5. 🔢 Conversion et Allocation

Fonctions pour convertir des types ou allouer de la mémoire de manière spécifique.
```
| `ft_atoi` | Convertit une chaîne de chiffres en entier (`int`). |

| `ft_itoa` | Convertit un entier (`int`) en une nouvelle chaîne de caractères. |

| `ft_calloc` | Alloue de la mémoire pour un tableau et l'initialise à zéro. |
```
---

### 6. ✍️ Écriture sur Fichiers (`..._fd`)

Ces fonctions écrivent des données sur un "file descriptor" (descripteur de fichier) spécifique.
```
| `ft_putchar_fd` | Écrit un seul caractère sur un file descriptor. |

| `ft_putstr_fd` | Écrit une chaîne de caractères sur un file descriptor. |

| `ft_putendl_fd` | Écrit une chaîne, suivie d'un saut de ligne, sur un file descriptor. |

| `ft_putnbr_fd` | Écrit un nombre entier sur un file descriptor. |
```
---

### 7. 🔗 Fonctions Bonus (Listes Chaînées)

Toutes les fonctions nécessaires pour manipuler la structure `t_list`.
```
| `ft_lstnew` | Crée un nouveau nœud (maillon) de liste. |

| `ft_lstadd_front` | Ajoute un nœud au début de la liste. |

| `ft_lstadd_back` | Ajoute un nœud à la fin de la liste. |

| `ft_lstsize` | Compte le nombre de nœuds dans la liste. |

| `ft_lstlast` | Renvoie le dernier nœud de la liste. |

| `ft_lstdelone` | Libère la mémoire d'un seul nœud. |

| `ft_lstclear` | Supprime et libère toute la liste. |

| `ft_lstiter` | Applique une fonction au contenu de chaque nœud. |

| `ft_lstmap` | Crée une nouvelle liste en appliquant une fonction à chaque nœud de l'ancienne. |
```
