/* Generated automatically from machmode.def and config/arm/arm-modes.def
   by genmodes.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "machmode.h"
#include "real.h"

const char *const mode_name[NUM_MACHINE_MODES] =
{
  "VOID",
  "BLK",
  "CC",
  "CC_NOOV",
  "CC_Z",
  "CC_SWP",
  "CCFP",
  "CCFPE",
  "CC_DNE",
  "CC_DEQ",
  "CC_DLE",
  "CC_DLT",
  "CC_DGE",
  "CC_DGT",
  "CC_DLEU",
  "CC_DLTU",
  "CC_DGEU",
  "CC_DGTU",
  "CC_C",
  "CC_N",
  "BI",
  "QI",
  "HI",
  "SI",
  "DI",
  "TI",
  "SF",
  "DF",
  "XF",
  "CQI",
  "CHI",
  "CSI",
  "CDI",
  "CTI",
  "SC",
  "DC",
  "XC",
  "V2QI",
  "V4QI",
  "V2HI",
  "V8QI",
  "V4HI",
  "V2SI",
  "V1DI",
  "V16QI",
  "V8HI",
  "V4SI",
  "V2DI",
  "V8SI",
  "V4DI",
  "V8DI",
  "V2SF",
  "V4SF",
  "V2DF",
  "V8SF",
  "V4DF",
  "V16SF",
  "V8DF",
};

const unsigned char mode_class[NUM_MACHINE_MODES] =
{
  MODE_RANDOM,             /* VOID */
  MODE_RANDOM,             /* BLK */
  MODE_CC,                 /* CC */
  MODE_CC,                 /* CC_NOOV */
  MODE_CC,                 /* CC_Z */
  MODE_CC,                 /* CC_SWP */
  MODE_CC,                 /* CCFP */
  MODE_CC,                 /* CCFPE */
  MODE_CC,                 /* CC_DNE */
  MODE_CC,                 /* CC_DEQ */
  MODE_CC,                 /* CC_DLE */
  MODE_CC,                 /* CC_DLT */
  MODE_CC,                 /* CC_DGE */
  MODE_CC,                 /* CC_DGT */
  MODE_CC,                 /* CC_DLEU */
  MODE_CC,                 /* CC_DLTU */
  MODE_CC,                 /* CC_DGEU */
  MODE_CC,                 /* CC_DGTU */
  MODE_CC,                 /* CC_C */
  MODE_CC,                 /* CC_N */
  MODE_INT,                /* BI */
  MODE_INT,                /* QI */
  MODE_INT,                /* HI */
  MODE_INT,                /* SI */
  MODE_INT,                /* DI */
  MODE_INT,                /* TI */
  MODE_FLOAT,              /* SF */
  MODE_FLOAT,              /* DF */
  MODE_FLOAT,              /* XF */
  MODE_COMPLEX_INT,        /* CQI */
  MODE_COMPLEX_INT,        /* CHI */
  MODE_COMPLEX_INT,        /* CSI */
  MODE_COMPLEX_INT,        /* CDI */
  MODE_COMPLEX_INT,        /* CTI */
  MODE_COMPLEX_FLOAT,      /* SC */
  MODE_COMPLEX_FLOAT,      /* DC */
  MODE_COMPLEX_FLOAT,      /* XC */
  MODE_VECTOR_INT,         /* V2QI */
  MODE_VECTOR_INT,         /* V4QI */
  MODE_VECTOR_INT,         /* V2HI */
  MODE_VECTOR_INT,         /* V8QI */
  MODE_VECTOR_INT,         /* V4HI */
  MODE_VECTOR_INT,         /* V2SI */
  MODE_VECTOR_INT,         /* V1DI */
  MODE_VECTOR_INT,         /* V16QI */
  MODE_VECTOR_INT,         /* V8HI */
  MODE_VECTOR_INT,         /* V4SI */
  MODE_VECTOR_INT,         /* V2DI */
  MODE_VECTOR_INT,         /* V8SI */
  MODE_VECTOR_INT,         /* V4DI */
  MODE_VECTOR_INT,         /* V8DI */
  MODE_VECTOR_FLOAT,       /* V2SF */
  MODE_VECTOR_FLOAT,       /* V4SF */
  MODE_VECTOR_FLOAT,       /* V2DF */
  MODE_VECTOR_FLOAT,       /* V8SF */
  MODE_VECTOR_FLOAT,       /* V4DF */
  MODE_VECTOR_FLOAT,       /* V16SF */
  MODE_VECTOR_FLOAT,       /* V8DF */
};

const unsigned short mode_precision[NUM_MACHINE_MODES] =
{
  0,                       /* VOID */
  0,                       /* BLK */
  4*BITS_PER_UNIT,         /* CC */
  4*BITS_PER_UNIT,         /* CC_NOOV */
  4*BITS_PER_UNIT,         /* CC_Z */
  4*BITS_PER_UNIT,         /* CC_SWP */
  4*BITS_PER_UNIT,         /* CCFP */
  4*BITS_PER_UNIT,         /* CCFPE */
  4*BITS_PER_UNIT,         /* CC_DNE */
  4*BITS_PER_UNIT,         /* CC_DEQ */
  4*BITS_PER_UNIT,         /* CC_DLE */
  4*BITS_PER_UNIT,         /* CC_DLT */
  4*BITS_PER_UNIT,         /* CC_DGE */
  4*BITS_PER_UNIT,         /* CC_DGT */
  4*BITS_PER_UNIT,         /* CC_DLEU */
  4*BITS_PER_UNIT,         /* CC_DLTU */
  4*BITS_PER_UNIT,         /* CC_DGEU */
  4*BITS_PER_UNIT,         /* CC_DGTU */
  4*BITS_PER_UNIT,         /* CC_C */
  4*BITS_PER_UNIT,         /* CC_N */
  1,                       /* BI */
  1*BITS_PER_UNIT,         /* QI */
  2*BITS_PER_UNIT,         /* HI */
  4*BITS_PER_UNIT,         /* SI */
  8*BITS_PER_UNIT,         /* DI */
  16*BITS_PER_UNIT,        /* TI */
  4*BITS_PER_UNIT,         /* SF */
  8*BITS_PER_UNIT,         /* DF */
  12*BITS_PER_UNIT,        /* XF */
  2*BITS_PER_UNIT,         /* CQI */
  4*BITS_PER_UNIT,         /* CHI */
  8*BITS_PER_UNIT,         /* CSI */
  16*BITS_PER_UNIT,        /* CDI */
  32*BITS_PER_UNIT,        /* CTI */
  8*BITS_PER_UNIT,         /* SC */
  16*BITS_PER_UNIT,        /* DC */
  24*BITS_PER_UNIT,        /* XC */
  2*BITS_PER_UNIT,         /* V2QI */
  4*BITS_PER_UNIT,         /* V4QI */
  4*BITS_PER_UNIT,         /* V2HI */
  8*BITS_PER_UNIT,         /* V8QI */
  8*BITS_PER_UNIT,         /* V4HI */
  8*BITS_PER_UNIT,         /* V2SI */
  8*BITS_PER_UNIT,         /* V1DI */
  16*BITS_PER_UNIT,        /* V16QI */
  16*BITS_PER_UNIT,        /* V8HI */
  16*BITS_PER_UNIT,        /* V4SI */
  16*BITS_PER_UNIT,        /* V2DI */
  32*BITS_PER_UNIT,        /* V8SI */
  32*BITS_PER_UNIT,        /* V4DI */
  64*BITS_PER_UNIT,        /* V8DI */
  8*BITS_PER_UNIT,         /* V2SF */
  16*BITS_PER_UNIT,        /* V4SF */
  16*BITS_PER_UNIT,        /* V2DF */
  32*BITS_PER_UNIT,        /* V8SF */
  32*BITS_PER_UNIT,        /* V4DF */
  64*BITS_PER_UNIT,        /* V16SF */
  64*BITS_PER_UNIT,        /* V8DF */
};

const unsigned char mode_size[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  4,                       /* CC_NOOV */
  4,                       /* CC_Z */
  4,                       /* CC_SWP */
  4,                       /* CCFP */
  4,                       /* CCFPE */
  4,                       /* CC_DNE */
  4,                       /* CC_DEQ */
  4,                       /* CC_DLE */
  4,                       /* CC_DLT */
  4,                       /* CC_DGE */
  4,                       /* CC_DGT */
  4,                       /* CC_DLEU */
  4,                       /* CC_DLTU */
  4,                       /* CC_DGEU */
  4,                       /* CC_DGTU */
  4,                       /* CC_C */
  4,                       /* CC_N */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  4,                       /* SF */
  8,                       /* DF */
  12,                      /* XF */
  2,                       /* CQI */
  4,                       /* CHI */
  8,                       /* CSI */
  16,                      /* CDI */
  32,                      /* CTI */
  8,                       /* SC */
  16,                      /* DC */
  24,                      /* XC */
  2,                       /* V2QI */
  4,                       /* V4QI */
  4,                       /* V2HI */
  8,                       /* V8QI */
  8,                       /* V4HI */
  8,                       /* V2SI */
  8,                       /* V1DI */
  16,                      /* V16QI */
  16,                      /* V8HI */
  16,                      /* V4SI */
  16,                      /* V2DI */
  32,                      /* V8SI */
  32,                      /* V4DI */
  64,                      /* V8DI */
  8,                       /* V2SF */
  16,                      /* V4SF */
  16,                      /* V2DF */
  32,                      /* V8SF */
  32,                      /* V4DF */
  64,                      /* V16SF */
  64,                      /* V8DF */
};

const unsigned char mode_nunits[NUM_MACHINE_MODES] =
{
  0,                       /* VOID */
  0,                       /* BLK */
  1,                       /* CC */
  1,                       /* CC_NOOV */
  1,                       /* CC_Z */
  1,                       /* CC_SWP */
  1,                       /* CCFP */
  1,                       /* CCFPE */
  1,                       /* CC_DNE */
  1,                       /* CC_DEQ */
  1,                       /* CC_DLE */
  1,                       /* CC_DLT */
  1,                       /* CC_DGE */
  1,                       /* CC_DGT */
  1,                       /* CC_DLEU */
  1,                       /* CC_DLTU */
  1,                       /* CC_DGEU */
  1,                       /* CC_DGTU */
  1,                       /* CC_C */
  1,                       /* CC_N */
  1,                       /* BI */
  1,                       /* QI */
  1,                       /* HI */
  1,                       /* SI */
  1,                       /* DI */
  1,                       /* TI */
  1,                       /* SF */
  1,                       /* DF */
  1,                       /* XF */
  2,                       /* CQI */
  2,                       /* CHI */
  2,                       /* CSI */
  2,                       /* CDI */
  2,                       /* CTI */
  2,                       /* SC */
  2,                       /* DC */
  2,                       /* XC */
  2,                       /* V2QI */
  4,                       /* V4QI */
  2,                       /* V2HI */
  8,                       /* V8QI */
  4,                       /* V4HI */
  2,                       /* V2SI */
  1,                       /* V1DI */
  16,                      /* V16QI */
  8,                       /* V8HI */
  4,                       /* V4SI */
  2,                       /* V2DI */
  8,                       /* V8SI */
  4,                       /* V4DI */
  8,                       /* V8DI */
  2,                       /* V2SF */
  4,                       /* V4SF */
  2,                       /* V2DF */
  8,                       /* V8SF */
  4,                       /* V4DF */
  16,                      /* V16SF */
  8,                       /* V8DF */
};

const unsigned char mode_wider[NUM_MACHINE_MODES] =
{
  VOIDmode,                /* VOID */
  VOIDmode,                /* BLK */
  VOIDmode,                /* CC */
  VOIDmode,                /* CC_NOOV */
  VOIDmode,                /* CC_Z */
  VOIDmode,                /* CC_SWP */
  VOIDmode,                /* CCFP */
  VOIDmode,                /* CCFPE */
  VOIDmode,                /* CC_DNE */
  VOIDmode,                /* CC_DEQ */
  VOIDmode,                /* CC_DLE */
  VOIDmode,                /* CC_DLT */
  VOIDmode,                /* CC_DGE */
  VOIDmode,                /* CC_DGT */
  VOIDmode,                /* CC_DLEU */
  VOIDmode,                /* CC_DLTU */
  VOIDmode,                /* CC_DGEU */
  VOIDmode,                /* CC_DGTU */
  VOIDmode,                /* CC_C */
  VOIDmode,                /* CC_N */
  QImode,                  /* BI */
  HImode,                  /* QI */
  SImode,                  /* HI */
  DImode,                  /* SI */
  TImode,                  /* DI */
  VOIDmode,                /* TI */
  DFmode,                  /* SF */
  XFmode,                  /* DF */
  VOIDmode,                /* XF */
  CHImode,                 /* CQI */
  CSImode,                 /* CHI */
  CDImode,                 /* CSI */
  CTImode,                 /* CDI */
  VOIDmode,                /* CTI */
  DCmode,                  /* SC */
  XCmode,                  /* DC */
  VOIDmode,                /* XC */
  V4QImode,                /* V2QI */
  V2HImode,                /* V4QI */
  V8QImode,                /* V2HI */
  V4HImode,                /* V8QI */
  V2SImode,                /* V4HI */
  V1DImode,                /* V2SI */
  V16QImode,               /* V1DI */
  V8HImode,                /* V16QI */
  V4SImode,                /* V8HI */
  V2DImode,                /* V4SI */
  V8SImode,                /* V2DI */
  V4DImode,                /* V8SI */
  V8DImode,                /* V4DI */
  VOIDmode,                /* V8DI */
  V4SFmode,                /* V2SF */
  V2DFmode,                /* V4SF */
  V8SFmode,                /* V2DF */
  V4DFmode,                /* V8SF */
  V16SFmode,               /* V4DF */
  V8DFmode,                /* V16SF */
  VOIDmode,                /* V8DF */
};

const unsigned HOST_WIDE_INT mode_mask_array[NUM_MACHINE_MODES] =
{
#define MODE_MASK(m)                          \
  ((m) >= HOST_BITS_PER_WIDE_INT)             \
   ? ~(unsigned HOST_WIDE_INT) 0              \
   : ((unsigned HOST_WIDE_INT) 1 << (m)) - 1

  MODE_MASK (0),           /* VOID */
  MODE_MASK (0),           /* BLK */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_NOOV */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_Z */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_SWP */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCFP */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCFPE */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_DNE */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_DEQ */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_DLE */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_DLT */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_DGE */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_DGT */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_DLEU */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_DLTU */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_DGEU */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_DGTU */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_C */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC_N */
  MODE_MASK (1),           /* BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* TI */
  MODE_MASK (4*BITS_PER_UNIT),   /* SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* DF */
  MODE_MASK (12*BITS_PER_UNIT),    /* XF */
  MODE_MASK (2*BITS_PER_UNIT),   /* CQI */
  MODE_MASK (4*BITS_PER_UNIT),   /* CHI */
  MODE_MASK (8*BITS_PER_UNIT),   /* CSI */
  MODE_MASK (16*BITS_PER_UNIT),    /* CDI */
  MODE_MASK (32*BITS_PER_UNIT),    /* CTI */
  MODE_MASK (8*BITS_PER_UNIT),   /* SC */
  MODE_MASK (16*BITS_PER_UNIT),    /* DC */
  MODE_MASK (24*BITS_PER_UNIT),    /* XC */
  MODE_MASK (2*BITS_PER_UNIT),   /* V2QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* V4QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* V2HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V8QI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V4HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V2SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V1DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V16QI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V8HI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V4SI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V2DI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V8SI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V4DI */
  MODE_MASK (64*BITS_PER_UNIT),    /* V8DI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V2SF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V4SF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V2DF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V8SF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V4DF */
  MODE_MASK (64*BITS_PER_UNIT),    /* V16SF */
  MODE_MASK (64*BITS_PER_UNIT),    /* V8DF */
#undef MODE_MASK
};

const unsigned char mode_inner[NUM_MACHINE_MODES] =
{
  VOIDmode,                /* VOID */
  VOIDmode,                /* BLK */
  VOIDmode,                /* CC */
  VOIDmode,                /* CC_NOOV */
  VOIDmode,                /* CC_Z */
  VOIDmode,                /* CC_SWP */
  VOIDmode,                /* CCFP */
  VOIDmode,                /* CCFPE */
  VOIDmode,                /* CC_DNE */
  VOIDmode,                /* CC_DEQ */
  VOIDmode,                /* CC_DLE */
  VOIDmode,                /* CC_DLT */
  VOIDmode,                /* CC_DGE */
  VOIDmode,                /* CC_DGT */
  VOIDmode,                /* CC_DLEU */
  VOIDmode,                /* CC_DLTU */
  VOIDmode,                /* CC_DGEU */
  VOIDmode,                /* CC_DGTU */
  VOIDmode,                /* CC_C */
  VOIDmode,                /* CC_N */
  VOIDmode,                /* BI */
  VOIDmode,                /* QI */
  VOIDmode,                /* HI */
  VOIDmode,                /* SI */
  VOIDmode,                /* DI */
  VOIDmode,                /* TI */
  VOIDmode,                /* SF */
  VOIDmode,                /* DF */
  VOIDmode,                /* XF */
  QImode,                  /* CQI */
  HImode,                  /* CHI */
  SImode,                  /* CSI */
  DImode,                  /* CDI */
  TImode,                  /* CTI */
  SFmode,                  /* SC */
  DFmode,                  /* DC */
  XFmode,                  /* XC */
  QImode,                  /* V2QI */
  QImode,                  /* V4QI */
  HImode,                  /* V2HI */
  QImode,                  /* V8QI */
  HImode,                  /* V4HI */
  SImode,                  /* V2SI */
  DImode,                  /* V1DI */
  QImode,                  /* V16QI */
  HImode,                  /* V8HI */
  SImode,                  /* V4SI */
  DImode,                  /* V2DI */
  SImode,                  /* V8SI */
  DImode,                  /* V4DI */
  DImode,                  /* V8DI */
  SFmode,                  /* V2SF */
  SFmode,                  /* V4SF */
  DFmode,                  /* V2DF */
  SFmode,                  /* V8SF */
  DFmode,                  /* V4DF */
  SFmode,                  /* V16SF */
  DFmode,                  /* V8DF */
};

const unsigned char mode_base_align[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  4,                       /* CC_NOOV */
  4,                       /* CC_Z */
  4,                       /* CC_SWP */
  4,                       /* CCFP */
  4,                       /* CCFPE */
  4,                       /* CC_DNE */
  4,                       /* CC_DEQ */
  4,                       /* CC_DLE */
  4,                       /* CC_DLT */
  4,                       /* CC_DGE */
  4,                       /* CC_DGT */
  4,                       /* CC_DLEU */
  4,                       /* CC_DLTU */
  4,                       /* CC_DGEU */
  4,                       /* CC_DGTU */
  4,                       /* CC_C */
  4,                       /* CC_N */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  4,                       /* SF */
  8,                       /* DF */
  4,                       /* XF */
  1,                       /* CQI */
  2,                       /* CHI */
  4,                       /* CSI */
  8,                       /* CDI */
  16,                      /* CTI */
  4,                       /* SC */
  8,                       /* DC */
  4,                       /* XC */
  2,                       /* V2QI */
  4,                       /* V4QI */
  4,                       /* V2HI */
  8,                       /* V8QI */
  8,                       /* V4HI */
  8,                       /* V2SI */
  8,                       /* V1DI */
  16,                      /* V16QI */
  16,                      /* V8HI */
  16,                      /* V4SI */
  16,                      /* V2DI */
  32,                      /* V8SI */
  32,                      /* V4DI */
  64,                      /* V8DI */
  8,                       /* V2SF */
  16,                      /* V4SF */
  16,                      /* V2DF */
  32,                      /* V8SF */
  32,                      /* V4DF */
  64,                      /* V16SF */
  64,                      /* V8DF */
};

const unsigned char class_narrowest_mode[MAX_MODE_CLASS] =
{
  MIN_MODE_RANDOM,         /* VOID */
  MIN_MODE_CC,             /* CC */
  MIN_MODE_INT,            /* QI */
  MIN_MODE_PARTIAL_INT,    /* VOID */
  MIN_MODE_FLOAT,          /* SF */
  MIN_MODE_COMPLEX_INT,    /* CQI */
  MIN_MODE_COMPLEX_FLOAT,  /* SC */
  MIN_MODE_VECTOR_INT,     /* V2QI */
  MIN_MODE_VECTOR_FLOAT,   /* V2SF */
};

const struct real_format *
 real_format_for_mode[MAX_MODE_FLOAT - MIN_MODE_FLOAT + 1] =
{
  &ieee_single_format,     /* SF */
  &ieee_double_format,     /* DF */
  0,                       /* XF */
};

void
init_adjust_machine_modes (void)
{
  size_t s ATTRIBUTE_UNUSED;
}
