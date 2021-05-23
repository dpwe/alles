// impulse128_1024.h - lookup table
// tab_size = 1024
// function = impulse128

#ifndef __IMPULSE128_H
#define __IMPULSE128_H
#define IMPULSE128_SIZE 1024
#define IMPULSE128_MASK 0x3ff
const int16_t impulse128[IMPULSE128_SIZE] = {
32767,29463,20732,9615,-256,-6118,-7081,-4251,
0,3240,4043,2462,-256,-2487,-3106,-2003,
0,1696,2187,1332,-256,-1621,-2021,-1318,
0,1140,1473,872,-256,-1233,-1515,-986,
0,853,1095,621,-256,-1012,-1221,-790,
0,678,860,464,-256,-870,-1029,-661,
0,560,700,355,-256,-770,-894,-569,
0,475,584,276,-256,-696,-793,-500,
0,410,495,216,-256,-640,-715,-446,
0,360,426,168,-256,-594,-653,-404,
0,319,370,129,-256,-558,-602,-368,
0,286,324,97,-256,-527,-559,-339,
0,258,285,70,-256,-501,-524,-314,
0,234,252,47,-256,-479,-493,-293,
0,213,223,27,-256,-460,-466,-274,
0,195,198,10,-256,-443,-442,-258,
0,179,176,-6,-256,-428,-422,-243,
0,165,156,-19,-256,-415,-403,-230,
0,152,138,-32,-256,-403,-386,-219,
0,141,122,-43,-256,-392,-371,-208,
0,131,108,-53,-256,-382,-357,-198,
0,121,95,-62,-256,-373,-345,-190,
0,112,83,-71,-256,-364,-333,-181,
0,104,71,-78,-256,-357,-322,-174,
0,97,61,-86,-256,-350,-312,-167,
0,90,51,-92,-256,-343,-303,-160,
0,84,42,-99,-256,-337,-294,-154,
0,78,34,-105,-256,-331,-286,-148,
0,72,26,-110,-256,-325,-278,-143,
0,67,19,-116,-256,-320,-271,-138,
0,62,11,-120,-256,-315,-264,-133,
0,57,5,-125,-256,-311,-258,-129,
0,52,-2,-130,-256,-306,-251,-124,
0,48,-8,-134,-256,-302,-245,-120,
0,44,-13,-138,-256,-298,-240,-116,
0,40,-19,-142,-256,-294,-234,-112,
0,36,-24,-146,-256,-290,-229,-109,
0,33,-29,-149,-256,-287,-224,-105,
0,29,-34,-153,-256,-283,-219,-102,
0,26,-39,-156,-256,-280,-215,-98,
0,23,-44,-159,-256,-277,-210,-95,
0,19,-48,-162,-256,-274,-206,-92,
0,16,-52,-165,-256,-271,-202,-89,
0,13,-57,-168,-256,-268,-197,-86,
0,11,-61,-171,-256,-265,-193,-83,
0,8,-65,-174,-256,-262,-189,-81,
0,5,-68,-177,-256,-260,-186,-78,
0,2,-72,-179,-256,-257,-182,-75,
0,0,-76,-182,-256,-254,-178,-73,
0,-3,-80,-185,-256,-252,-175,-70,
0,-5,-83,-187,-256,-249,-171,-68,
0,-8,-87,-190,-256,-247,-168,-65,
0,-10,-90,-192,-256,-244,-164,-63,
0,-13,-93,-194,-256,-242,-161,-60,
0,-15,-97,-197,-256,-240,-158,-58,
0,-17,-100,-199,-256,-237,-154,-56,
0,-20,-103,-201,-256,-235,-151,-53,
0,-22,-107,-204,-256,-233,-148,-51,
0,-24,-110,-206,-256,-231,-145,-49,
0,-27,-113,-208,-256,-228,-141,-47,
0,-29,-116,-210,-256,-226,-138,-44,
0,-31,-119,-213,-256,-224,-135,-42,
0,-33,-122,-215,-256,-222,-132,-40,
0,-36,-126,-217,-256,-219,-129,-38,
0,-38,-129,-219,-256,-217,-126,-36,
0,-40,-132,-222,-256,-215,-122,-33,
0,-42,-135,-224,-256,-213,-119,-31,
0,-44,-138,-226,-256,-210,-116,-29,
0,-47,-141,-228,-256,-208,-113,-27,
0,-49,-145,-231,-256,-206,-110,-24,
0,-51,-148,-233,-256,-204,-107,-22,
0,-53,-151,-235,-256,-201,-103,-20,
0,-56,-154,-237,-256,-199,-100,-17,
0,-58,-158,-240,-256,-197,-97,-15,
0,-60,-161,-242,-256,-194,-93,-13,
0,-63,-164,-244,-256,-192,-90,-10,
0,-65,-168,-247,-256,-190,-87,-8,
0,-68,-171,-249,-256,-187,-83,-5,
0,-70,-175,-252,-256,-185,-80,-3,
0,-73,-178,-254,-256,-182,-76,0,
0,-75,-182,-257,-256,-179,-72,2,
0,-78,-186,-260,-256,-177,-68,5,
0,-81,-189,-262,-256,-174,-65,8,
0,-83,-193,-265,-256,-171,-61,11,
0,-86,-197,-268,-256,-168,-57,13,
0,-89,-202,-271,-256,-165,-52,16,
0,-92,-206,-274,-256,-162,-48,19,
0,-95,-210,-277,-256,-159,-44,23,
0,-98,-215,-280,-256,-156,-39,26,
0,-102,-219,-283,-256,-153,-34,29,
0,-105,-224,-287,-256,-149,-29,33,
0,-109,-229,-290,-256,-146,-24,36,
0,-112,-234,-294,-256,-142,-19,40,
0,-116,-240,-298,-256,-138,-13,44,
0,-120,-245,-302,-256,-134,-8,48,
0,-124,-251,-306,-256,-130,-2,52,
0,-129,-258,-311,-256,-125,5,57,
0,-133,-264,-315,-256,-120,11,62,
0,-138,-271,-320,-256,-116,19,67,
0,-143,-278,-325,-256,-110,26,72,
0,-148,-286,-331,-256,-105,34,78,
0,-154,-294,-337,-256,-99,42,84,
0,-160,-303,-343,-256,-92,51,90,
0,-167,-312,-350,-256,-86,61,97,
0,-174,-322,-357,-256,-78,71,104,
0,-181,-333,-364,-256,-71,83,112,
0,-190,-345,-373,-256,-62,95,121,
0,-198,-357,-382,-256,-53,108,131,
0,-208,-371,-392,-256,-43,122,141,
0,-219,-386,-403,-256,-32,138,152,
0,-230,-403,-415,-256,-19,156,165,
0,-243,-422,-428,-256,-6,176,179,
0,-258,-442,-443,-256,10,198,195,
0,-274,-466,-460,-256,27,223,213,
0,-293,-493,-479,-256,47,252,234,
0,-314,-524,-501,-256,70,285,258,
0,-339,-559,-527,-256,97,324,286,
0,-368,-602,-558,-256,129,370,319,
0,-404,-653,-594,-256,168,426,360,
0,-446,-715,-640,-256,216,495,410,
0,-500,-793,-696,-256,276,584,475,
0,-569,-894,-770,-256,355,700,560,
0,-661,-1029,-870,-256,464,860,678,
0,-790,-1221,-1012,-256,621,1095,853,
0,-986,-1515,-1233,-256,872,1473,1140,
0,-1318,-2021,-1621,-256,1332,2187,1696,
0,-2003,-3106,-2487,-256,2462,4043,3240,
0,-4251,-7081,-6118,-256,9615,20732,29463,
};

#endif