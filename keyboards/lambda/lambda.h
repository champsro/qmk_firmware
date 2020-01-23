#include "quantum.h"

#define layout_o4x12(                                               \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0a, K0b,     \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1a, K1b,     \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2a, K2b,     \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3a, K3b)     \
    {                                                               \
      {K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0a, K0b}, \
      {K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1a, K1b}, \
      {K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2a, K2b}, \
      {K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3a, K3b}  \
    }
