
// Bloquant n°1 : aucune opération n'est affichée sur stdout.
// Le sujet est très clair : "The program must display the smallest list of Push_swap operations...
// Operations must be separated by a \n and nothing else." Or dans pushi.c, swapi.c,
// rotate.c, rrotate.c, tous les write(1, "pa\n", 3) etc. sont commentés.
// Actuellement ./push_swap 3 1 2 n'affiche RIEN sur stdout — juste des dumps de debug sur la stack finale dans main() (dans flags.c).
// Un checker externe qui lit stdout pour rejouer les opérations ne recevra jamais rien. 
// C'est le bug le plus grave du projet, à corriger avant tout le reste.

// Bloquant n°2 : le flag s'appelle --adaptive, pas --adaptative : DONE C BON !

// Bloquant n°3 : --bench n'existe pas.
// Le sujet exige un format précis en sortie stderr :
// [bench] disorder: 49.93%
// [bench] strategy: Adaptive / O(n√n)
// [bench] total_ops: 7997
// [bench] sa: 0 sb: 0 ss: 0 pa: 500 pb: 500
// [bench] ra: 4840 rb: 1098 rr: 0 rra: 0 rrb: 1059 rrr: 0

// Comportement différent pour "aucun argument" :
// Le sujet dit : "If no parameters are specified, the program must not display anything and give the prompt back." 
// → donc ./push_swap seul doit être silencieux et rendre la main, pas afficher Error.
// C'est différent des cas d'erreur réels (non numérique, doublon, hors bornes) qui eux doivent afficher Error.
// Le fix qu'on a fait ensemble la dernière fois (error_exit() sur argc < 2) est donc à corriger : argc < 2 doit juste return/exit(0)
// silencieusement, pas passer par error_exit().

// ./push_swap 5 (une seule valeur) ne doit pas planter, ni générer d'erreur :
// Une liste à un seul élément est déjà triée par définition → 0 opération à afficher, exit propre. Il
// faut donc à la fois corriger le crash sur argv[2] NULL (bug déjà identifié) et s'assurer que ce cas ne déclenche pas Error.

// Le --medium doit viser du O(n√n), pas des chunks fixes de 10.
// ft_pushchunk découpe en chunks de taille fixe 10 quel que soit n. Le sujet demande
// explicitement des chunks de taille √n. Avec n=500, √n≈22, pas 10 — 
// ça affecte directement si vous passez les benchmarks de perf (< 2000 ops pour 100 nombres, etc.).

