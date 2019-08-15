#ifndef A_H
#define A_H

#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdbool.h>
#include <SDL2_mixer/SDL_mixer.h>

typedef struct Mob {
	int id;
	int hp;
	int way;
	int ticks;
	SDL_Surface *bmp;
	SDL_Rect rect;
	bool isdead;
	struct Mob *next;
} Mob;

typedef struct Tower {
    int id;
	SDL_Rect rect;
	SDL_Rect radius;
    int damage;
    bool isRadius;
    struct Tower *next;
} Tower;
 
void create_towers(Tower *towers);
void create_mobs(Mob *mobs, int count, int way);
void show_mobs(SDL_Surface *sur, Mob *mobs, int anime);
void mobs_way(Mob *mobs);
void isRadius(Tower *towers, Mob *mobs);
void draw_sprite1(SDL_Surface *sur, int x, int y, int *d, int gold);
void draw_choise(SDL_Surface *sur, int *c);
void draw_tower(SDL_Surface *sur, int x, int y, int t, int statx, int staty, int statw, int stath, int towertype, int anime, int lvl);
void draw_sprite2(SDL_Surface *sur, int x, int y, int *d, int gold);
void draw_sprite3(SDL_Surface *sur, int x, int y, int *d, int gold);
void draw_sprite4(SDL_Surface *sur, int x, int y, int *d, int gold);
void draw_sprite5(SDL_Surface *sur, int x, int y, int *d, int gold);
void draw_back(SDL_Surface *sur, int anime);
void draw_back1(SDL_Surface *sur);
void draw_choise1(SDL_Surface *sur, int *c1, int sell, int up, int lvl);
void draw_gold(SDL_Surface *sur, int gold);
void draw_wave(SDL_Surface *sur, int wave);
void draw_health(SDL_Surface *sur, int health);
void draw_menu(SDL_Surface *sur, int menu);
void draw_pause(SDL_Surface *sur, int menuout, int ispause);
void draw_exit(SDL_Surface *sur, int menuout);
void draw_anime(SDL_Surface *sur, int statx, int staty, int towertype, int anime, bool atack1);
void draw_logo(SDL_Surface *sur); 
void delete_mobs(Mob **mobs_in, Mob *mob);
void delete_first_mob(Mob **mobs);
void killMob1(Tower *towers, Mob *mobs, int *gold);
void killMob2(Tower *towers, Mob *mobs, int *gold);
void killMob3(Tower *towers, Mob *mobs, int *gold);
void killMob4(Tower *towers, Mob *mobs, int *gold);
void killMob5(Tower *towers, Mob *mobs, int *gold);
void minushp(Mob *mobs, int *hp);
void wave1(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave);
void wave2(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave);
void wave3(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave);
void wave4(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave);
void wave5(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave);
/*void wave6(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave);
void wave7(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave);
void wave8(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave);
void wave9(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave);*/
void draw_back2(SDL_Surface *sur);
void draw_back3(SDL_Surface *sur);
void draw_final(SDL_Surface *sur, int anime);
void show_mobs1(SDL_Surface *sur, Mob *mobs, int anime);
void	draw_unit(SDL_Surface *sur, int x, int y);

#endif
