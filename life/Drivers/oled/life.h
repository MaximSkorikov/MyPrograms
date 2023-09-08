#ifndef LIFE1_H_INCLUDED
#define LIFE1_H_INCLUDED
#define LINES 32
#define COLUMNS 128

void init(void);
void show(void);
int normx(int x) ;
int normy(int y) ;
int count_of_neighbor(int y, int x);
void update_generation(void);
#endif // LIFE1_H_INCLUDED
