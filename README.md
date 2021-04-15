# Jeu de jardinage

On souhaite coder en C++ un jeu simplifié de type "jeu de jardinage".
La personne qui joue est un-e Botaniste, qui commence avec une Plante.

## 1 - Plante
Les Plantes gagnent en maturité avec le temps. On peut leur donner de l’engrais pour les
aider à pousser (max 1/jour). Une plante doit être taillée régulièrement, pour demeurer en
bonne santé, mais pas trop (ou cela la blesse). Il faut aussi arroser une plante
régulièrement, mais pas trop (ou on la noie). On peut inspecter une plante, pour avoir
connaissance de son hydratation, de son nom d’espèce, de sa santé.
Une Plante en bonne santé pousse plus vite.
Une Plante en mauvaise santé ralentit sa croissance, et peut même mourir.

## 2 - Botaniste
Un-e Botaniste peut posséder un nombre indéterminé de Plantes, ainsi que de l’argent.
Un-e botaniste peut dormir. On passe alors au jour suivant : les plantes gagnent en maturité,
stagnent parfois, ou meurent si on ne s’est vraiment pas bien occupé d’elles. On peut
acheter une Plante, à l’état de pousse. On peut la revendre quand elle devient mature.
On peut aussi acheter de l’engrais.

## 3 - Fleur
La croissance d’une Fleur est plus lente, mais elle finit par éclore. Dans cet état, qui ne dure
que quelques jours, sa valeur est multipliée par deux. Au bout de quelques jours, elle fane :
cela divise sa valeur par dix.

## 4 - Plante carnivore
Les plantes carnivores ont un besoin supplémentaire, en plus d’être arrosées et taillées :
manger. Il faut leur donner une mouche à manger, chaque semaine, pour qu’elles puissent
rester en bonne santé. Inspecter une Plante carnivore permet de vérifier si elle est bien en
train de digérer une mouche, ou si elle attend d’en manger une nouvelle.
Coder un jeu en C++ à partir de ce cahier des charges.

### Coder un jeu en C++ à partir de ce cahier des charges (Durée: 4h)
