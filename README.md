# 🍽️ Philosophers

Simulation du problème des philosophes en C avec threads/mutexes (partie obligatoire) et processus/sémaphores (bonus). Résout les problèmes de synchronisation tout en respectant des contraintes temporelles strictes.

## 📝 Description

Ce projet implémente la fameuse **situation des philosophes** autour d'une table où chacun doit partager des fourchettes avec ses voisins. Deux versions sont fournies :

- **Partie obligatoire** : Utilise des threads et mutexes

## 🚀 Utilisation

### Compilation

make # Compile la partie obligatoire (philo)




### Exécution


Format des arguments

./philo [nb_philos] [temps_mort] [temps_manger] [temps_dormir] (nb_repas)
Exemple (s'arrête à la première mort)

./philo 4 310 200 100
Exemple avec nombre de repas cible (s'arrête après 5 repas/philosophe)

./philo 5 800 200 200 5


## 🛠️ Fonctionnement

### Partie Obligatoire
- Chaque philosophe est un **thread séparé**
- Les fourchettes sont gérées par des **mutex**
- Un thread superviseur vérifie les décès
- Logs synchronisés pour éviter les overlaps

### Partie Bonus
- Philosophes comme **processus indépendants**
- Fourchettes gérées par **sémaphores système**
- Mémoire partagée pour les états
- Semaphore dédié pour l'affichage

## 📜 Journal des Événements

Le programme affiche des messages avec timestamp :

[timestamp_ms] X a pris une fourchette
[timestamp_ms] X mange
[timestamp_ms] X dort
[timestamp_ms] X pense
[timestamp_ms] X est mort



**Contraintes** :
- Aucun message mélangé
- Détection de mort sous 10ms
- Aucune data race

## 📂 Structure des Fichiers

├── Makefile            # Règles de compilation  
├── includes/           # Fichiers headers (.h)  
├── srcs/               # Sources partie obligatoire  
│   ├── main.c          # Point d'entrée  
│   ├── utils.c         # Gestion du temps/logs  
│   └── philosophes.c   # Logique centrale  
└── bonus/              # Implémentation alternative


## 🔍 Exemple Complet

$ ./philo 2 400 200 200 1 a pris une fourchette 1 mange 1 dort 2 a pris une fourchette 2 mange 2 dort


## 📚 Ressources
- [Guide pthreads](https://tronche.com/gui/x/threads/)

## 📜 Licence
MIT © [ADBAIBI]









You have to write a program for the mandatory part and another one for the bonus part
(if you decide to do the bonus part). They both have to comply with the following rules:
• Global variables are forbidden!
• Your program(s) must take the following arguments:
number_of_philosophers time_to_die time_to_eat time_to_sleep
[number_of_times_each_philosopher_must_eat]
◦ number_of_philosophers: The number of philosophers and also the number
of forks.
◦ time_to_die (in milliseconds): If a philosopher has not started eating within
time_to_die milliseconds since the beginning of their last meal or the start
of the simulation, he dies.
◦ time_to_eat (in milliseconds): The time it takes for a philosopher to eat.
During that time, they will need to hold two forks.
◦ time_to_sleep (in milliseconds): The time a philosopher will spend sleeping.
◦ number_of_times_each_philosopher_must_eat (optional argument): If all
philosophers have eaten at least number_of_times_each_philosopher_must_eat
times, the simulation stops. If not specified, the simulation stops when a
philosopher dies.
• Each philosopher has a number ranging from 1 to number_of_philosophers.
• Philosopher number 1 sits next to philosopher number number_of_philosophers.
Any other philosopher, numbered N, sits between philosopher N - 1 and philosopher
N + 1.

About the logs of your program:
• Any state change of a philosopher must be formatted as follows:
◦ timestamp_in_ms X has taken a fork
◦ timestamp_in_ms X is eating
◦ timestamp_in_ms X is sleeping
◦ timestamp_in_ms X is thinking
◦ timestamp_in_ms X died
Replace timestamp_in_ms with the current timestamp in milliseconds
and X with the philosopher number.
• A displayed state message should not be overlap with another message.
• A message announcing a philosopher’s death must be displayed within 10 ms of
their actual death.
• Again, philosophers should avoid dying!
Your program must not have any data races.


Program name philo
Turn in files Makefile, *.h, *.c, in directory philo/
Makefile NAME, all, clean, fclean, re
Arguments number_of_philosophers time_to_die time_to_eat
time_to_sleep
[number_of_times_each_philosopher_must_eat]
External functs. memset, printf, malloc, free, write,
usleep, gettimeofday, pthread_create,
pthread_detach, pthread_join, pthread_mutex_init,
pthread_mutex_destroy, pthread_mutex_lock,
pthread_mutex_unlock
Libft authorized No
Description Philosophers with threads and mutexes
The specific rules for the mandatory part are:
• Each philosopher must be represented as a separate thread.
• There is one fork between each pair of philosophers. Therefore, if there are several
philosophers, each philosopher has a fork on their left side and a fork on their right
side. If there is only one philosopher, they will have access to just one fork.
• To prevent philosophers from duplicating forks, you should protect each fork’s state
with a mutex.
