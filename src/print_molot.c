#include "../inc/a.h"

void draw_sprite1(SDL_Surface *sur, int x, int y, int *d, int gold) // рисует кнопку молота
{
	if (*d == 0 && gold < 50) {
		SDL_Surface	*txtr1 = NULL;
		SDL_Rect	rect;

		rect.x = 166;
		rect.y = 460;
		rect.w = 122;
		rect.h = 122;


		if ((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)) {  
			txtr1 = SDL_LoadBMP("bmp/boton_off1.bmp");
		}else {
	 		txtr1 = SDL_LoadBMP("bmp/boton_off.bmp");
		}
		SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 255, 255, 255));
		SDL_BlitScaled(txtr1, NULL, sur, &rect);
	}else if (*d == 0 && gold >= 50) {
		SDL_Surface	*txtr1 = NULL;
		SDL_Rect	rect;

		rect.x = 166;
		rect.y = 460;
		rect.w = 122;
		rect.h = 122;


		if ((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)) {  
			txtr1 = SDL_LoadBMP("bmp/boton_on1.bmp");
		}else {
	 		txtr1 = SDL_LoadBMP("bmp/boton_on.bmp");
		}
		SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 255, 255, 255));
		SDL_BlitScaled(txtr1, NULL, sur, &rect);
	}	
}

void	draw_choise(SDL_Surface *sur, int *c) // рисует менюшку выбора постройки башни
{
	if (*c == 1) {
	SDL_Surface	*txtr1 = SDL_LoadBMP("bmp/menustone.bmp");
	SDL_Surface	*txtr2 = SDL_LoadBMP("bmp/menupoison.bmp");
	SDL_Surface	*txtr3 = SDL_LoadBMP("bmp/menufire.bmp");
	SDL_Rect	rect;
	SDL_Rect	rect1;
	SDL_Rect	rect2;
   

	rect.x = 700;
	rect.y = 660;
	rect.w = 150;
	rect.h = 150;

	rect1.x = 850;
	rect1.y = 660;
	rect1.w = 150;
	rect1.h = 150;

	rect2.x = 1000;
	rect2.y = 660;
	rect2.w = 150;
	rect2.h = 150;

	SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0, 0, 0));
	SDL_BlitScaled(txtr1, NULL, sur, &rect);

	SDL_SetColorKey(txtr2, SDL_TRUE, SDL_MapRGB(txtr2->format, 0, 0, 0));
	SDL_BlitScaled(txtr2, NULL, sur, &rect1);

	SDL_SetColorKey(txtr3, SDL_TRUE, SDL_MapRGB(txtr3->format, 0, 0, 0));
	SDL_BlitScaled(txtr3, NULL, sur, &rect2);
	}	
}

void	draw_tower(SDL_Surface *sur, int x, int y, int t, int statx, int staty, int statw, int stath, int towertype, int anime, int lvl) // рисует башни 1 лвла
{
	if (t == 1) {
	SDL_Surface	*txtr1 = NULL;
	SDL_Surface	*txtr2 = NULL;
	SDL_Surface *upgr = NULL;

	SDL_Rect	rect;
	SDL_Rect	rect1;
	SDL_Rect	rect2;

	rect.x = statx;
	rect.y = staty;
	rect.w = statw;
	rect.h = stath;

	rect2.x = statx;
	rect2.y = staty-130;
	rect2.w = statw;
	rect2.h = stath;
   
	rect1.x = statx - 140;
	rect1.y = staty - 20;
	rect1.w = 500;
	rect1.h = 300;

	if (towertype == 1 && lvl == 0) {
		if(anime >= 0 && anime <= 5) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				txtr2 = SDL_LoadBMP("bmp/radius.bmp");  
				txtr1 = SDL_LoadBMP("bmp/towerstone1.bmp");
			}else{
	 			txtr1 = SDL_LoadBMP("bmp/towerstone1.bmp");
			}
		}
		if(anime >= 6 && anime <= 12) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				txtr2 = SDL_LoadBMP("bmp/radius.bmp");  
				txtr1 = SDL_LoadBMP("bmp/towerstone2.bmp");
			}else{
	 			txtr1 = SDL_LoadBMP("bmp/towerstone2.bmp");
			}
		}
		if(anime >= 13 && anime <= 20) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				txtr2 = SDL_LoadBMP("bmp/radius.bmp"); 
				txtr1 = SDL_LoadBMP("bmp/towerstone3.bmp");
			}else{
	 			txtr1 = SDL_LoadBMP("bmp/towerstone3.bmp");
			}
		}
		
	}
	if (towertype == 2 && lvl == 0) {
		if(anime >= 0 && anime <= 5) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){ 
				txtr2 = SDL_LoadBMP("bmp/radius.bmp"); 
				txtr1 = SDL_LoadBMP("bmp/towerblue1.bmp");
			}else{
	 			txtr1 = SDL_LoadBMP("bmp/towerblue1.bmp");
			}
		}if(anime >= 6 && anime <= 12) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				txtr2 = SDL_LoadBMP("bmp/radius.bmp");
				txtr1 = SDL_LoadBMP("bmp/towerblue2.bmp");
			}else{
	 			txtr1 = SDL_LoadBMP("bmp/towerblue2.bmp");
			}
		}if(anime >= 13 && anime <= 20) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				txtr2 = SDL_LoadBMP("bmp/radius.bmp");
				txtr1 = SDL_LoadBMP("bmp/towerblue3.bmp");
			}else{
	 			txtr1 = SDL_LoadBMP("bmp/towerblue3.bmp");
			}
		}
	}
	if (towertype == 3 && lvl == 0) {
		if(anime >= 0 && anime <= 5) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				txtr2 = SDL_LoadBMP("bmp/radius.bmp"); 
				txtr1 = SDL_LoadBMP("bmp/towerfire1.bmp");
			}else{
	 			txtr1 = SDL_LoadBMP("bmp/towerfire1.bmp");
			}
		}if(anime >= 6 && anime <= 12){
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				txtr2 = SDL_LoadBMP("bmp/radius.bmp"); 
				txtr1 = SDL_LoadBMP("bmp/towerfire2.bmp");
			}else{
	 			txtr1 = SDL_LoadBMP("bmp/towerfire2.bmp");
			}
			}if(anime >= 13 && anime <= 20) {
				if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
					txtr2 = SDL_LoadBMP("bmp/radius.bmp");  
					txtr1 = SDL_LoadBMP("bmp/towerfire3.bmp");
			}else{
	 			txtr1 = SDL_LoadBMP("bmp/towerfire3.bmp");
			}
			}
	}
	if (towertype == 1 && lvl == 1) {
		if(anime >= 0 && anime <= 3) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				upgr = SDL_LoadBMP("bmp/green1.bmp"); 
				txtr2 = SDL_LoadBMP("bmp/radius.bmp");  
				txtr1 = SDL_LoadBMP("bmp/towerstone1.bmp");
			}else{
				upgr = SDL_LoadBMP("bmp/green1.bmp"); 
	 			txtr1 = SDL_LoadBMP("bmp/towerstone1.bmp");
			}
		}
		if(anime >= 3 && anime <= 7) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				upgr = SDL_LoadBMP("bmp/green2.bmp"); 
				txtr2 = SDL_LoadBMP("bmp/radius.bmp");  
				txtr1 = SDL_LoadBMP("bmp/towerstone1.bmp");
			}else{
				upgr = SDL_LoadBMP("bmp/green2.bmp"); 
	 			txtr1 = SDL_LoadBMP("bmp/towerstone1.bmp");
			}
		}
		if(anime >= 8 && anime <= 15) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				upgr = SDL_LoadBMP("bmp/green3.bmp"); 
				txtr2 = SDL_LoadBMP("bmp/radius.bmp");  
				txtr1 = SDL_LoadBMP("bmp/towerstone2.bmp");
			}else{
				upgr = SDL_LoadBMP("bmp/green4.bmp"); 
	 			txtr1 = SDL_LoadBMP("bmp/towerstone2.bmp");
			}
		}
		if(anime >= 16 && anime <= 20) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				upgr = SDL_LoadBMP("bmp/green4.bmp"); 
				txtr2 = SDL_LoadBMP("bmp/radius.bmp");  
				txtr1 = SDL_LoadBMP("bmp/towerstone3.bmp");
			}else{
				upgr = SDL_LoadBMP("bmp/green4.bmp"); 
	 			txtr1 = SDL_LoadBMP("bmp/towerstone3.bmp");
			}
		}
		
	}
	if (towertype == 2 && lvl == 2) {
		if(anime >= 0 && anime <= 3) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				upgr = SDL_LoadBMP("bmp/blue1.bmp"); 
				txtr2 = SDL_LoadBMP("bmp/radius.bmp");  
				txtr1 = SDL_LoadBMP("bmp/towerblue1.bmp");
			}else{
				upgr = SDL_LoadBMP("bmp/blue1.bmp");
	 			txtr1 = SDL_LoadBMP("bmp/towerblue1.bmp");
			}
		}if(anime >= 3 && anime <= 7) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				upgr = SDL_LoadBMP("bmp/blue2.bmp");
				txtr2 = SDL_LoadBMP("bmp/radius.bmp");
				txtr1 = SDL_LoadBMP("bmp/towerblue2.bmp");
			}else{
				upgr = SDL_LoadBMP("bmp/blue2.bmp");
	 			txtr1 = SDL_LoadBMP("bmp/towerblue2.bmp");
			}
		}if(anime >= 8 && anime <= 15) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				upgr = SDL_LoadBMP("bmp/blue3.bmp");
				txtr2 = SDL_LoadBMP("bmp/radius.bmp"); 
				txtr1 = SDL_LoadBMP("bmp/towerblue3.bmp");
			}else{
				upgr = SDL_LoadBMP("bmp/blue3.bmp");
	 			txtr1 = SDL_LoadBMP("bmp/towerblue3.bmp");
			}
		}
		if(anime >= 16 && anime <= 20) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				upgr = SDL_LoadBMP("bmp/blue4.bmp");
				txtr2 = SDL_LoadBMP("bmp/radius.bmp"); 
				txtr1 = SDL_LoadBMP("bmp/towerblue3.bmp");
			}else{
				upgr = SDL_LoadBMP("bmp/blue4.bmp");
	 			txtr1 = SDL_LoadBMP("bmp/towerblue3.bmp");
			}
		}
	}
		if (towertype == 3 && lvl == 3) {
		if(anime >= 0 && anime <= 3) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				upgr = SDL_LoadBMP("bmp/red1.bmp"); 
				txtr2 = SDL_LoadBMP("bmp/radius.bmp");  
				txtr1 = SDL_LoadBMP("bmp/towerfire1.bmp");
			}else{
				upgr = SDL_LoadBMP("bmp/red1.bmp");
	 			txtr1 = SDL_LoadBMP("bmp/towerfire1.bmp");
			}
		}if(anime >= 3 && anime <= 7) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				upgr = SDL_LoadBMP("bmp/red2.bmp");
				txtr2 = SDL_LoadBMP("bmp/radius.bmp");
				txtr1 = SDL_LoadBMP("bmp/towerfire2.bmp");
			}else{
				upgr = SDL_LoadBMP("bmp/red2.bmp");
	 			txtr1 = SDL_LoadBMP("bmp/towerfire2.bmp");
			}
		}if(anime >= 8 && anime <= 15) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				upgr = SDL_LoadBMP("bmp/red3.bmp");
				txtr2 = SDL_LoadBMP("bmp/radius.bmp"); 
				txtr1 = SDL_LoadBMP("bmp/towerfire3.bmp");
			}else{
				upgr = SDL_LoadBMP("bmp/red3.bmp");
	 			txtr1 = SDL_LoadBMP("bmp/towerfire3.bmp");
			}
		}
		if(anime >= 16 && anime <= 20) {
			if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){
				upgr = SDL_LoadBMP("bmp/red4.bmp");
				txtr2 = SDL_LoadBMP("bmp/radius.bmp"); 
				txtr1 = SDL_LoadBMP("bmp/towerfire3.bmp");
			}else{
				upgr = SDL_LoadBMP("bmp/red4.bmp");
	 			txtr1 = SDL_LoadBMP("bmp/towerfire3.bmp");
			}
		}
	}
	if (txtr2) {
		SDL_SetColorKey(txtr2, SDL_TRUE, SDL_MapRGB(txtr2->format, 0, 0, 0));
		SDL_BlitScaled(txtr2, NULL, sur, &rect1);
	}
	if (upgr) {
		SDL_SetColorKey(upgr, SDL_TRUE, SDL_MapRGB(upgr->format, 31, 31, 31));
		SDL_BlitScaled(upgr, NULL, sur, &rect2);
	}
	SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0, 0, 0));
	SDL_BlitScaled(txtr1, NULL, sur, &rect);
	}	
}

void	draw_sprite2(SDL_Surface *sur, int x, int y, int *d, int gold) // рисует кнопку молота 
{
	if (*d == 0 && gold < 50) {
		SDL_Surface	*txtr1 = NULL;
		SDL_Rect	rect;
		rect.x = 496;
		rect.y = 462;
		rect.w = 122;
		rect.h = 122;
		if ((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)) {  
			txtr1 = SDL_LoadBMP("bmp/boton_off1.bmp");
		}else {
	 		txtr1 = SDL_LoadBMP("bmp/boton_off.bmp");
		}
		SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 255, 255, 255));
		SDL_BlitScaled(txtr1, NULL, sur, &rect);
	}else if (*d == 0 && gold >= 50) {
		SDL_Surface	*txtr1 = NULL;
		SDL_Rect	rect;
		rect.x = 496;
		rect.y = 462;
		rect.w = 122;
		rect.h = 122;
		if ((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)) {  
			txtr1 = SDL_LoadBMP("bmp/boton_on1.bmp");
		}else {
	 		txtr1 = SDL_LoadBMP("bmp/boton_on.bmp");
		}
		SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 255, 255, 255));
		SDL_BlitScaled(txtr1, NULL, sur, &rect);
	}	
}
 
void	draw_sprite3(SDL_Surface *sur, int x, int y, int *d, int gold) // рисует кнопку молота 
{
	if(*d == 0 && gold < 50) {
		SDL_Surface	*txtr1 = NULL;
		SDL_Rect	rect;

		rect.x = 1040;
		rect.y = 463;
		rect.w = 122;
		rect.h = 122;

		if ((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)) {  
			txtr1 = SDL_LoadBMP("bmp/boton_off1.bmp");
		}else {
	 		txtr1 = SDL_LoadBMP("bmp/boton_off.bmp");
		}
		SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 255, 255, 255));
		SDL_BlitScaled(txtr1, NULL, sur, &rect);
	}else if (*d == 0 && gold >= 50) {
		SDL_Surface	*txtr1 = NULL;
		SDL_Rect	rect;

		rect.x = 1040;
		rect.y = 463;
		rect.w = 122;
		rect.h = 122;

		if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)) {  
			txtr1 = SDL_LoadBMP("bmp/boton_on1.bmp");
		}else {
	 		txtr1 = SDL_LoadBMP("bmp/boton_on.bmp");
		}
		SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 255, 255, 255));
		SDL_BlitScaled(txtr1, NULL, sur, &rect);
	}		
}

void	draw_sprite4(SDL_Surface *sur, int x, int y, int *d, int gold) // рисует кнопку молота 
{
	if(*d == 0 && gold < 50) {
		SDL_Surface	*txtr1 = NULL;
		SDL_Rect	rect;

		rect.x = 1052;
		rect.y = 250;
		rect.w = 122;
		rect.h = 122;

		if ((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)) {  
			txtr1 = SDL_LoadBMP("bmp/boton_off1.bmp");
		}else {
	 		txtr1 = SDL_LoadBMP("bmp/boton_off.bmp");
		}
		SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 255, 255, 255));
		SDL_BlitScaled(txtr1, NULL, sur, &rect);	
	}else if (*d == 0 && gold >= 50) {
		SDL_Surface	*txtr1 = NULL;
		SDL_Rect	rect;

		rect.x = 1052;
		rect.y = 250;
		rect.w = 122;
		rect.h = 122;

		if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){  
			txtr1 = SDL_LoadBMP("bmp/boton_on1.bmp");
		}else{
	 		txtr1 = SDL_LoadBMP("bmp/boton_on.bmp");
		}
		SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 255, 255, 255));
		SDL_BlitScaled(txtr1, NULL, sur, &rect);	
	}
}

void	draw_sprite5(SDL_Surface *sur, int x, int y, int *d, int gold) // рисует кнопку молота 
{
	if (*d == 0 && gold < 50) {
		SDL_Surface	*txtr1 = NULL;
		SDL_Rect	rect;

		rect.x = 558;
		rect.y = 250;
		rect.w = 122;
		rect.h = 122;

		if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){  
			txtr1 = SDL_LoadBMP("bmp/boton_off1.bmp");
		}else{
	 		txtr1 = SDL_LoadBMP("bmp/boton_off.bmp");
		}
		SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 255, 255, 255));
		SDL_BlitScaled(txtr1, NULL, sur, &rect);
	}else if(*d == 0 && gold >= 50) {
		SDL_Surface	*txtr1 = NULL;
		SDL_Rect	rect;

		rect.x = 558;
		rect.y = 250;
		rect.w = 122;
		rect.h = 122;

		if((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)){  
			txtr1 = SDL_LoadBMP("bmp/boton_on1.bmp");
		}else{
	 		txtr1 = SDL_LoadBMP("bmp/boton_on.bmp");
		}
		SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 255, 255, 255));
		SDL_BlitScaled(txtr1, NULL, sur, &rect);
	}	
}
void	draw_back(SDL_Surface *sur, int anime) { // рисует сменяемый фон
	SDL_Surface	*txtr1 = NULL;
	SDL_Rect	rect;
	rect.x = 0;
	rect.y = 0;
	rect.w = 1440;
	rect.h = 810;

	if(anime >= 0 && anime <= 9) {
				txtr1 = SDL_LoadBMP("bmp/background1.bmp");
	}if(anime >= 10 && anime <= 19) { 
				txtr1 = SDL_LoadBMP("bmp/background2.bmp");
	}
	
	SDL_BlitScaled(txtr1, NULL, sur, &rect);
}
void	draw_back1(SDL_Surface *sur) { // рисует фонарик
	SDL_Surface	*txtr1 = SDL_LoadBMP("bmp/background3.bmp");
	SDL_Rect	rect;

	rect.x = 0;
	rect.y = 0;
	rect.w = 1440;
	rect.h = 810;

	SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0, 0, 0));
	SDL_BlitScaled(txtr1, NULL, sur, &rect);
}
void draw_final(SDL_Surface *sur, int anime) { 
	SDL_Surface	*txtr1 = NULL;
	SDL_Rect	rect;

	rect.x = 0;
	rect.y = 0;
	rect.w = 1440;
	rect.h = 810;

	if(anime >= 0 && anime <= 8) {
				txtr1 = SDL_LoadBMP("bmp/final1.bmp");
	}
	if(anime >= 9 && anime <= 14) { 
				txtr1 = SDL_LoadBMP("bmp/final2.bmp");
	}
	if(anime >= 15 && anime <= 20) { 
				txtr1 = SDL_LoadBMP("bmp/final3.bmp");
	}
	SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0, 0, 0));
	SDL_BlitScaled(txtr1, NULL, sur, &rect);
}


void	draw_back2(SDL_Surface *sur) { // рисует game over
	SDL_Surface	*txtr1 = SDL_LoadBMP("bmp/over.bmp");
	SDL_Rect	rect;

	rect.x = 0;
	rect.y = 0;
	rect.w = 1440;
	rect.h = 810;

	SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0, 0, 0));
	SDL_BlitScaled(txtr1, NULL, sur, &rect);
}
void	draw_back3(SDL_Surface *sur) { // рисует game over
	SDL_Surface	*txtr1 = SDL_LoadBMP("bmp/youwin.bmp");
	SDL_Rect	rect;

	rect.x = 0;
	rect.y = 0;
	rect.w = 1440;
	rect.h = 810;

	SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0, 0, 0));
	SDL_BlitScaled(txtr1, NULL, sur, &rect);
}

void	draw_logo(SDL_Surface *sur) { // рисует блюр входа в игру
	SDL_Surface	*txtr1 = SDL_LoadBMP("bmp/startmenu.bmp");;
	SDL_Rect	rect;
	rect.x = 0;
	rect.y = 0;
	rect.w = 1440;
	rect.h = 810;

	SDL_BlitScaled(txtr1, NULL, sur, &rect);
}

void	draw_trash(SDL_Surface *sur) { // рисует шнягу для того, чтобы атаки были под ней
	SDL_Surface	*txtr1 = SDL_LoadBMP("bmp/back.bmp");;
	SDL_Rect	rect;
	rect.x = 0;
	rect.y = 0;
	rect.w = 1440;
	rect.h = 810;
	SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0, 0, 0));
	SDL_BlitScaled(txtr1, NULL, sur, &rect);
}

void	draw_choise1(SDL_Surface *sur, int *c1, int sell, int up, int lvl) // рисует удаление или апгрейд башни
{
	if (*c1 == 1) {
		SDL_Surface	*txtr1 = NULL;
		SDL_Surface	*txtr2 = NULL;

		if (up == 1 && lvl == 0)
			txtr1 = SDL_LoadBMP("bmp/up_stone.bmp");
		else if (up == 2 && lvl == 0)
			txtr1 = SDL_LoadBMP("bmp/up_poison.bmp");
		else if (up == 3 && lvl == 0)
			txtr1 = SDL_LoadBMP("bmp/up_fire.bmp");

		if (up == 1 && lvl == 1)
			txtr1 = SDL_LoadBMP("bmp/max_stone.bmp");
		else if (up == 2 && lvl == 2)
			txtr1 = SDL_LoadBMP("bmp/max_poison.bmp");
		else if (up == 3 && lvl == 3)
			txtr1 = SDL_LoadBMP("bmp/max_fire.bmp");
		
		if (sell == 1)
			txtr2 = SDL_LoadBMP("bmp/sellstone.bmp");
		else if (sell == 2)
			txtr2 = SDL_LoadBMP("bmp/sellpoison.bmp");
		else if (sell == 3)
			txtr2 = SDL_LoadBMP("bmp/sellfire.bmp");

		SDL_Rect	rect;
		SDL_Rect	rect1;

		rect.x = 700;
		rect.y = 660;
		rect.w = 150;
		rect.h = 150;

		rect1.x = 850;
		rect1.y = 660;
		rect1.w = 150;
		rect1.h = 150;

		if (txtr1) {
			SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0, 0, 0));
			SDL_BlitScaled(txtr1, NULL, sur, &rect);
		}
		if (txtr2) {
			SDL_SetColorKey(txtr2, SDL_TRUE, SDL_MapRGB(txtr2->format, 0, 0, 0));
			SDL_BlitScaled(txtr2, NULL, sur, &rect1);
		}
	}	
}
void	draw_gold(SDL_Surface *sur, int gold) // рисует gold
{
	SDL_Surface	*txtr1 = SDL_LoadBMP("bmp/coin.bmp");
	SDL_Surface	*goldsur1 = SDL_LoadBMP("bmp/0.bmp");
	SDL_Surface	*goldsur2 = SDL_LoadBMP("bmp/0.bmp");
	SDL_Surface	*goldsur3 = SDL_LoadBMP("bmp/0.bmp");

	SDL_Rect	rect;
	SDL_Rect	rect1;
	SDL_Rect	rect2;
	SDL_Rect	rect3;

	rect.x = 20;
	rect.y = 760;
	rect.w = 30;
	rect.h = 30;

	rect1.x = 50;
	rect1.y = 760;
	rect1.w = 30;
	rect1.h = 30;

	rect2.x = 65;
	rect2.y = 760;
	rect2.w = 30;
	rect2.h = 30;

	rect3.x = 80;
	rect3.y = 760;
	rect3.w = 30;
	rect3.h = 30;

	for (int i = 0; gold > 0 && i < 3; i++) {
		if (i == 0) {
	    	if ((gold % 10) == 0) {
				goldsur1 = SDL_LoadBMP("bmp/0.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10) == 1) {
				goldsur1 = SDL_LoadBMP("bmp/1.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10) == 2) {
				goldsur1 = SDL_LoadBMP("bmp/2.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10) == 3) {
				goldsur1 = SDL_LoadBMP("bmp/3.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10) == 4) {
				goldsur1 = SDL_LoadBMP("bmp/4.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10) == 5) {
				goldsur1 = SDL_LoadBMP("bmp/5.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10) == 6) {
				goldsur1 = SDL_LoadBMP("bmp/6.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10) == 7) {
				goldsur1 = SDL_LoadBMP("bmp/7.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10) == 8) {
				goldsur1 = SDL_LoadBMP("bmp/8.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10) == 9) {
				goldsur1 = SDL_LoadBMP("bmp/9.bmp");
				gold = gold / 10;
				continue;
			}
			break;
		}
		if (i == 1) {
	    	if ((gold % 10) == 0) {
				goldsur2 = SDL_LoadBMP("bmp/0.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10)== 1) {
				goldsur2 = SDL_LoadBMP("bmp/1.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10) == 2) {
				goldsur2 = SDL_LoadBMP("bmp/2.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10)== 3) {
				goldsur2 = SDL_LoadBMP("bmp/3.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10) == 4) {
				goldsur2 = SDL_LoadBMP("bmp/4.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10)== 5) {
				goldsur2 = SDL_LoadBMP("bmp/5.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10)== 6) {
				goldsur2 = SDL_LoadBMP("bmp/6.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10) == 7) {
				goldsur2 = SDL_LoadBMP("bmp/7.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10) == 8) {
				goldsur2 = SDL_LoadBMP("bmp/8.bmp");
				gold = gold / 10;
				continue;
			}else if ((gold % 10) == 9) {
				goldsur2 = SDL_LoadBMP("bmp/9.bmp");
				gold = gold / 10;
				continue;
			}
			break;
		}
		if ( i == 2) {
	    	if ((gold % 10) == 0) {
				goldsur3 = SDL_LoadBMP("bmp/0.bmp");
				continue;
			}else if ((gold % 10) == 1) {
				goldsur3 = SDL_LoadBMP("bmp/1.bmp");
				continue;
			}else if ((gold % 10) == 2) {
				goldsur3 = SDL_LoadBMP("bmp/2.bmp");
				continue;
			}else if ((gold % 10) == 3) {
				goldsur3 = SDL_LoadBMP("bmp/3.bmp");
				continue;
			}else if ((gold % 10) == 4) {
				goldsur3 = SDL_LoadBMP("bmp/4.bmp");
				continue;
			}else if ((gold % 10) == 5) {
				goldsur3 = SDL_LoadBMP("bmp/5.bmp");
				continue;
			}else if ((gold % 10) == 6) {
				goldsur3 = SDL_LoadBMP("bmp/6.bmp");
				continue;
			}else if ((gold % 10) == 7) {
				goldsur3 = SDL_LoadBMP("bmp/7.bmp");
				continue;
			}else if ((gold % 10) == 8) {
				goldsur3 = SDL_LoadBMP("bmp/8.bmp");
				continue;
			}else if ((gold % 10) == 9) {
				goldsur3 = SDL_LoadBMP("bmp/9.bmp");
				continue;
			}
			break;
		}
	}
	if (gold == 0) { 
		goldsur3 = SDL_LoadBMP("bmp/0.bmp");
		SDL_SetColorKey(goldsur3, SDL_TRUE, SDL_MapRGB(goldsur3->format, 0, 0, 0));
		SDL_BlitScaled(goldsur3, NULL, sur, &rect1);
	}
	if (goldsur1 != NULL) {
		SDL_SetColorKey(goldsur1, SDL_TRUE, SDL_MapRGB(goldsur1->format, 0, 0, 0));
		SDL_BlitScaled(goldsur1, NULL, sur, &rect3);
	}
	if (goldsur2 != NULL) {
		SDL_SetColorKey(goldsur2, SDL_TRUE, SDL_MapRGB(goldsur2->format, 0, 0, 0));
		SDL_BlitScaled(goldsur2, NULL, sur, &rect2);	
	}
	if (goldsur3 != NULL) {
		SDL_SetColorKey(goldsur3, SDL_TRUE, SDL_MapRGB(goldsur3->format, 0, 0, 0));
		SDL_BlitScaled(goldsur3, NULL, sur, &rect1);	
	}

	SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0, 0, 0));
	SDL_BlitScaled(txtr1, NULL, sur, &rect);	
}

void	draw_wave(SDL_Surface *sur, int wave) // рисует wave
{
	SDL_Surface	*txtr1 = SDL_LoadBMP("bmp/skull.bmp");
	SDL_Surface	*wavesur1 = NULL;
	SDL_Surface	*wavesur2 = SDL_LoadBMP("bmp/sfrom.bmp");
	SDL_Surface	*wavesur3 = SDL_LoadBMP("bmp/s5.bmp");

	SDL_Rect	rect;
	SDL_Rect	rect1;
	SDL_Rect	rect2;
	SDL_Rect	rect3;

	rect.x = 20;
	rect.y = 730;
	rect.w = 30;
	rect.h = 30;

	rect1.x = 50;
	rect1.y = 730;
	rect1.w = 30;
	rect1.h = 30;

	rect2.x = 65;
	rect2.y = 730;
	rect2.w = 30;
	rect2.h = 30;

	rect3.x = 80;
	rect3.y = 730;
	rect3.w = 30;
	rect3.h = 30;

	if ((wave % 10) == 0)
		wavesur1 = SDL_LoadBMP("bmp/s0.bmp");
	else if ((wave % 10) == 1)
		wavesur1 = SDL_LoadBMP("bmp/s1.bmp");
    else if ((wave % 10) == 2)
		wavesur1 = SDL_LoadBMP("bmp/s2.bmp");
    else if ((wave % 10) == 3)
		wavesur1 = SDL_LoadBMP("bmp/s3.bmp");
    else if ((wave % 10) == 4)
		wavesur1 = SDL_LoadBMP("bmp/s4.bmp");
	else if ((wave % 10) == 5)
		wavesur1 = SDL_LoadBMP("bmp/s5.bmp");
	else if ((wave % 10) == 6)
		wavesur1 = SDL_LoadBMP("bmp/s6.bmp");
    else if ((wave % 10) == 7)
		wavesur1 = SDL_LoadBMP("bmp/s7.bmp");
	else if ((wave % 10) == 8)
		wavesur1 = SDL_LoadBMP("bmp/s8.bmp");
	else if ((wave % 10) == 9)
		wavesur1 = SDL_LoadBMP("bmp/s9.bmp");

	if (wavesur1 != NULL) {
		SDL_SetColorKey(wavesur1, SDL_TRUE, SDL_MapRGB(wavesur1->format, 0, 0, 0));
		SDL_BlitScaled(wavesur1, NULL, sur, &rect1);
	}

	SDL_SetColorKey(wavesur2, SDL_TRUE, SDL_MapRGB(wavesur2->format, 0, 0, 0));
	SDL_BlitScaled(wavesur2, NULL, sur, &rect2);

	SDL_SetColorKey(wavesur3, SDL_TRUE, SDL_MapRGB(wavesur3->format, 0, 0, 0));
	SDL_BlitScaled(wavesur3, NULL, sur, &rect3);

	SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0, 0, 0));
	SDL_BlitScaled(txtr1, NULL, sur, &rect);	
}
void	draw_health(SDL_Surface *sur, int health) // рисует жизни игрока
{
	SDL_Surface	*txtr1 = SDL_LoadBMP("bmp/heart.bmp");
	SDL_Surface	*healthsur1 = NULL;
	SDL_Surface	*healthsur2 = SDL_LoadBMP("bmp/hfrom.bmp");
	SDL_Surface	*healthsur3 = SDL_LoadBMP("bmp/h9.bmp");

	SDL_Rect	rect;
	SDL_Rect	rect1;
	SDL_Rect	rect2;
	SDL_Rect	rect3;

	rect.x = 20;
	rect.y = 700;
	rect.w = 30;
	rect.h = 30;

	rect1.x = 50;
	rect1.y = 700;
	rect1.w = 30;
	rect1.h = 30;

	rect2.x = 65;
	rect2.y = 700;
	rect2.w = 30;
	rect2.h = 30;

	rect3.x = 80;
	rect3.y = 700;
	rect3.w = 30;
	rect3.h = 30;

	if ((health % 10) == 0)
		healthsur1 = SDL_LoadBMP("bmp/h0.bmp");
	else if ((health % 10) == 1)
		healthsur1 = SDL_LoadBMP("bmp/h1.bmp");
    else if ((health % 10) == 2)
		healthsur1 = SDL_LoadBMP("bmp/h2.bmp");
    else if ((health % 10) == 3)
		healthsur1 = SDL_LoadBMP("bmp/h3.bmp");
    else if ((health % 10) == 4)
		healthsur1 = SDL_LoadBMP("bmp/h4.bmp");
	else if ((health % 10) == 5)
		healthsur1 = SDL_LoadBMP("bmp/h5.bmp");
	else if ((health % 10) == 6)
		healthsur1 = SDL_LoadBMP("bmp/h6.bmp");
    else if ((health % 10) == 7)
		healthsur1 = SDL_LoadBMP("bmp/h7.bmp");
	else if ((health % 10) == 8)
		healthsur1 = SDL_LoadBMP("bmp/h8.bmp");
	else if ((health % 10) == 9)
		healthsur1 = SDL_LoadBMP("bmp/h9.bmp");

	if (healthsur1 != NULL) {
		SDL_SetColorKey(healthsur1, SDL_TRUE, SDL_MapRGB(healthsur1->format, 0, 0, 0));
		SDL_BlitScaled(healthsur1, NULL, sur, &rect1);
	}

	SDL_SetColorKey(healthsur2, SDL_TRUE, SDL_MapRGB(healthsur2->format, 0, 0, 0));
	SDL_BlitScaled(healthsur2, NULL, sur, &rect2);

	SDL_SetColorKey(healthsur3, SDL_TRUE, SDL_MapRGB(healthsur3->format, 0, 0, 0));
	SDL_BlitScaled(healthsur3, NULL, sur, &rect3);

	SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0, 0, 0));
	SDL_BlitScaled(txtr1, NULL, sur, &rect);	
}

void	draw_menu(SDL_Surface *sur, int menu) //  рисует меню
{
	if (menu == 1) {
		SDL_Surface	*txtr1 = SDL_LoadBMP("bmp/menu.bmp");
		SDL_Rect	rect;

		rect.x = 1350;
		rect.y = 10;
		rect.w = 55;
		rect.h = 55;

		SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0,0, 0));
		SDL_BlitScaled(txtr1, NULL, sur, &rect);
	}	
}
void	draw_pause(SDL_Surface *sur, int menuout, int ispause) //  рисует паузу или продолжить
{
	SDL_Surface	*txtr1;
	if (menuout == 1 && ispause == 0) {
		txtr1 = SDL_LoadBMP("bmp/pause.bmp");
		SDL_Rect	rect;

		rect.x = 750;
		rect.y = 10;
		rect.w = 55;
		rect.h = 55;

		SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0,0, 0));
		SDL_BlitScaled(txtr1, NULL, sur, &rect);
	}else if (menuout == 1 && ispause == 1) {
		txtr1 = SDL_LoadBMP("bmp/continue.bmp");
		SDL_Rect	rect;

		rect.x = 550;
		rect.y = 270;
		rect.w = 300;
		rect.h = 300;

		SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0,0, 0));
		SDL_BlitScaled(txtr1, NULL, sur, &rect);
	}		
}
void	draw_exit(SDL_Surface *sur, int menuout) //  рисует выход
{
	if (menuout == 1) {
		SDL_Surface	*txtr1 = SDL_LoadBMP("bmp/exit.bmp");
		SDL_Rect	rect;

		rect.x = 550;
		rect.y = 10;
		rect.w = 55;
		rect.h = 55;

		SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0,0, 0));
		SDL_BlitScaled(txtr1, NULL, sur, &rect);
	}
}

void	draw_anime(SDL_Surface *sur, int statx, int staty, int towertype, int anime, bool atack1) // анимация атаки
{ 
	SDL_Surface	*atack = NULL;
	SDL_Surface	*atackstar = NULL;
	SDL_Surface	*atackstone = NULL;
	SDL_Rect rect;
	SDL_Rect rect1;
	SDL_Rect rect2;

	rect.x = statx - 150;
	rect.y = 100;
	rect.w = 700;
	rect.h = 700;

	rect1.x = statx - 200;
	rect1.y = staty - 130;
	rect1.w = 600;
	rect1.h = 500;


	rect2.x = statx - 180;
	rect2.y = staty - 130;
	rect2.w = 600;
	rect2.h = 500;

	if (towertype == 1 && atack1) {
		if (anime >= 0 && anime <= 3)
			atackstone = SDL_LoadBMP("bmp/stone0.bmp"); 
		if (anime >= 4 && anime <= 5)
			atackstone = SDL_LoadBMP("bmp/stone1.bmp"); 
		if (anime >= 6 && anime <= 6)
			atackstone = SDL_LoadBMP("bmp/stone2.bmp");
		if (anime >= 7 && anime <= 12) 
			atackstone = SDL_LoadBMP("bmp/stone3.bmp");
		if (anime >= 13 && anime <= 15) 
			atackstone = SDL_LoadBMP("bmp/stone4.bmp");
		if (anime >= 16 && anime <= 20) 
			atackstone = SDL_LoadBMP("bmp/stone5.bmp");
	}

	if (towertype == 3 && atack1) {
		if (anime == 0) 
			atack = SDL_LoadBMP("bmp/fire1.bmp"); 
		if (anime == 1) 
			atack = SDL_LoadBMP("bmp/fire2.bmp");
		if (anime >= 2 && anime <= 4) 
			atack = SDL_LoadBMP("bmp/fire3.bmp");
		if (anime >= 5 && anime <= 8) 
			atack = SDL_LoadBMP("bmp/fire4.bmp");
		if (anime >= 9 && anime <= 12) 
			atack = SDL_LoadBMP("bmp/fire5.bmp");
		if (anime >= 13 && anime <= 14) 
			atack = SDL_LoadBMP("bmp/fire6.bmp");
		if (anime >= 15 && anime <= 16) 
			atack = SDL_LoadBMP("bmp/fire7.bmp");
		if (anime >= 17 && anime <= 18) 
			atack = SDL_LoadBMP("bmp/fire8.bmp");
		if (anime >= 19 && anime <= 20) 
			atack = SDL_LoadBMP("bmp/fire9.bmp");
	}
	if (towertype == 2 && atack1) {
		if (anime >= 0 && anime <= 1)
			atackstar = SDL_LoadBMP("bmp/star.bmp"); 
		if (anime >= 2 && anime <= 3)
			atackstar = SDL_LoadBMP("bmp/star1.bmp");
		if (anime >= 4 && anime <= 6) 
			atackstar = SDL_LoadBMP("bmp/star2.bmp");
		if (anime >= 7 && anime <= 8) 
			atackstar = SDL_LoadBMP("bmp/star3.bmp");
		if (anime >= 9 && anime <= 10) 
			atackstar = SDL_LoadBMP("bmp/star4.bmp");
		if (anime >= 11 && anime <= 12) 
			atackstar = SDL_LoadBMP("bmp/star5.bmp");
		if (anime >= 13 && anime <= 16) 
			atackstar = SDL_LoadBMP("bmp/star6.bmp");
		if (anime >= 17 && anime <= 18) 
			atackstar = SDL_LoadBMP("bmp/star7.bmp");
		if (anime >= 19 && anime <= 20) 
			atackstar = SDL_LoadBMP("bmp/star8.bmp");
	}
	if (atackstone) {
		SDL_SetColorKey(atackstone, SDL_TRUE, SDL_MapRGB(atackstone->format, 15, 15, 15));
		SDL_BlitScaled(atackstone, NULL, sur, &rect2);
	}
	if (atack) {
		SDL_SetColorKey(atack, SDL_TRUE, SDL_MapRGB(atack->format, 0, 0, 0));
		SDL_BlitScaled(atack, NULL, sur, &rect1);
	}
	if (atackstar) {
		SDL_SetColorKey(atackstar, SDL_TRUE, SDL_MapRGB(atackstar->format, 0, 0, 0));
		SDL_BlitScaled(atackstar, NULL, sur, &rect);
	}
}

void	draw_unit(SDL_Surface *sur, int x, int y) // рисует unit 
{
		SDL_Surface	*txtr1 = NULL;
		SDL_Rect	rect;

		rect.x = 5;
		rect.y = -15;
		rect.w = 100;
		rect.h = 100;

		if ((x > rect.x && x < rect.x+rect.w) && (y > rect.y && y < rect.y+rect.h)) 
			txtr1 = SDL_LoadBMP("bmp/unit.bmp");
			if(txtr1){
				SDL_SetColorKey(txtr1, SDL_TRUE, SDL_MapRGB(txtr1->format, 0, 0, 0));
				SDL_BlitScaled(txtr1, NULL, sur, &rect);
		}
}
