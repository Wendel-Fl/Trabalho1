#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX1 250
#define MAX2 500
#define MAX3 750
#define MAX4 1000
#define MAX5 2500
#define MAX6 7500
#define MAX7 10000
#define MAX8 29000
/*
   Minha máquina consegue ler ate 1.000.000
   com 10.000.000 dá segmentation fault;
   É assim que é pra fazer?
      cheio de funções
      funções repetidas
   Como eu faço pra medir o tempo de execução
   das funções?
*/
void selectionSort(int *v, int n);
void readVector(int *v, int length);

int main() {
   
   int v1[MAX1], v2[MAX1], v3[MAX1], v4[MAX1], v5[MAX1], v6[MAX1], v7[MAX1], v8[MAX1], v9[MAX1], v10[MAX1],
      v11[MAX1], v12[MAX1], v13[MAX1], v14[MAX1], v15[MAX1], v16[MAX1], v17[MAX1], v18[MAX1], v19[MAX1], v20[MAX1],
      v21[MAX1], v22[MAX1], v23[MAX1], v24[MAX1], v25[MAX1], v26[MAX1], v27[MAX1], v28[MAX1], v29[MAX1], v30[MAX1],
      v31[MAX1], v32[MAX1], v33[MAX1], v34[MAX1], v35[MAX1], v36[MAX1], v37[MAX1], v38[MAX1], v39[MAX1], v40[MAX1];
   
   int v41[MAX2], v42[MAX2], v43[MAX2], v44[MAX2], v45[MAX2], v46[MAX2], v47[MAX2], v48[MAX2], v49[MAX2], v50[MAX2],
      v51[MAX2], v52[MAX2], v53[MAX2], v54[MAX2], v55[MAX2], v56[MAX2], v57[MAX2], v58[MAX2], v59[MAX2], v60[MAX2],
      v61[MAX2], v62[MAX2], v63[MAX2], v64[MAX2], v65[MAX2], v66[MAX2], v67[MAX2], v68[MAX2], v69[MAX2], v70[MAX2],
      v71[MAX2], v72[MAX2], v73[MAX2], v74[MAX2], v75[MAX2], v76[MAX2], v77[MAX2], v78[MAX2], v79[MAX2], v80[MAX2];
   
   int v81[MAX3], v82[MAX3], v83[MAX3], v84[MAX3], v85[MAX3], v86[MAX3], v87[MAX3], v88[MAX3], v89[MAX3], v90[MAX3],
      v91[MAX3], v92[MAX3], v93[MAX3], v94[MAX3], v95[MAX3], v96[MAX3], v97[MAX3], v98[MAX3], v99[MAX3], v100[MAX3],
      v101[MAX3], v102[MAX3], v103[MAX3], v104[MAX3], v105[MAX3], v106[MAX3], v107[MAX3], v108[MAX3], v109[MAX3], v110[MAX3],
      v111[MAX3], v112[MAX3], v113[MAX3], v114[MAX3], v115[MAX3], v116[MAX3], v117[MAX3], v118[MAX3], v119[MAX3], v120[MAX3];

   int v121[MAX4], v122[MAX4], v123[MAX4], v124[MAX4], v125[MAX4], v126[MAX4], v127[MAX4], v128[MAX4], v129[MAX4], v130[MAX4],
      v131[MAX4], v132[MAX4], v133[MAX4], v134[MAX4], v135[MAX4], v136[MAX4], v137[MAX4], v138[MAX4], v139[MAX4], v140[MAX4],
      v141[MAX4], v142[MAX4], v143[MAX4], v144[MAX4], v145[MAX4], v146[MAX4], v147[MAX4], v148[MAX4], v149[MAX4], v150[MAX4],
      v151[MAX4], v152[MAX4], v153[MAX4], v154[MAX4], v155[MAX4], v156[MAX4], v157[MAX4], v158[MAX4], v159[MAX4], v160[MAX4];

   int v161[MAX5], v162[MAX5], v163[MAX5], v164[MAX5], v165[MAX5], v166[MAX5], v167[MAX5], v168[MAX5], v169[MAX5], v170[MAX5],
      v171[MAX5], v172[MAX5], v173[MAX5], v174[MAX5], v175[MAX5], v176[MAX5], v177[MAX5], v178[MAX5], v179[MAX5], v180[MAX5],
      v181[MAX5], v182[MAX5], v183[MAX5], v184[MAX5], v185[MAX5], v186[MAX5], v187[MAX5], v188[MAX5], v189[MAX5], v190[MAX5],
      v191[MAX5], v192[MAX5], v193[MAX5], v194[MAX5], v195[MAX5], v196[MAX5], v197[MAX5], v198[MAX5], v199[MAX5], v200[MAX5];

   int v201[MAX6], v202[MAX6], v203[MAX6], v204[MAX6], v205[MAX6], v206[MAX6], v207[MAX6], v208[MAX6], v209[MAX6], v210[MAX6],
      v211[MAX6], v212[MAX6], v213[MAX6], v214[MAX6], v215[MAX6], v216[MAX6], v217[MAX6], v218[MAX6], v219[MAX6], v220[MAX6],
      v221[MAX6], v222[MAX6], v223[MAX6], v224[MAX6], v225[MAX6], v226[MAX6], v227[MAX6], v228[MAX6], v229[MAX6], v230[MAX6],
      v231[MAX6], v232[MAX6], v233[MAX6], v234[MAX6], v235[MAX6], v236[MAX6], v237[MAX6], v238[MAX6], v239[MAX6], v240[MAX6];

   int v241[MAX7], v242[MAX7], v243[MAX7], v244[MAX7], v245[MAX7], v246[MAX7], v247[MAX7], v248[MAX7], v249[MAX7], v250[MAX7],
      v251[MAX7], v252[MAX7], v253[MAX7], v254[MAX7], v255[MAX7], v256[MAX7], v257[MAX7], v258[MAX7], v259[MAX7], v260[MAX7],
      v261[MAX7], v262[MAX7], v263[MAX7], v264[MAX7], v265[MAX7], v266[MAX7], v267[MAX7], v268[MAX7], v269[MAX7], v270[MAX7],
      v271[MAX7], v272[MAX7], v273[MAX7], v274[MAX7], v275[MAX7], v276[MAX7], v277[MAX7], v278[MAX7], v279[MAX7], v280[MAX7];

   int v281[MAX8], v282[MAX8], v283[MAX8], v284[MAX8], v285[MAX8], v286[MAX8], v287[MAX8], v288[MAX8], v289[MAX8], v290[MAX8],
      v291[MAX8], v292[MAX8], v293[MAX8], v294[MAX8], v295[MAX8], v296[MAX8], v297[MAX8], v298[MAX8], v299[MAX8], v300[MAX8],
      v301[MAX8], v302[MAX8], v303[MAX8], v304[MAX8], v305[MAX8], v306[MAX8], v307[MAX8], v308[MAX8], v309[MAX8], v310[MAX8],
      v311[MAX8], v312[MAX8], v313[MAX8], v314[MAX8], v315[MAX8], v316[MAX8], v317[MAX8], v318[MAX8], v319[MAX8], v320[MAX8];

   double timeSpent = 0.0;

   srand(time(NULL));

   readVector(v1, MAX1);
   readVector(v2, MAX1);
   readVector(v3, MAX1);
   readVector(v4, MAX1);
   readVector(v5, MAX1);
   readVector(v6, MAX1);
   readVector(v7, MAX1);
   readVector(v8, MAX1);
   readVector(v9, MAX1);
   readVector(v10, MAX1);
   readVector(v11, MAX1);
   readVector(v12, MAX1);
   readVector(v13, MAX1);
   readVector(v14, MAX1);
   readVector(v15, MAX1);
   readVector(v16, MAX1);
   readVector(v17, MAX1);
   readVector(v18, MAX1);
   readVector(v19, MAX1);
   readVector(v20, MAX1);
   readVector(v21, MAX1);
   readVector(v22, MAX1);
   readVector(v23, MAX1);
   readVector(v24, MAX1);
   readVector(v25, MAX1);
   readVector(v26, MAX1);
   readVector(v27, MAX1);
   readVector(v28, MAX1);
   readVector(v29, MAX1);
   readVector(v30, MAX1);
   readVector(v31, MAX1);
   readVector(v32, MAX1);
   readVector(v33, MAX1);
   readVector(v34, MAX1);
   readVector(v35, MAX1);
   readVector(v36, MAX1);
   readVector(v37, MAX1);
   readVector(v38, MAX1);
   readVector(v39, MAX1);
   readVector(v40, MAX1);

   readVector(v41, MAX2);
   readVector(v42, MAX2);
   readVector(v43, MAX2);
   readVector(v44, MAX2);
   readVector(v45, MAX2);
   readVector(v46, MAX2);
   readVector(v47, MAX2);
   readVector(v48, MAX2);
   readVector(v49, MAX2);
   readVector(v50, MAX2);
   readVector(v51, MAX2);
   readVector(v52, MAX2);
   readVector(v53, MAX2);
   readVector(v54, MAX2);
   readVector(v55, MAX2);
   readVector(v56, MAX2);
   readVector(v57, MAX2);
   readVector(v58, MAX2);
   readVector(v59, MAX2);
   readVector(v60, MAX2);
   readVector(v61, MAX2);
   readVector(v62, MAX2);
   readVector(v63, MAX2);
   readVector(v64, MAX2);
   readVector(v65, MAX2);
   readVector(v66, MAX2);
   readVector(v67, MAX2);
   readVector(v68, MAX2);
   readVector(v69, MAX2);
   readVector(v70, MAX2);
   readVector(v71, MAX2);
   readVector(v72, MAX2);
   readVector(v73, MAX2);
   readVector(v74, MAX2);
   readVector(v75, MAX2);
   readVector(v76, MAX2);
   readVector(v77, MAX2);
   readVector(v78, MAX2);
   readVector(v79, MAX2);
   readVector(v80, MAX2);

   readVector(v81, MAX3);
   readVector(v82, MAX3);
   readVector(v83, MAX3);
   readVector(v84, MAX3);
   readVector(v85, MAX3);
   readVector(v86, MAX3);
   readVector(v87, MAX3);
   readVector(v88, MAX3);
   readVector(v89, MAX3);
   readVector(v90, MAX3);
   readVector(v91, MAX3);
   readVector(v92, MAX3);
   readVector(v93, MAX3);
   readVector(v94, MAX3);
   readVector(v95, MAX3);
   readVector(v96, MAX3);
   readVector(v97, MAX3);
   readVector(v98, MAX3);
   readVector(v99, MAX3);
   readVector(v100, MAX3);
   readVector(v101, MAX3);
   readVector(v102, MAX3);
   readVector(v103, MAX3);
   readVector(v104, MAX3);
   readVector(v105, MAX3);
   readVector(v106, MAX3);
   readVector(v107, MAX3);
   readVector(v108, MAX3);
   readVector(v109, MAX3);
   readVector(v110, MAX3);
   readVector(v111, MAX3);
   readVector(v112, MAX3);
   readVector(v113, MAX3);
   readVector(v114, MAX3);
   readVector(v115, MAX3);
   readVector(v116, MAX3);
   readVector(v117, MAX3);
   readVector(v118, MAX3);
   readVector(v119, MAX3);
   readVector(v120, MAX3);

   readVector(v121, MAX4);
   readVector(v122, MAX4);
   readVector(v123, MAX4);
   readVector(v124, MAX4);
   readVector(v125, MAX4);
   readVector(v126, MAX4);
   readVector(v127, MAX4);
   readVector(v128, MAX4);
   readVector(v129, MAX4);
   readVector(v130, MAX4);
   readVector(v131, MAX4);
   readVector(v132, MAX4);
   readVector(v133, MAX4);
   readVector(v134, MAX4);
   readVector(v135, MAX4);
   readVector(v136, MAX4);
   readVector(v137, MAX4);
   readVector(v138, MAX4);
   readVector(v139, MAX4);
   readVector(v140, MAX4);
   readVector(v141, MAX4);
   readVector(v142, MAX4);
   readVector(v143, MAX4);
   readVector(v144, MAX4);
   readVector(v145, MAX4);
   readVector(v146, MAX4);
   readVector(v147, MAX4);
   readVector(v148, MAX4);
   readVector(v149, MAX4);
   readVector(v150, MAX4);
   readVector(v151, MAX4);
   readVector(v152, MAX4);
   readVector(v153, MAX4);
   readVector(v154, MAX4);
   readVector(v155, MAX4);
   readVector(v156, MAX4);
   readVector(v157, MAX4);
   readVector(v158, MAX4);
   readVector(v159, MAX4);
   readVector(v160, MAX4);

   readVector(v161, MAX5);
   readVector(v162, MAX5);
   readVector(v163, MAX5);
   readVector(v164, MAX5);
   readVector(v165, MAX5);
   readVector(v166, MAX5);
   readVector(v167, MAX5);
   readVector(v168, MAX5);
   readVector(v169, MAX5);
   readVector(v170, MAX5);
   readVector(v171, MAX5);
   readVector(v172, MAX5);
   readVector(v173, MAX5);
   readVector(v174, MAX5);
   readVector(v175, MAX5);
   readVector(v176, MAX5);
   readVector(v177, MAX5);
   readVector(v178, MAX5);
   readVector(v179, MAX5);
   readVector(v180, MAX5);
   readVector(v181, MAX5);
   readVector(v182, MAX5);
   readVector(v183, MAX5);
   readVector(v184, MAX5);
   readVector(v185, MAX5);
   readVector(v186, MAX5);
   readVector(v187, MAX5);
   readVector(v188, MAX5);
   readVector(v189, MAX5);
   readVector(v190, MAX5);
   readVector(v191, MAX5);
   readVector(v192, MAX5);
   readVector(v193, MAX5);
   readVector(v194, MAX5);
   readVector(v195, MAX5);
   readVector(v196, MAX5);
   readVector(v197, MAX5);
   readVector(v198, MAX5);
   readVector(v199, MAX5);
   readVector(v200, MAX5);

   readVector(v201, MAX6);
   readVector(v202, MAX6);
   readVector(v203, MAX6);
   readVector(v204, MAX6);
   readVector(v205, MAX6);
   readVector(v206, MAX6);
   readVector(v207, MAX6);
   readVector(v208, MAX6);
   readVector(v209, MAX6);
   readVector(v210, MAX6);
   readVector(v211, MAX6);
   readVector(v212, MAX6);
   readVector(v213, MAX6);
   readVector(v214, MAX6);
   readVector(v215, MAX6);
   readVector(v216, MAX6);
   readVector(v217, MAX6);
   readVector(v218, MAX6);
   readVector(v219, MAX6);
   readVector(v220, MAX6);
   readVector(v221, MAX6);
   readVector(v222, MAX6);
   readVector(v223, MAX6);
   readVector(v224, MAX6);
   readVector(v225, MAX6);
   readVector(v226, MAX6);
   readVector(v227, MAX6);
   readVector(v228, MAX6);
   readVector(v229, MAX6);
   readVector(v230, MAX6);
   readVector(v231, MAX6);
   readVector(v232, MAX6);
   readVector(v233, MAX6);
   readVector(v234, MAX6);
   readVector(v235, MAX6);
   readVector(v236, MAX6);
   readVector(v237, MAX6);
   readVector(v238, MAX6);
   readVector(v239, MAX6);
   readVector(v240, MAX6);

   readVector(v241, MAX7);
   readVector(v242, MAX7);
   readVector(v243, MAX7);
   readVector(v244, MAX7);
   readVector(v245, MAX7);
   readVector(v246, MAX7);
   readVector(v247, MAX7);
   readVector(v248, MAX7);
   readVector(v249, MAX7);
   readVector(v250, MAX7);
   readVector(v251, MAX7);
   readVector(v252, MAX7);
   readVector(v253, MAX7);
   readVector(v254, MAX7);
   readVector(v255, MAX7);
   readVector(v256, MAX7);
   readVector(v257, MAX7);
   readVector(v258, MAX7);
   readVector(v259, MAX7);
   readVector(v260, MAX7);
   readVector(v261, MAX7);
   readVector(v262, MAX7);
   readVector(v263, MAX7);
   readVector(v264, MAX7);
   readVector(v265, MAX7);
   readVector(v266, MAX7);
   readVector(v267, MAX7);
   readVector(v268, MAX7);
   readVector(v269, MAX7);
   readVector(v270, MAX7);
   readVector(v271, MAX7);
   readVector(v272, MAX7);
   readVector(v273, MAX7);
   readVector(v274, MAX7);
   readVector(v275, MAX7);
   readVector(v276, MAX7);
   readVector(v277, MAX7);
   readVector(v278, MAX7);
   readVector(v279, MAX7);
   readVector(v280, MAX7);

   readVector(v281, MAX8);
   readVector(v282, MAX8);
   readVector(v283, MAX8);
   readVector(v284, MAX8);
   readVector(v285, MAX8);
   readVector(v286, MAX8);
   readVector(v287, MAX8);
   readVector(v288, MAX8);
   readVector(v289, MAX8);
   readVector(v290, MAX8);
   readVector(v291, MAX8);
   readVector(v292, MAX8);
   readVector(v293, MAX8);
   readVector(v294, MAX8);
   readVector(v295, MAX8);
   readVector(v296, MAX8);
   readVector(v297, MAX8);
   readVector(v298, MAX8);
   readVector(v299, MAX8);
   readVector(v300, MAX8);
   readVector(v301, MAX8);
   readVector(v302, MAX8);
   readVector(v303, MAX8);
   readVector(v304, MAX8);
   readVector(v305, MAX8);
   readVector(v306, MAX8);
   readVector(v307, MAX8);
   readVector(v308, MAX8);
   readVector(v309, MAX8);
   readVector(v310, MAX8);
   readVector(v311, MAX8);
   readVector(v312, MAX8);
   readVector(v313, MAX8);
   readVector(v314, MAX8);
   readVector(v315, MAX8);
   readVector(v316, MAX8);
   readVector(v317, MAX8);
   readVector(v318, MAX8);
   readVector(v319, MAX8);
   readVector(v320, MAX8);

   clock_t begin = clock();
   selectionSort(v1, MAX1);
   selectionSort(v2, MAX1);
   selectionSort(v3, MAX1);
   selectionSort(v4, MAX1);
   selectionSort(v5, MAX1);
   selectionSort(v6, MAX1);
   selectionSort(v7, MAX1);
   selectionSort(v8, MAX1);
   selectionSort(v9, MAX1);
   selectionSort(v10, MAX1);
   selectionSort(v11, MAX1);
   selectionSort(v12, MAX1);
   selectionSort(v13, MAX1);
   selectionSort(v14, MAX1);
   selectionSort(v15, MAX1);
   selectionSort(v16, MAX1);
   selectionSort(v17, MAX1);
   selectionSort(v18, MAX1);
   selectionSort(v19, MAX1);
   selectionSort(v20, MAX1);
   selectionSort(v21, MAX1);
   selectionSort(v22, MAX1);
   selectionSort(v23, MAX1);
   selectionSort(v24, MAX1);
   selectionSort(v25, MAX1);
   selectionSort(v26, MAX1);
   selectionSort(v27, MAX1);
   selectionSort(v28, MAX1);
   selectionSort(v29, MAX1);
   selectionSort(v30, MAX1);
   selectionSort(v31, MAX1);
   selectionSort(v32, MAX1);
   selectionSort(v33, MAX1);
   selectionSort(v34, MAX1);
   selectionSort(v35, MAX1);
   selectionSort(v36, MAX1);
   selectionSort(v37, MAX1);
   selectionSort(v38, MAX1);
   selectionSort(v39, MAX1);
   selectionSort(v40, MAX1);
   clock_t end = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end - begin)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 100 elementos: %.3f ms\n", timeSpent);

   clock_t begin2 = clock();
   selectionSort(v41, MAX2);
   selectionSort(v42, MAX2);
   selectionSort(v43, MAX2);
   selectionSort(v44, MAX2);
   selectionSort(v45, MAX2);
   selectionSort(v46, MAX2);
   selectionSort(v47, MAX2);
   selectionSort(v48, MAX2);
   selectionSort(v49, MAX2);
   selectionSort(v50, MAX2);
   selectionSort(v51, MAX2);
   selectionSort(v52, MAX2);
   selectionSort(v53, MAX2);
   selectionSort(v54, MAX2);
   selectionSort(v55, MAX2);
   selectionSort(v56, MAX2);
   selectionSort(v57, MAX2);
   selectionSort(v58, MAX2);
   selectionSort(v59, MAX2);
   selectionSort(v60, MAX2);
   selectionSort(v61, MAX2);
   selectionSort(v62, MAX2);
   selectionSort(v63, MAX2);
   selectionSort(v64, MAX2);
   selectionSort(v65, MAX2);
   selectionSort(v66, MAX2);
   selectionSort(v67, MAX2);
   selectionSort(v68, MAX2);
   selectionSort(v69, MAX2);
   selectionSort(v70, MAX2);
   selectionSort(v71, MAX2);
   selectionSort(v72, MAX2);
   selectionSort(v73, MAX2);
   selectionSort(v74, MAX2);
   selectionSort(v75, MAX2);
   selectionSort(v76, MAX2);
   selectionSort(v77, MAX2);
   selectionSort(v78, MAX2);
   selectionSort(v79, MAX2);
   selectionSort(v80, MAX2);
   clock_t end2 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end2 - begin2)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 1000 elementos: %.3f ms\n", timeSpent);

   clock_t begin3 = clock();
   selectionSort(v81, MAX3);
   selectionSort(v82, MAX3);
   selectionSort(v83, MAX3);
   selectionSort(v84, MAX3);
   selectionSort(v85, MAX3);
   selectionSort(v86, MAX3);
   selectionSort(v87, MAX3);
   selectionSort(v88, MAX3);
   selectionSort(v89, MAX3);
   selectionSort(v90, MAX3);
   selectionSort(v91, MAX3);
   selectionSort(v92, MAX3);
   selectionSort(v93, MAX3);
   selectionSort(v94, MAX3);
   selectionSort(v95, MAX3);
   selectionSort(v96, MAX3);
   selectionSort(v97, MAX3);
   selectionSort(v98, MAX3);
   selectionSort(v99, MAX3);
   selectionSort(v100, MAX3);
   selectionSort(v101, MAX3);
   selectionSort(v102, MAX3);
   selectionSort(v103, MAX3);
   selectionSort(v104, MAX3);
   selectionSort(v105, MAX3);
   selectionSort(v106, MAX3);
   selectionSort(v107, MAX3);
   selectionSort(v108, MAX3);
   selectionSort(v109, MAX3);
   selectionSort(v110, MAX3);
   selectionSort(v111, MAX3);
   selectionSort(v112, MAX3);
   selectionSort(v113, MAX3);
   selectionSort(v114, MAX3);
   selectionSort(v115, MAX3);
   selectionSort(v116, MAX3);
   selectionSort(v117, MAX3);
   selectionSort(v118, MAX3);
   selectionSort(v119, MAX3);
   selectionSort(v120, MAX3);
   clock_t end3 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end3 - begin3)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 5000 elementos: %.3f ms\n", timeSpent);

   clock_t begin4 = clock();
   selectionSort(v121, MAX4);
   selectionSort(v122, MAX4);
   selectionSort(v123, MAX4);
   selectionSort(v124, MAX4);
   selectionSort(v125, MAX4);
   selectionSort(v126, MAX4);
   selectionSort(v127, MAX4);
   selectionSort(v128, MAX4);
   selectionSort(v129, MAX4);
   selectionSort(v130, MAX4);
   selectionSort(v131, MAX4);
   selectionSort(v132, MAX4);
   selectionSort(v133, MAX4);
   selectionSort(v134, MAX4);
   selectionSort(v135, MAX4);
   selectionSort(v136, MAX4);
   selectionSort(v137, MAX4);
   selectionSort(v138, MAX4);
   selectionSort(v139, MAX4);
   selectionSort(v140, MAX4);
   selectionSort(v141, MAX4);
   selectionSort(v142, MAX4);
   selectionSort(v143, MAX4);
   selectionSort(v144, MAX4);
   selectionSort(v145, MAX4);
   selectionSort(v146, MAX4);
   selectionSort(v147, MAX4);
   selectionSort(v148, MAX4);
   selectionSort(v149, MAX4);
   selectionSort(v150, MAX4);
   selectionSort(v151, MAX4);
   selectionSort(v152, MAX4);
   selectionSort(v153, MAX4);
   selectionSort(v154, MAX4);
   selectionSort(v155, MAX4);
   selectionSort(v156, MAX4);
   selectionSort(v157, MAX4);
   selectionSort(v158, MAX4);
   selectionSort(v159, MAX4);
   selectionSort(v160, MAX4);
   clock_t end4 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end4 - begin4)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 10000 elementos: %.3f ms\n", timeSpent);

   clock_t begin5 = clock();
   selectionSort(v161, MAX5);
   selectionSort(v162, MAX5);
   selectionSort(v163, MAX5);
   selectionSort(v164, MAX5);
   selectionSort(v165, MAX5);
   selectionSort(v166, MAX5);
   selectionSort(v167, MAX5);
   selectionSort(v168, MAX5);
   selectionSort(v169, MAX5);
   selectionSort(v170, MAX5);
   selectionSort(v171, MAX5);
   selectionSort(v172, MAX5);
   selectionSort(v173, MAX5);
   selectionSort(v174, MAX5);
   selectionSort(v175, MAX5);
   selectionSort(v176, MAX5);
   selectionSort(v177, MAX5);
   selectionSort(v178, MAX5);
   selectionSort(v179, MAX5);
   selectionSort(v180, MAX5);
   selectionSort(v181, MAX5);
   selectionSort(v182, MAX5);
   selectionSort(v183, MAX5);
   selectionSort(v184, MAX5);
   selectionSort(v185, MAX5);
   selectionSort(v186, MAX5);
   selectionSort(v187, MAX5);
   selectionSort(v188, MAX5);
   selectionSort(v189, MAX5);
   selectionSort(v190, MAX5);
   selectionSort(v191, MAX5);
   selectionSort(v192, MAX5);
   selectionSort(v193, MAX5);
   selectionSort(v194, MAX5);
   selectionSort(v195, MAX5);
   selectionSort(v196, MAX5);
   selectionSort(v197, MAX5);
   selectionSort(v198, MAX5);
   selectionSort(v199, MAX5);
   selectionSort(v200, MAX5);
   clock_t end5 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end5 - begin5)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 15000 elementos: %.3f ms\n", timeSpent);

   clock_t begin6 = clock();
   selectionSort(v201, MAX6);
   selectionSort(v202, MAX6);
   selectionSort(v203, MAX6);
   selectionSort(v204, MAX6);
   selectionSort(v205, MAX6);
   selectionSort(v206, MAX6);
   selectionSort(v207, MAX6);
   selectionSort(v208, MAX6);
   selectionSort(v209, MAX6);
   selectionSort(v210, MAX6);
   selectionSort(v211, MAX6);
   selectionSort(v212, MAX6);
   selectionSort(v213, MAX6);
   selectionSort(v214, MAX6);
   selectionSort(v215, MAX6);
   selectionSort(v216, MAX6);
   selectionSort(v217, MAX6);
   selectionSort(v218, MAX6);
   selectionSort(v219, MAX6);
   selectionSort(v220, MAX6);
   selectionSort(v221, MAX6);
   selectionSort(v222, MAX6);
   selectionSort(v223, MAX6);
   selectionSort(v224, MAX6);
   selectionSort(v225, MAX6);
   selectionSort(v226, MAX6);
   selectionSort(v227, MAX6);
   selectionSort(v228, MAX6);
   selectionSort(v229, MAX6);
   selectionSort(v230, MAX6);
   selectionSort(v231, MAX6);
   selectionSort(v232, MAX6);
   selectionSort(v233, MAX6);
   selectionSort(v234, MAX6);
   selectionSort(v235, MAX6);
   selectionSort(v236, MAX6);
   selectionSort(v237, MAX6);
   selectionSort(v238, MAX6);
   selectionSort(v239, MAX6);
   selectionSort(v240, MAX6);
   clock_t end6 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end6 - begin6)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 19000 elementos: %.3f ms\n", timeSpent);

   clock_t begin7 = clock();
   selectionSort(v241, MAX7);
   selectionSort(v242, MAX7);
   selectionSort(v243, MAX7);
   selectionSort(v244, MAX7);
   selectionSort(v245, MAX7);
   selectionSort(v246, MAX7);
   selectionSort(v247, MAX7);
   selectionSort(v248, MAX7);
   selectionSort(v249, MAX7);
   selectionSort(v250, MAX7);
   selectionSort(v251, MAX7);
   selectionSort(v252, MAX7);
   selectionSort(v253, MAX7);
   selectionSort(v254, MAX7);
   selectionSort(v255, MAX7);
   selectionSort(v256, MAX7);
   selectionSort(v257, MAX7);
   selectionSort(v258, MAX7);
   selectionSort(v259, MAX7);
   selectionSort(v260, MAX7);
   selectionSort(v261, MAX7);
   selectionSort(v262, MAX7);
   selectionSort(v263, MAX7);
   selectionSort(v264, MAX7);
   selectionSort(v265, MAX7);
   selectionSort(v266, MAX7);
   selectionSort(v267, MAX7);
   selectionSort(v268, MAX7);
   selectionSort(v269, MAX7);
   selectionSort(v270, MAX7);
   selectionSort(v271, MAX7);
   selectionSort(v272, MAX7);
   selectionSort(v273, MAX7);
   selectionSort(v274, MAX7);
   selectionSort(v275, MAX7);
   selectionSort(v276, MAX7);
   selectionSort(v277, MAX7);
   selectionSort(v278, MAX7);
   selectionSort(v279, MAX7);
   selectionSort(v280, MAX7);
   clock_t end7 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end7 - begin7)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 29000 elementos: %.3f ms\n", timeSpent);

   clock_t begin8 = clock();
   selectionSort(v264, MAX8);
   selectionSort(v282, MAX8);
   selectionSort(v283, MAX8);
   selectionSort(v284, MAX8);
   selectionSort(v285, MAX8);
   selectionSort(v286, MAX8);
   selectionSort(v287, MAX8);
   selectionSort(v288, MAX8);
   selectionSort(v289, MAX8);
   selectionSort(v290, MAX8);
   selectionSort(v291, MAX8);
   selectionSort(v292, MAX8);
   selectionSort(v293, MAX8);
   selectionSort(v294, MAX8);
   selectionSort(v295, MAX8);
   selectionSort(v296, MAX8);
   selectionSort(v297, MAX8);
   selectionSort(v298, MAX8);
   selectionSort(v299, MAX8);
   selectionSort(v300, MAX8);
   selectionSort(v301, MAX8);
   selectionSort(v302, MAX8);
   selectionSort(v303, MAX8);
   selectionSort(v304, MAX8);
   selectionSort(v305, MAX8);
   selectionSort(v306, MAX8);
   selectionSort(v307, MAX8);
   selectionSort(v308, MAX8);
   selectionSort(v309, MAX8);
   selectionSort(v310, MAX8);
   selectionSort(v311, MAX8);
   selectionSort(v312, MAX8);
   selectionSort(v313, MAX8);
   selectionSort(v314, MAX8);
   selectionSort(v315, MAX8);
   selectionSort(v316, MAX8);
   selectionSort(v317, MAX8);
   selectionSort(v318, MAX8);
   selectionSort(v319, MAX8);
   selectionSort(v320, MAX8);
   clock_t end8 = clock();

   timeSpent = 0.0;
   timeSpent += (((double)(end8 - begin8)/40) / CLOCKS_PER_SEC) * 1000;
   printf("Tempo gasto para ordenar 40 vetores de 49000 elementos: %.3f ms\n", timeSpent);

   return 0;
}

void selectionSort(int *vet, int lenght) {

  for(int i = 0; i < (lenght-1); i++) {
    int min = i;

    for(int j = (i+1); j < lenght; j++) {
      if(vet[j] < vet[min])
        min = j;
    }

    if(vet[i] != vet[min]) {
      int aux = vet[i];
      vet[i] = vet[min];
      vet[min] = aux;
    }
  }

}

void readVector(int *v, int length) {
   for (int i = 0; i < length; i++) {
      v[i] = rand() % 29000;
   }
}
