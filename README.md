# miniCrowd
GROUSSET Sylvain

Concernant ce TP, j'ai avancé jusqu'à la partie 6.

J'ai ma classe Entity avec tous les attributs définissant une entité.
Ma classe Entity comporte aussi les fonctions de mise à jour d'une entité (draw, moove et changePosition).

Ma classe EntitiesManager initialise toutes les entités en créeant un objet de type Entité avec des valeurs aléatoires puis l'ajoute dans l'attribut vector d'entité entity1.
Cette classe fait aussi appelle aux méthodes de mise à jour des entités de la classe Entity pour mettre à jour toutes les entités.

Et enfin, mon AllegroManager gère l'initialisation d'Allegro et contient la boucle principale du programme.
L'initialisation des entités se fait avant la boucle principale, en appelant la fonction init de la classe EntitiesManager.

Je n'ai pas fait la question 7 pour me concentrer sur la rédaction des commentaires.

La principale difficulté rencontrée dans ce programme était de comprendre le programme de base. En effet, lorsque j'avais compris le programme écrit au tout début, il était facile pour moi de visualiser ce qu'il y avait à changer.
Le C++ a aussi été un frein car c'est un langage qui nécessite beaucoup de rigueur.

Pour rester un peut dans ce thème, j'ai fait en sorte que lorsqu'une entité sort des dimensions de la fenêtre, elle est repositionnée au milieu de la fenêtre.

J'aurais voulu ajouter d'autres formes comme des triangles, des rectangles ou des carrés. Mais les fonctions d'Allegro permettant de les dessiner ne fonctionnaient pas ...

(Pour Info, il y a 2 comptes sur ce repository sylvain-grousset et KriDel car j'ai 2 comptes sur github tout simplement et je me suis trompé lors d'un commit j'ai utilisé le mauvais compte ...)
