// Automatically generated by cegarmc
//
#include <assert.h>

extern void __VERIFIER_assume(int);
extern int __VERIFIER_nondet_bool();
extern char __VERIFIER_nondet_char();
extern signed char __VERIFIER_nondet_schar();
extern unsigned char __VERIFIER_nondet_uchar();
extern int __VERIFIER_nondet_int();
extern unsigned int __VERIFIER_nondet_uint();
extern short __VERIFIER_nondet_short();
extern unsigned short __VERIFIER_nondet_ushort();
extern long __VERIFIER_nondet_long();
extern unsigned long __VERIFIER_nondet_ulong();
extern long long __VERIFIER_nondet_longlong();
extern unsigned long long __VERIFIER_nondet_ull();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();
extern long double __VERIFIER_nondet_longdouble();
extern void * __VERIFIER_nondet_pointer();

int D_print_i;
int D_print_st;
int D_z;
int N_generate_i;
int N_generate_st;
int S1_addsub_i;
int S1_addsub_st;
int S2_presdbl_i;
int S2_presdbl_st;
int S3_zero_i;
int S3_zero_st;
int count;
int main_clk_ev;
int main_clk_neg_edge;
int main_clk_pos_edge;
int main_clk_req_up;
int main_clk_val;
int main_clk_val_t;
int main_dbl_ev;
int main_dbl_req_up;
int main_dbl_val;
int main_dbl_val_t;
int main_diff_ev;
int main_diff_req_up;
int main_diff_val;
int main_diff_val_t;
int main_in1_ev;
int main_in1_req_up;
int main_in1_val;
int main_in1_val_t;
int main_in2_ev;
int main_in2_req_up;
int main_in2_val;
int main_in2_val_t;
int main_pres_ev;
int main_pres_req_up;
int main_pres_val;
int main_pres_val_t;
int main_sum_ev;
int main_sum_req_up;
int main_sum_val;
int main_sum_val_t;
int main_zero_ev;
int main_zero_req_up;
int main_zero_val;
int main_zero_val_t;
int res;

void error();
void N_generate();
void S1_addsub();
void S2_presdbl();
void S3_zero();
void D_print();
void eval();
void start_simulation();


void error() {
  {
  goto ERROR;
  ERROR: ;
  return;
  }
}

void N_generate() {
  auto int a;
  auto int b;
  {
    main_in1_val_t = __VERIFIER_nondet_int();
  main_in1_req_up = 1;
    main_in2_val_t = __VERIFIER_nondet_int();
  main_in2_req_up = 1;
  return;
  }
}

void S1_addsub() {
  auto int a;
  auto int b;
  {
  a = main_in1_val;
  b = main_in2_val;
  main_sum_val_t = a + b;
  main_sum_req_up = 1;
  main_diff_val_t = a - b;
  main_diff_req_up = 1;
  return;
  }
}

void S2_presdbl() {
  auto int a;
  auto int b;
  auto int c;
  auto int d;
  {
  a = main_sum_val;
  b = main_diff_val;
  main_pres_val_t = a;
  main_pres_req_up = 1;
  c = a + b;
  d = a - b;
  main_dbl_val_t = c + d;
  main_dbl_req_up = 1;
  return;
  }
}

void S3_zero() {
  auto int a;
  auto int b;
  {
  a = main_pres_val;
  b = main_dbl_val;
  main_zero_val_t = b - (a + a);
  main_zero_req_up = 1;
  return;
  }
}

void D_print() {
  {
  D_z = main_zero_val;
  return;
  }
}

void eval() {
  auto int tmp;
  auto int tmp___0;
  auto int tmp___1;
  auto int tmp___2;
  auto int tmp___3;
  {
  {
    while (1) {
      {
        while_0_continue: ;
        if (N_generate_st == 0) {
          }
        else {
          if (S1_addsub_st == 0) {
            }
          else {
            if (S2_presdbl_st == 0) {
              }
            else {
              if (S3_zero_st == 0) {
                }
              else {
                if (D_print_st == 0) {
                  }
                else {
                  goto while_0_break;
                  }
                }
              }
            }
          }
        if (N_generate_st == 0) {
          {
                        tmp = __VERIFIER_nondet_int();
            }
          if (tmp) {
            N_generate_st = 1;
                        N_generate();
            }
          else {
            }
          }
        else {
          }
        if (S1_addsub_st == 0) {
          {
                        tmp___0 = __VERIFIER_nondet_int();
            }
          if (tmp___0) {
            S1_addsub_st = 1;
                        S1_addsub();
            }
          else {
            }
          }
        else {
          }
        if (S2_presdbl_st == 0) {
          {
                        tmp___1 = __VERIFIER_nondet_int();
            }
          if (tmp___1) {
            S2_presdbl_st = 1;
                        S2_presdbl();
            }
          else {
            }
          }
        else {
          }
        if (S3_zero_st == 0) {
          {
                        tmp___2 = __VERIFIER_nondet_int();
            }
          if (tmp___2) {
            S3_zero_st = 1;
                        S3_zero();
            }
          else {
            }
          }
        else {
          }
        if (D_print_st == 0) {
          {
                        tmp___3 = __VERIFIER_nondet_int();
            }
          if (tmp___3) {
            D_print_st = 1;
                        D_print();
            }
          else {
            }
          }
        else {
          }
        }
      }
    while_0_break: ;
    }
  return;
  }
}

void start_simulation() {
  auto int kernel_st;
  {
  kernel_st = 0;
  if (main_in1_req_up == 1) {
    if (main_in1_val != main_in1_val_t) {
      main_in1_val = main_in1_val_t;
      main_in1_ev = 0;
      }
    else {
      }
    main_in1_req_up = 0;
    }
  else {
    }
  if (main_in2_req_up == 1) {
    if (main_in2_val != main_in2_val_t) {
      main_in2_val = main_in2_val_t;
      main_in2_ev = 0;
      }
    else {
      }
    main_in2_req_up = 0;
    }
  else {
    }
  if (main_sum_req_up == 1) {
    if (main_sum_val != main_sum_val_t) {
      main_sum_val = main_sum_val_t;
      main_sum_ev = 0;
      }
    else {
      }
    main_sum_req_up = 0;
    }
  else {
    }
  if (main_diff_req_up == 1) {
    if (main_diff_val != main_diff_val_t) {
      main_diff_val = main_diff_val_t;
      main_diff_ev = 0;
      }
    else {
      }
    main_diff_req_up = 0;
    }
  else {
    }
  if (main_pres_req_up == 1) {
    if (main_pres_val != main_pres_val_t) {
      main_pres_val = main_pres_val_t;
      main_pres_ev = 0;
      }
    else {
      }
    main_pres_req_up = 0;
    }
  else {
    }
  if (main_dbl_req_up == 1) {
    if (main_dbl_val != main_dbl_val_t) {
      main_dbl_val = main_dbl_val_t;
      main_dbl_ev = 0;
      }
    else {
      }
    main_dbl_req_up = 0;
    }
  else {
    }
  if (main_zero_req_up == 1) {
    if (main_zero_val != main_zero_val_t) {
      main_zero_val = main_zero_val_t;
      main_zero_ev = 0;
      }
    else {
      }
    main_zero_req_up = 0;
    }
  else {
    }
  if (main_clk_req_up == 1) {
    if (main_clk_val != main_clk_val_t) {
      main_clk_val = main_clk_val_t;
      main_clk_ev = 0;
      if (main_clk_val == 1) {
        main_clk_pos_edge = 0;
        main_clk_neg_edge = 2;
        }
      else {
        main_clk_neg_edge = 0;
        main_clk_pos_edge = 2;
        }
      }
    else {
      }
    main_clk_req_up = 0;
    }
  else {
    }
  if (N_generate_i == 1) {
    N_generate_st = 0;
    }
  else {
    N_generate_st = 2;
    }
  if (S1_addsub_i == 1) {
    S1_addsub_st = 0;
    }
  else {
    S1_addsub_st = 2;
    }
  if (S2_presdbl_i == 1) {
    S2_presdbl_st = 0;
    }
  else {
    S2_presdbl_st = 2;
    }
  if (S3_zero_i == 1) {
    S3_zero_st = 0;
    }
  else {
    S3_zero_st = 2;
    }
  if (D_print_i == 1) {
    D_print_st = 0;
    }
  else {
    D_print_st = 2;
    }
  if (main_in1_ev == 0) {
    main_in1_ev = 1;
    }
  else {
    }
  if (main_in2_ev == 0) {
    main_in2_ev = 1;
    }
  else {
    }
  if (main_sum_ev == 0) {
    main_sum_ev = 1;
    }
  else {
    }
  if (main_diff_ev == 0) {
    main_diff_ev = 1;
    }
  else {
    }
  if (main_pres_ev == 0) {
    main_pres_ev = 1;
    }
  else {
    }
  if (main_dbl_ev == 0) {
    main_dbl_ev = 1;
    }
  else {
    }
  if (main_zero_ev == 0) {
    main_zero_ev = 1;
    }
  else {
    }
  if (main_clk_ev == 0) {
    main_clk_ev = 1;
    }
  else {
    }
  if (main_clk_pos_edge == 0) {
    main_clk_pos_edge = 1;
    }
  else {
    }
  if (main_clk_neg_edge == 0) {
    main_clk_neg_edge = 1;
    }
  else {
    }
  if (main_clk_pos_edge == 1) {
    N_generate_st = 0;
    }
  else {
    }
  if (main_clk_pos_edge == 1) {
    S1_addsub_st = 0;
    }
  else {
    }
  if (main_clk_pos_edge == 1) {
    S2_presdbl_st = 0;
    }
  else {
    }
  if (main_clk_pos_edge == 1) {
    S3_zero_st = 0;
    }
  else {
    }
  if (main_clk_pos_edge == 1) {
    D_print_st = 0;
    }
  else {
    }
  if (main_in1_ev == 1) {
    main_in1_ev = 2;
    }
  else {
    }
  if (main_in2_ev == 1) {
    main_in2_ev = 2;
    }
  else {
    }
  if (main_sum_ev == 1) {
    main_sum_ev = 2;
    }
  else {
    }
  if (main_diff_ev == 1) {
    main_diff_ev = 2;
    }
  else {
    }
  if (main_pres_ev == 1) {
    main_pres_ev = 2;
    }
  else {
    }
  if (main_dbl_ev == 1) {
    main_dbl_ev = 2;
    }
  else {
    }
  if (main_zero_ev == 1) {
    main_zero_ev = 2;
    }
  else {
    }
  if (main_clk_ev == 1) {
    main_clk_ev = 2;
    }
  else {
    }
  if (main_clk_pos_edge == 1) {
    main_clk_pos_edge = 2;
    }
  else {
    }
  if (main_clk_neg_edge == 1) {
    main_clk_neg_edge = 2;
    }
  else {
    }
  {
    while (1) {
      {
        while_1_continue: ;
        {
          kernel_st = 1;
                    eval();
          }
        kernel_st = 2;
        if (main_in1_req_up == 1) {
          if (main_in1_val != main_in1_val_t) {
            main_in1_val = main_in1_val_t;
            main_in1_ev = 0;
            }
          else {
            }
          main_in1_req_up = 0;
          }
        else {
          }
        if (main_in2_req_up == 1) {
          if (main_in2_val != main_in2_val_t) {
            main_in2_val = main_in2_val_t;
            main_in2_ev = 0;
            }
          else {
            }
          main_in2_req_up = 0;
          }
        else {
          }
        if (main_sum_req_up == 1) {
          if (main_sum_val != main_sum_val_t) {
            main_sum_val = main_sum_val_t;
            main_sum_ev = 0;
            }
          else {
            }
          main_sum_req_up = 0;
          }
        else {
          }
        if (main_diff_req_up == 1) {
          if (main_diff_val != main_diff_val_t) {
            main_diff_val = main_diff_val_t;
            main_diff_ev = 0;
            }
          else {
            }
          main_diff_req_up = 0;
          }
        else {
          }
        if (main_pres_req_up == 1) {
          if (main_pres_val != main_pres_val_t) {
            main_pres_val = main_pres_val_t;
            main_pres_ev = 0;
            }
          else {
            }
          main_pres_req_up = 0;
          }
        else {
          }
        if (main_dbl_req_up == 1) {
          if (main_dbl_val != main_dbl_val_t) {
            main_dbl_val = main_dbl_val_t;
            main_dbl_ev = 0;
            }
          else {
            }
          main_dbl_req_up = 0;
          }
        else {
          }
        if (main_zero_req_up == 1) {
          if (main_zero_val != main_zero_val_t) {
            main_zero_val = main_zero_val_t;
            main_zero_ev = 0;
            }
          else {
            }
          main_zero_req_up = 0;
          }
        else {
          }
        if (main_clk_req_up == 1) {
          if (main_clk_val != main_clk_val_t) {
            main_clk_val = main_clk_val_t;
            main_clk_ev = 0;
            if (main_clk_val == 1) {
              main_clk_pos_edge = 0;
              main_clk_neg_edge = 2;
              }
            else {
              main_clk_neg_edge = 0;
              main_clk_pos_edge = 2;
              }
            }
          else {
            }
          main_clk_req_up = 0;
          }
        else {
          }
        kernel_st = 3;
        if (main_in1_ev == 0) {
          main_in1_ev = 1;
          }
        else {
          }
        if (main_in2_ev == 0) {
          main_in2_ev = 1;
          }
        else {
          }
        if (main_sum_ev == 0) {
          main_sum_ev = 1;
          }
        else {
          }
        if (main_diff_ev == 0) {
          main_diff_ev = 1;
          }
        else {
          }
        if (main_pres_ev == 0) {
          main_pres_ev = 1;
          }
        else {
          }
        if (main_dbl_ev == 0) {
          main_dbl_ev = 1;
          }
        else {
          }
        if (main_zero_ev == 0) {
          main_zero_ev = 1;
          }
        else {
          }
        if (main_clk_ev == 0) {
          main_clk_ev = 1;
          }
        else {
          }
        if (main_clk_pos_edge == 0) {
          main_clk_pos_edge = 1;
          }
        else {
          }
        if (main_clk_neg_edge == 0) {
          main_clk_neg_edge = 1;
          }
        else {
          }
        if (main_clk_pos_edge == 1) {
          N_generate_st = 0;
          }
        else {
          }
        if (main_clk_pos_edge == 1) {
          S1_addsub_st = 0;
          }
        else {
          }
        if (main_clk_pos_edge == 1) {
          S2_presdbl_st = 0;
          }
        else {
          }
        if (main_clk_pos_edge == 1) {
          S3_zero_st = 0;
          }
        else {
          }
        if (main_clk_pos_edge == 1) {
          D_print_st = 0;
          }
        else {
          }
        if (main_in1_ev == 1) {
          main_in1_ev = 2;
          }
        else {
          }
        if (main_in2_ev == 1) {
          main_in2_ev = 2;
          }
        else {
          }
        if (main_sum_ev == 1) {
          main_sum_ev = 2;
          }
        else {
          }
        if (main_diff_ev == 1) {
          main_diff_ev = 2;
          }
        else {
          }
        if (main_pres_ev == 1) {
          main_pres_ev = 2;
          }
        else {
          }
        if (main_dbl_ev == 1) {
          main_dbl_ev = 2;
          }
        else {
          }
        if (main_zero_ev == 1) {
          main_zero_ev = 2;
          }
        else {
          }
        if (main_clk_ev == 1) {
          main_clk_ev = 2;
          }
        else {
          }
        if (main_clk_pos_edge == 1) {
          main_clk_pos_edge = 2;
          }
        else {
          }
        if (main_clk_neg_edge == 1) {
          main_clk_neg_edge = 2;
          }
        else {
          }
        if (N_generate_st == 0) {
          }
        else {
          if (S1_addsub_st == 0) {
            }
          else {
            if (S2_presdbl_st == 0) {
              }
            else {
              if (S3_zero_st == 0) {
                }
              else {
                if (D_print_st == 0) {
                  }
                else {
                  goto while_1_break;
                  }
                }
              }
            }
          }
        }
      }
    while_1_break: ;
    }
  return;
  }
}

void main () {
//
// Number of lvals: 62
//   Frama_C_interval: int (int min, int max)
//      int (int min, int max)
//   error: void (void)
//      void (void)
//   count: int
//      int
//   res: int
//      int
//   main_in1_val: int
//      int
//   main_in1_val_t: int
//      int
//   main_in1_ev: int
//      int
//   main_in1_req_up: int
//      int
//   main_in2_val: int
//      int
//   main_in2_val_t: int
//      int
//   main_in2_ev: int
//      int
//   main_in2_req_up: int
//      int
//   main_diff_val: int
//      int
//   main_diff_val_t: int
//      int
//   main_diff_ev: int
//      int
//   main_diff_req_up: int
//      int
//   main_sum_val: int
//      int
//   main_sum_val_t: int
//      int
//   main_sum_ev: int
//      int
//   main_sum_req_up: int
//      int
//   main_pres_val: int
//      int
//   main_pres_val_t: int
//      int
//   main_pres_ev: int
//      int
//   main_pres_req_up: int
//      int
//   main_dbl_val: int
//      int
//   main_dbl_val_t: int
//      int
//   main_dbl_ev: int
//      int
//   main_dbl_req_up: int
//      int
//   main_zero_val: int
//      int
//   main_zero_val_t: int
//      int
//   main_zero_ev: int
//      int
//   main_zero_req_up: int
//      int
//   main_clk_val: int
//      int
//   main_clk_val_t: int
//      int
//   main_clk_ev: int
//      int
//   main_clk_req_up: int
//      int
//   main_clk_pos_edge: int
//      int
//   main_clk_neg_edge: int
//      int
//   N_generate_st: int
//      int
//   N_generate_i: int
//      int
//   S1_addsub_st: int
//      int
//   S1_addsub_i: int
//      int
//   S2_presdbl_st: int
//      int
//   S2_presdbl_i: int
//      int
//   S3_zero_st: int
//      int
//   S3_zero_i: int
//      int
//   D_z: int
//      int
//   D_print_st: int
//      int
//   D_print_i: int
//      int
//   N_generate: void (void)
//      void (void)
//   S1_addsub: void (void)
//      void (void)
//   S2_presdbl: void (void)
//      void (void)
//   S3_zero: void (void)
//      void (void)
//   D_print: void (void)
//      void (void)
//   eval: void (void)
//      void (void)
//   start_simulation: void (void)
//      void (void)
//   n1: int
//      int
//   n2: int
//      int
//   n3: int
//      int
//   bound: int
//      int
//   i: int
//      int
//   flag: int
//      int
//

D_print_i = __VERIFIER_nondet_int();
D_print_st = __VERIFIER_nondet_int();
D_z = __VERIFIER_nondet_int();
N_generate_i = __VERIFIER_nondet_int();
N_generate_st = __VERIFIER_nondet_int();
S1_addsub_i = __VERIFIER_nondet_int();
S1_addsub_st = __VERIFIER_nondet_int();
S2_presdbl_i = __VERIFIER_nondet_int();
S2_presdbl_st = __VERIFIER_nondet_int();
S3_zero_i = __VERIFIER_nondet_int();
S3_zero_st = __VERIFIER_nondet_int();
count = __VERIFIER_nondet_int();
main_clk_ev = __VERIFIER_nondet_int();
main_clk_neg_edge = __VERIFIER_nondet_int();
main_clk_pos_edge = __VERIFIER_nondet_int();
main_clk_req_up = __VERIFIER_nondet_int();
main_clk_val = __VERIFIER_nondet_int();
main_clk_val_t = __VERIFIER_nondet_int();
main_dbl_ev = __VERIFIER_nondet_int();
main_dbl_req_up = __VERIFIER_nondet_int();
main_dbl_val = __VERIFIER_nondet_int();
main_dbl_val_t = __VERIFIER_nondet_int();
main_diff_ev = __VERIFIER_nondet_int();
main_diff_req_up = __VERIFIER_nondet_int();
main_diff_val = __VERIFIER_nondet_int();
main_diff_val_t = __VERIFIER_nondet_int();
main_in1_ev = __VERIFIER_nondet_int();
main_in1_req_up = __VERIFIER_nondet_int();
main_in1_val = __VERIFIER_nondet_int();
main_in1_val_t = __VERIFIER_nondet_int();
main_in2_ev = __VERIFIER_nondet_int();
main_in2_req_up = __VERIFIER_nondet_int();
main_in2_val = __VERIFIER_nondet_int();
main_in2_val_t = __VERIFIER_nondet_int();
main_pres_ev = __VERIFIER_nondet_int();
main_pres_req_up = __VERIFIER_nondet_int();
main_pres_val = __VERIFIER_nondet_int();
main_pres_val_t = __VERIFIER_nondet_int();
main_sum_ev = __VERIFIER_nondet_int();
main_sum_req_up = __VERIFIER_nondet_int();
main_sum_val = __VERIFIER_nondet_int();
main_sum_val_t = __VERIFIER_nondet_int();
main_zero_ev = __VERIFIER_nondet_int();
main_zero_req_up = __VERIFIER_nondet_int();
main_zero_val = __VERIFIER_nondet_int();
main_zero_val_t = __VERIFIER_nondet_int();
res = __VERIFIER_nondet_int();



{
  int n1 = 3;
  int n2 = 5;
  int n3 = 7;
  res = 0;
  auto int bound;
  bound = __VERIFIER_nondet_int();
  __VERIFIER_assume(bound >= 1);
  {
    {
      count = 0;
      main_in1_ev = 2;
      main_in1_req_up = 0;
      main_in2_ev = 2;
      main_in2_req_up = 0;
      main_diff_ev = 2;
      main_diff_req_up = 0;
      main_sum_ev = 2;
      main_sum_req_up = 0;
      main_pres_ev = 2;
      main_pres_req_up = 0;
      main_dbl_ev = 2;
      main_dbl_req_up = 0;
      main_zero_ev = 2;
      main_zero_req_up = 0;
      main_clk_val = 0;
      main_clk_ev = 2;
      main_clk_req_up = 0;
      main_clk_pos_edge = 2;
      main_clk_neg_edge = 2;
      count = 0;
      N_generate_i = 0;
      S1_addsub_i = 0;
      S2_presdbl_i = 0;
      S3_zero_i = 0;
      D_print_i = 0;
            start_simulation();
      }
    {
      int i = 0;
      while (1) {
        if (i < bound) {
          }
        else {
          break;
          }
        {
          if (i % n1 == 0) {
            if (i % n2 == 0) {
              if (i % n3 == 0) {
                res = i;
                }
              else {
                }
              }
            else {
              }
            }
          else {
            }
          i ++;
          int flag = res;
          while_2_continue: ;
          {
            main_clk_val_t = 1;
            main_clk_req_up = 1;
                        start_simulation();
            count ++;
            }

	  if (res % 105 == 0) {
	    ;
	  } else {
	    error();
	  }
	  
          if (count == 5) {
            if (! (D_z == 0)) {
              error();
              }
            else {
              }
            count = 0;
            }
          else {
            }
          {
            main_clk_val_t = 0;
            main_clk_req_up = 1;
                        start_simulation();
            }
          }
        }
      }
    }
  }
CMCGOODEND:
assert (1 == 1);
CMCBADEND:  return;
}
