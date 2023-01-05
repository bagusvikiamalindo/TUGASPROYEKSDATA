#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <string.h>
#include"class.h"
#include"classkamar.h"
#include"Alat.h"
#include"covid.h"
#include"ktp.h"
#include"Filetxt.h"
#include"linklistsingle.h"
#include"linklistdouble.h"
#include"095.h"
#include"113.h"
#include"070.h"
#include"Output.h"
#include"tokoobat.h"
#include"konsultasi.h"
#include"datapengkajian.h"
//#include "vaksin.h"
//#define MAX 100



int main() {
  Apotek x;
  x.input();
  x.filetxt();

  Kamar k;
  k.menuu();

  Covid b;
  b.tescovid();
  return 0;
}