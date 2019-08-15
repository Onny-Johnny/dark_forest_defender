#include "../inc/a.h"

int main() {
	Tower *towers = NULL;
	towers = malloc(sizeof(Tower));
	Mob *mobs = NULL;
	if(towers != NULL) {
		towers->id = 0;
		towers->rect.x = 120;
		towers->rect.y = 385;
		towers->rect.w = 200;
		towers->rect.h = 200;
		towers->radius.x = -20;
		towers->radius.y = 365;
		towers->radius.w = 500;
		towers->radius.h = 300;
		towers->damage = 0;
		towers->isRadius = false;
		towers->next = NULL;
	}

	create_towers(towers);
	int sc = 0;
	//int count = 3;
	//int ways = 3;
	//int all = ways * count;
	int qwerty = 1;

	int gameover = 0;
	int victory = 0;

	int log = 1;// для первого цикла входа в игру
 
    int gold = 	70; // для системы золота
	int health = 9; // hp counter
	int wave = 1; // wave number

	int sell = 0;// продаеться башня или нет

	int menu = 1;// для отображения кнопки меню
	int menuout = 0; // для вывода хранящихся данных в меню

	int t1 = 0;// для проверки стоит башня или неь
	int t2 = 0;
	int t3 = 0;
	int t4 = 0;
	int t5 = 0;

    int pause = 0;// пауза или нет

	int lvl = 0;// для вывода выбора улучшения

	int k1 = 0;// для отчета удаления моба
	int k2 = 0;
	int k3 = 0;
	int k4 = 0;
	int k5 = 0;

	int lvl1 = 0; // уровень башни
	int lvl2 = 0; // уровень башни
	int lvl3 = 0; // уровень башни
	int lvl4 = 0; // уровень башни
	int lvl5 = 0; // уровень башни

	int ct1 = 0;// проверка какой молот кликнут 
	int ct2 = 0;
	int ct3 = 0;
	int ct4 = 0;
	int ct5 = 0;

	int timer = 0; // задержка для финал wave
	int up = 0;// для выбора какую башню апать

	int ctt1 = 0;// проверка какакая башня кликнута
	int ctt2 = 0;
	int ctt3 = 0;
	int ctt4 = 0;
	int ctt5 = 0;
 
	int three1 = 0; // 	Это переменные для выбора из 3 башен
	int three2 = 0;
	int three3 = 0;
	int three4 = 0;
	int three5 = 0;

	int towertype1 = 0; // 	для выбора типа башен
	int towertype2 = 0;
	int towertype3 = 0;
	int towertype4 = 0;
	int towertype5 = 0;

	int wavepause = 0; //отчет для паузы между волнами

	int anime = 0; //  для замедления скорости смены кадров

	int c = 0;//choise 1
    int c1 = 0;//choise 2

	int x = 0;
	int y = 0;

	Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024);
    
    Mix_Music* music;
    music = Mix_LoadMUS("Music/champions.mp3");
    
	if(!music) {
           printf("Mix_LoadMUS(\"music.mp3\"): %s\n", Mix_GetError());
       // this might be a critical error...
    }

    Mix_PlayMusic(music, -1);
	
	if (SDL_Init(SDL_INIT_EVERYTHING)) {
		SDL_Log("Unable to initialize SDL: %s\n", SDL_GetError());
        return 1;
	}
	SDL_Window *win = SDL_CreateWindow("Dark forest defender",SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1440, 810, SDL_WINDOW_SHOWN);
	if (win == NULL) {
		SDL_Log("SDL_CreateWindow Error: %s\n", SDL_GetError());
		return 1;
	}
    SDL_Surface *sur = SDL_GetWindowSurface(win);
    if (sur == NULL) {
	    SDL_Log("SDL_CreateSurface Error: %s\n", SDL_GetError());
	    return 1;
    }
    SDL_Event event;
	while(1) {

	while(log) {
		while (SDL_PollEvent(&event)) {
			if (event.key.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE) {
				SDL_Quit();
				exit(0);
			}
				switch(event.type) {
					case SDL_MOUSEBUTTONDOWN:
						x = event.motion.x;
						y = event.motion.y;
						if ((x > 930 && x < 930 + 190) && (y > 600 && y < 600 + 100)) { // старт игры
							log = 0;
								qwerty = 1;

	gameover = 0;
	victory = 0;
	mobs = NULL;
	mobs = malloc(sizeof(Mob));
	if(mobs != NULL) {
		mobs->id = 0;
		mobs->hp = 100;
		mobs->way = 0;
		mobs->ticks = 0;
		mobs->bmp = SDL_LoadBMP("bmp/boss1.bmp");
		mobs->rect.x = 0;
		mobs->rect.y = 0;
		mobs->rect.w = 1;
		mobs->rect.h = 1;
		mobs->isdead = 0;
		mobs->next = NULL;
	}
	sc = 0;
	qwerty = 1;

	gameover = 0;
	victory = 0;

    gold = 	70; // для системы золота
	health = 9; // hp counter
	wave = 1; // wave number

	sell = 0;// продаеться башня или нет

	menu = 1;// для отображения кнопки меню
	menuout = 0; // для вывода хранящихся данных в меню

	t1 = 0;// для проверки стоит башня или неь
	t2 = 0;
	t3 = 0;
	t4 = 0;
	t5 = 0;

    pause = 0;// пауза или нет

	lvl = 0;// для вывода выбора улучшения

	k1 = 0;// для отчета удаления моба
	k2 = 0;
	k3 = 0;
	k4 = 0;
	k5 = 0;

	lvl1 = 0; // уровень башни
	lvl2 = 0; // уровень башни
	lvl3 = 0; // уровень башни
	lvl4 = 0; // уровень башни
	lvl5 = 0; // уровень башни

	ct1 = 0;// проверка какой молот кликнут 
	ct2 = 0;
	ct3 = 0;
	ct4 = 0;
	ct5 = 0;

	timer = 0;

	up = 0;// для выбора какую башню апать

	ctt1 = 0;// проверка какакая башня кликнута
	ctt2 = 0;
	ctt3 = 0;
	ctt4 = 0;
	ctt5 = 0;
 
	three1 = 0; // 	Это переменные для выбора из 3 башен
	three2 = 0;
	three3 = 0;
	three4 = 0;
	three5 = 0;

	towertype1 = 0; // 	для выбора типа башен
	towertype2 = 0;
	towertype3 = 0;
	towertype4 = 0;
	towertype5 = 0;
	wavepause = 0; //отчет для паузы между волнами
	anime = 0; //  для замедления скорости смены кадров
	c = 0;//choise 1
    c1 = 0;//choise 2
	x = 0;
	y = 0;

	}else if((x > 1040 && x < 1040 + 168) && (y > 720 && y < 720 + 98)){
							SDL_Quit();
							exit(0);	
						}
						break;
				}
		}	
		draw_logo(sur);
		SDL_UpdateWindowSurface(win);
	}
	while (1) {
		while (SDL_PollEvent(&event)) {
			if (event.key.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE) {
				SDL_Quit();
				exit(0);
			}
		switch(event.type) {
			case SDL_MOUSEBUTTONDOWN:
				x = event.motion.x;
				y = event.motion.y;
				if((x > 166 && x < 166+122) && (y > 460 && y < 460+122) && three1 == 0){ // клик на молоточки
					ct2 = 0;
					ct3 = 0;
					ct4 = 0;
					ct5 = 0;
					ct1 = 1; 
                    c = 1;
					c1 = 0;
				}else if((x > 496 && x < 496+122) && (y > 462 && y < 462+122) && three2 == 0){
					ct1 = 0;
					ct3 = 0;
					ct4 = 0;
					ct5 = 0;
					ct2 = 1;
                    c = 1;
					c1 = 0;
				}else if((x > 1040 && x < 1040+122) && (y > 463 && y < 463+122) && three3 == 0){
					ct2 = 0;
					ct1 = 0;
					ct4 = 0;
					ct5 = 0;
					ct3 = 1; 
                    c = 1;
					c1 = 0;
				}else if((x > 1052 && x < 1052+122) && (y > 250 && y < 250+122) && three4 == 0){
					ct2 = 0;
					ct3 = 0;
					ct1 = 0;
					ct5 = 0;
					ct4 = 1;   
                    c = 1;
					c1 = 0;
				}else if((x > 558 && x < 558+122) && (y > 250 && y < 250+122) && three5 == 0){
					ct2 = 0;
					ct3 = 0;
					ct4 = 0;
					ct1 = 0;
					ct5 = 1;
                    c = 1;
					c1 = 0;
				}
				else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ct1 == 1 && gold >= 50){ // клик на выбор башни камня
					t1 = 1;   
                    c = 0;
					three1 = 1;
					towertype1 = 1;
					ct1 = 0;
					gold -=50;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ct2 == 1 && gold >= 50){
					t2 = 1;   
                    c = 0;
					three2 = 1;
					towertype2 = 1;
					ct2 = 0;
					gold -=50;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ct3 == 1 && gold >= 50){
					t3 = 1;   
                    c = 0;
					three3 = 1;
					towertype3 = 1;
					ct3 = 0;
					gold -=50;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ct4 == 1 && gold >= 50){
					t4 = 1;   
                    c = 0;
					three4 = 1;
					towertype4 = 1;
					ct4 = 0;
					gold -=50;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ct5 == 1 && gold >= 50){
					t5 = 1;   
                    c = 0;
					three5 = 1;
					towertype5 = 1;
					ct5 = 0;
					gold -=50;
				}
				else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ct1 == 1 && gold >= 100){// клик на выбор башни яда
					t1 = 1;   
                    c = 0;
					three1 = 1;
					towertype1 = 2;
					ct1 = 0;
					gold -=100;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ct2 == 1 && gold >= 100){
					t2 = 1;   
                    c = 0;
					three2 = 1;
					towertype2 = 2;
					ct2 = 0;
					gold -=100;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ct3 == 1 && gold >= 100){
					t3 = 1;   
                    c = 0;
					three3 = 1;
					towertype3 = 2;
					ct3 = 0;
					gold -=100;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ct4 == 1 && gold >= 100){
					t4 = 1;   
                    c = 0;
					three4 = 1;
					towertype4 = 2;
					ct4 = 0;
					gold -=100;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ct5 == 1 && gold >= 100){
					t5 = 1;   
                    c = 0;
					three5 = 1;
					towertype5 = 2;
					ct5 = 0;
					gold -=100;
				}
				else if((x > 1000 && x < 1000+150) && (y > 660 && y < 660+150) && ct1 == 1 && gold >= 150){ // клик на выбор башни огня
					t1 = 1;   
                    c = 0;
					three1 = 1;
					towertype1 = 3;
					ct1 = 0;
					gold -=150;
				}else if((x > 1000 && x < 1000+150) && (y > 660 && y < 660+150) && ct2 == 1 && gold >= 150){
					t2 = 1;   
                    c = 0;
					three2 = 1;
					towertype2 = 3;
					ct2 = 0;
					gold -=150;
				}else if((x > 1000 && x < 1000+150) && (y > 660 && y < 660+150) && ct3 == 1 && gold >= 150){
					t3 = 1;   
                    c = 0;
					three3 = 1;
					towertype3 = 3;
					ct3 = 0;
					gold -=150;
				}else if((x > 1000 && x < 1000+150) && (y > 660 && y < 660+150) && ct4 == 1 && gold >= 150){
					t4 = 1;   
                    c = 0;
					three4 = 1;
					towertype4 = 3;
					ct4 = 0;
					gold -=150;
				}else if((x > 1000 && x < 1000+150) && (y > 660 && y < 660+150) && ct5 == 1 && gold >= 150){
					t5 = 1;   
                    c = 0;
					three5 = 1;
					towertype5 = 3;
					ct5 = 0;
					gold -=150;
				}
				else if((x > 1350 && x < 1350+55) && (y > 10 && y < 10+55)){ // клик на меню
					menu = 0;
					menuout = 1;
				}else if ((x > 750 && x < 750+55) && (y > 10 && y < 10+55) && menu == 0) {
					pause = 1;
				}else if((x > 550 && x < 550+55) && (y > 10 && y < 10+55) && menu == 0){
					SDL_Quit();
					exit(0);
				}
				else if((x > 166 && x < 166+122) && (y > 460 && y < 460+122) && three1 == 1 && towertype1 ==  1 && lvl1 == 0){ // клик на башню 1 типа 1 лвла
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt1 = 1; 
                    c1 = 1;
					sell = 1;
					up = 1;
					lvl = 0;
				}else if((x > 496 && x < 496+122) && (y > 462 && y < 462+122) && three2 == 1 && towertype2 == 1 && lvl2 == 0){
					c = 0;
					ctt1 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt2 = 1;
                    c1 = 1;
					sell = 1;
					up = 1;
					lvl = 0;
				}else if((x > 1040 && x < 1040+122) && (y > 463 && y < 463+122) && three3 == 1 && towertype3 == 1 && lvl3 == 0){
					c = 0;
					ctt2 = 0;
					ctt1 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt3 = 1; 
                    c1 = 1;
					sell = 1;
					up = 1;
					lvl = 0;
				}else if((x > 1052 && x < 1052+122) && (y > 250 && y < 250+122) && three4 == 1 && towertype4 == 1 && lvl4 == 0){
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt1 = 0;
					ctt5 = 0;
					ctt4 = 1;   
                    c1 = 1;
					sell = 1;
					up = 1;
					lvl = 0;
				}else if((x > 558 && x < 558+122) && (y > 250 && y < 250+122) && three5 == 1 && towertype5 == 1 && lvl5 == 0){ 
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt1 = 0;
					ctt5 = 1;
                    c1 = 1;
					sell = 1;
					up = 1;
					lvl = 0;
				}
				else if((x > 166 && x < 166+122) && (y > 460 && y < 460+122) && three1 == 1 && towertype1 == 2 && lvl1 == 0){ // клик на башню 1 лвла 2 типа
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt1 = 1; 
                    c1 = 1;
					sell = 2;
					up = 2;
					lvl = 0;
				}else if((x > 496 && x < 496+122) && (y > 462 && y < 462+122) && three2 == 1 && towertype2 == 2 && lvl2 == 0){
					c = 0;
					ctt1 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt2 = 1;
                    c1 = 1;
					sell = 2;
					up = 2;
					lvl = 0;
				}else if((x > 1040 && x < 1040+122) && (y > 463 && y < 463+122) && three3 == 1 && towertype3 == 2 && lvl3 == 0){
					c = 0;
					ctt2 = 0;
					ctt1 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt3 = 1; 
                    c1 = 1;
					sell = 2;
					up = 2;
					lvl = 0;
				}else if((x > 1052 && x < 1052+122) && (y > 250 && y < 250+122) && three4 == 1 && towertype4 == 2 && lvl4 == 0){
					c = 0;
					ctt4 = 1;   
                    c1 = 1;
					sell = 2;
					up = 2;
					lvl = 0;
				}else if((x > 558 && x < 558+122) && (y > 250 && y < 250+122) && three5 == 1 && towertype5 == 2 && lvl5 == 0){ 
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt1 = 0;
					ctt5 = 1;
                    c1 = 1;
					sell = 2;
					up = 2;
					lvl = 0;
				}
				else if((x > 166 && x < 166+122) && (y > 460 && y < 460+122) && three1 == 1 && towertype1 == 3 && lvl1 == 0){ // клик на башню 1 лвла 3 типа
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt1 = 1; 
                    c1 = 1;
					sell = 3;
					up = 3;
					lvl = 0;
				}else if((x > 496 && x < 496+122) && (y > 462 && y < 462+122) && three2 == 1 && towertype2 == 3  && lvl2 == 0){
					c = 0;
					ctt1 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt2 = 1;
                    c1 = 1;
					sell = 3;
					up = 3;
					lvl = 0;
				}else if((x > 1040 && x < 1040+122) && (y > 463 && y < 463+122) && three3 == 1 && towertype3 == 3 && lvl3 == 0){
					c = 0;
					ctt2 = 0;
					ctt1 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt3 = 1; 
                    c1 = 1;
					sell = 3;
					up = 3;
					lvl = 0;
				}else if((x > 1052 && x < 1052+122) && (y > 250 && y < 250+122) && three4 == 1 && towertype4 == 3 && lvl4 == 0){
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt1 = 0;
					ctt5 = 0;
					ctt4 = 1;   
                    c1 = 1;
					sell = 3;
					up = 3;
					lvl = 0;
				}else if((x > 558 && x < 558+122) && (y > 250 && y < 250+122) && three5 == 1 && towertype5 == 3 && lvl5 == 0){ 
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt1 = 0;
					ctt5 = 1;
                    c1 = 1;
					sell = 3;
					up = 3;
					lvl = 0;
				}
				else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt1 == 1 && c1 == 1 && three1 == 1 && towertype1 == 1 && gold >= 100 && lvl1 == 0){// клик на улучшение башни 1 тип 1 lvl
					c1 = 0;
					ctt1 = 0;
					lvl1 = 1;
					gold -= 100;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt2 == 1 && c1 == 1 && three2 == 1 && towertype2 == 1 && gold >= 100 && lvl2 == 0){
					c1 = 0;
					ctt2 = 0;
					lvl2 = 1;
					gold -= 100;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt3 == 1 && c1 == 1 && three3 == 1 && towertype3 == 1 && gold >= 100 && lvl3 == 0){
					c1 = 0;
					ctt3 = 0;
					lvl3 = 1;
					gold -= 100;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt4 == 1 && c1 == 1 && three4 == 1 && towertype4 == 1 && gold >= 100 && lvl4 == 0){   
                    c1 = 0;
					ctt4 = 0;
					lvl4 = 1;
					gold -= 100;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt5 == 1 && c1 == 1 && three5 == 1 && towertype5 == 1 && gold >= 100 && lvl5 == 0){ 
                    c1 = 0;
					ctt5 = 0;
					lvl5 = 1;
					gold -= 100;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt1 == 1 && c1 == 1 && three1 == 1 && towertype1 == 2 && gold >= 150 && lvl1 == 0){// клик на улучшение башни 2тип тип 1 lvl
					c1 = 0;
					ctt1 = 0;
					lvl1 = 2;
					gold -= 150;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt2 == 1 && c1 == 1 && three2 == 1 && towertype2 == 2 && gold >= 150 && lvl2 == 0){
					c1 = 0;
					ctt2 = 0;
					lvl2 = 2;
					gold -= 150;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt3 == 1 && c1 == 1 && three3 == 1 && towertype3 == 2 && gold >= 150 && lvl3 == 0) {
					c1 = 0;
					ctt3 = 0;
					lvl3 = 2;
					gold -= 150;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt4 == 1 && c1 == 1 && three4 == 1 && towertype4 == 2 && gold >= 150 && lvl4 == 0){   
                    c1 = 0;
					ctt4 = 0;
					lvl4 = 2;
					gold -= 150;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt5 == 1 && c1 == 1 && three5 == 1 && towertype5 == 2 && gold >= 150 && lvl5 == 0){ 
                    c1 = 0;
					ctt5 = 0;
					lvl5 = 2;
					gold -= 150;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt1 == 1 && c1 == 1 && three1 == 1 && towertype1 == 3 && gold >= 200 && lvl1 == 0){// клик на улучшение башни 3 типа, 1 lvl
					c1 = 0;
					ctt1 = 0;
					lvl1 = 3;
					gold -= 200;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt2 == 1 && c1 == 1 && three2 == 1 && towertype2 == 3 && gold >= 200 && lvl2 == 0){
					c1 = 0;
					ctt2 = 0;
					lvl2 = 3;
					gold -= 200;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt3 == 1 && c1 == 1 && three3 == 1 && towertype3 == 3 && gold >= 200 && lvl3 == 0){
					c1 = 0;
					ctt3 = 0;
					lvl3 = 3;
					gold -= 200;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt4 == 1 && c1 == 1 && three4 == 1 && towertype4 == 3 && gold >= 200 && lvl4 == 0){   
                    c1 = 0;
					ctt4 = 0;
					lvl4 = 3;
					gold -= 200;
				}else if((x > 700 && x < 700+150) && (y > 660 && y < 660+150) && ctt5 == 1 && c1 == 1 && three5 == 1 && towertype5 == 3 && gold >= 200 && lvl5 == 0){ 
                    c1 = 0;
					ctt5 = 0;
					lvl5 = 3;
					gold -= 200;
				}
				else if((x > 166 && x < 166+122) && (y > 460 && y < 460+122) && three1 == 1 && towertype1 == 1 && lvl1 == 1){ // клик на башню 1 типа, 2 лвла
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt1 = 1; 
                    c1 = 1;
					sell = 1;
					up = 1;
					lvl = 1;
				}else if((x > 496 && x < 496+122) && (y > 462 && y < 462+122) && three2 == 1 && towertype2 == 1 && lvl2 == 1){
					c = 0;
					ctt1 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt2 = 1;
                    c1 = 1;
					sell = 1;
					up = 1;
					lvl = 1;
				}else if((x > 1040 && x < 1040+122) && (y > 463 && y < 463+122) && three3 == 1 && towertype3 == 1 && lvl3 == 1){
					c = 0;
					ctt2 = 0;
					ctt1 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt3 = 1; 
                    c1 = 1;
					sell = 1;
					up = 1;
					lvl = 1;
				}else if((x > 1052 && x < 1052+122) && (y > 250 && y < 250+122) && three4 == 1 && towertype4 == 1 && lvl4 == 1){
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt1 = 0;
					ctt5 = 0;
					ctt4 = 1;   
                    c1 = 1;
					sell = 1;
					up = 1;
					lvl = 1;
				}else if((x > 558 && x < 558+122) && (y > 250 && y < 250+122) && three5 == 1 && towertype5 == 1 && lvl5 == 1){ 
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt1 = 0;
					ctt5 = 1;
                    c1 = 1;
					sell = 1;
					up = 1;
					lvl = 1;
				}
				else if((x > 166 && x < 166+122) && (y > 460 && y < 460+122) && three1 == 1 && towertype1 == 2 && lvl1 == 2){ // клик на башню 2 типа 2 лвла
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt1 = 1; 
                    c1 = 1;
					sell = 2;
					up = 2;
					lvl = 2;
				}else if((x > 496 && x < 496+122) && (y > 462 && y < 462+122) && three2 == 1 && towertype2 == 2 && lvl2 == 2){
					c = 0;
					ctt1 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt2 = 1;
                    c1 = 1;
					sell = 2;
					up = 2;
					lvl = 2;
				}else if((x > 1040 && x < 1040+122) && (y > 463 && y < 463+122) && three3 == 1 && towertype3 == 2  && lvl3 == 2){
					c = 0;
					ctt2 = 0;
					ctt1 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt3 = 1; 
                    c1 = 1;
					sell = 2;
					up = 2;
					lvl = 2;
				}else if((x > 1052 && x < 1052+122) && (y > 250 && y < 250+122) && three4 == 1 && towertype4 == 2  && lvl4 == 2){
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt1 = 0;
					ctt5 = 0;
					ctt4 = 1;   
                    c1 = 1;
					sell = 2;
					up = 2;
					lvl = 2;
				}else if((x > 558 && x < 558+122) && (y > 250 && y < 250+122) && three5 == 1 && towertype5 == 2  && lvl5 == 2){ 
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt1 = 0;
					ctt5 = 1;
                    c1 = 1;
					sell = 2;
					up = 2;
					lvl = 2;
				}
				else if((x > 166 && x < 166+122) && (y > 460 && y < 460+122) && three1 == 1 && towertype1 == 3  && lvl1 == 3){ // клик на башню 3 типа 2 лвла
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt1 = 1; 
                    c1 = 1;
					sell = 3;
					up = 3;
					lvl = 3;
				}else if((x > 496 && x < 496+122) && (y > 462 && y < 462+122) && three2 == 1 && towertype2 == 3 && lvl2 == 3){
					c = 0;
					ctt1 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt2 = 1;
                    c1 = 1;
					sell = 3;
					up = 3;
					lvl = 3;
				}else if((x > 1040 && x < 1040+122) && (y > 463 && y < 463+122) && three3 == 1 && towertype3 == 3 && lvl3 == 3){
					c = 0;
					ctt2 = 0;
					ctt1 = 0;
					ctt4 = 0;
					ctt5 = 0;
					ctt3 = 1; 
                    c1 = 1;
					sell = 3;
					up = 3;
					lvl = 3;
				}else if((x > 1052 && x < 1052+122) && (y > 250 && y < 250+122) && three4 == 1 && towertype4 == 3 && lvl4 == 3){
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt1 = 0;
					ctt5 = 0;
					ctt4 = 1;   
                    c1 = 1;
					sell = 3;
					up = 3;
					lvl = 3;
				}else if((x > 558 && x < 558+122) && (y > 250 && y < 250+122) && three5 == 1 && towertype5 == 3 && lvl5 == 3){ 
					c = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt1 = 0;
					ctt5 = 1;
                    c1 = 1;
					sell = 3;
					up = 3;
					lvl = 3;
				}
				else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt1 == 1 && towertype1 == 1 && c1 == 1 && three1 == 1){// клик на удаление башни 1. продажа башни 1 типа
					t1 = 0;   
                    c1 = 0;
					three1 = 0;
					towertype1 = 0;
					ctt1 = 0;
					up = 0;
					lvl1 = 0;
					gold+=25;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt2 == 1 && towertype2 == 1 && c1 == 1 && three2 == 1){
					t2 = 0;   
                    c1 = 0;
					three2 = 0;
					towertype2 = 0;
					ctt2 = 0;
					up = 0;
					lvl2 = 0;
					gold+=25;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt3 == 1 && towertype3 == 1 && c1 == 1 && three3 == 1){
					t3 = 0;   
                    c1 = 0;
					three3 = 0;
					towertype3 = 0;
					up = 0;
					ctt3 = 0;
					lvl3 = 0;
					gold+=25;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt4 == 1 && towertype4 == 1 && c1 == 1 && three4 == 1){
					t4 = 0;   
                    c1 = 0;
					three4 = 0;
					towertype4 = 0;
					up = 0;
					ctt4 = 0;
					lvl4 = 0;
					gold+=25;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt5 == 1 && towertype5 == 1 && c1 == 1 && three5 == 1){
					t5 = 0;   
                    c1 = 0;
					three5 = 0;
					towertype5 = 0;
					ctt5 = 0;
					up = 0;
					lvl5 = 0;
					gold+=25;
				}
				else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt1 == 1 && towertype1 == 2 && c1 == 1 && three1 == 1){// клик на удаление башни 2. продажа башни 2 типа
					t1 = 0;   
                    c1 = 0;
					three1 = 0;
					up = 0;
					towertype1 = 0;
					ctt1 = 0;
					lvl1 = 0;
					gold+=50;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt2 == 1 && towertype2 == 2 && c1 == 1 && three2 == 1){
					t2 = 0;   
                    c1 = 0;
					three2 = 0;
					up = 0;
					towertype2 = 0;
					ctt2 = 0;
					lvl2 = 0;
					gold+=50;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt3 == 1 && towertype3 == 2 && c1 == 1 && three3 == 1){
					t3 = 0;   
                    c1 = 0;
					three3 = 0;
					towertype3 = 0;
					ctt3 = 0;
					lvl3 = 0;
					up = 0;
					gold+=50;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt4 == 1 && towertype4 == 2 && c1 == 1 && three4 == 1){
					t4 = 0;   
                    c1 = 0;
					three4 = 0;
					towertype4 = 0;
					ctt4 = 0;
					lvl4 = 0;
					up = 0;
					gold+=50;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt5 == 1 && towertype5 == 2 && c1 == 1 && three5 == 1){
					t5 = 0;   
                    c1 = 0;
					up = 0;
					lvl5 = 0;
					three5 = 0;
					towertype5 = 0;
					ctt5 = 0;
					gold+=50;
				}
				else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt1 == 1 && towertype1 == 3 && c1 == 1 && three1 == 1){// клик на удаление башни 1. продажа башни 3 типа
					t1 = 0;   
                    c1 = 0;
					lvl1 = 0;
					three1 = 0;
					towertype1 = 0;
					ctt1 = 0;
					up = 0;
					gold+=75;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt2 == 1 && towertype2 == 3 && c1 == 1 && three2 == 1){
					t2 = 0;   
                    c1 = 0;
					three2 = 0;
					lvl2 = 0;
					towertype2 = 0;
					up = 0;
					ctt2 = 0;
					gold+=75;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt3 == 1 && towertype3 == 3 && c1 == 1 && three3 == 1){
					t3 = 0;   
                    c1 = 0;
					lvl3 = 0;
					up = 0;
					three3 = 0;
					towertype3 = 0;
					ctt3 = 0;
					gold+=75;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt4 == 1 && towertype4 == 3 && c1 == 1 && three4 == 1){
					t4 = 0;   
                    c1 = 0;
					three4 = 0;
					up = 0;
					towertype4 = 0;
					ctt4 = 0;
					lvl4 = 0;
					gold+=75;
				}else if((x > 850 && x < 850+150) && (y > 660 && y < 660+150) && ctt5 == 1 && towertype5 == 3 && c1 == 1 && three5 == 1){
					t5 = 0;   
                    c1 = 0;
					three5 = 0;
					up = 0;
					towertype5 = 0;
					lvl5 = 0;
					ctt5 = 0;
					gold+=75;
				}
				else {
					menu = 1;
					menuout = 0; 
					c1 = 0;
					c = 0;
					ct1 = 0;
					ct2 = 0;
					ct3 = 0;
					ct4 = 0;
					ct5 = 0;
					ctt1 = 0;
					ctt2 = 0;
					ctt3 = 0;
					ctt4 = 0;
					ctt5 = 0;
					lvl = 0;
				}
			break;
    	}
		}
		x = event.motion.x;
		y = event.motion.y;
	
		draw_back(sur, anime);	
		mobs_way(mobs);	
		isRadius(towers, mobs);
		draw_anime(sur, 120, 385, towertype1, anime, towers->isRadius);
		draw_anime(sur, 454, 387, towertype2, anime, towers->next->isRadius);
		draw_anime(sur, 998, 388, towertype3, anime, towers->next->next->isRadius);
		draw_anime(sur, 1010, 175, towertype4, anime, towers->next->next->next->isRadius);
		draw_anime(sur, 516, 175, towertype5, anime, towers->next->next->next->next->isRadius);
			if (wave == 1) {
        		wave1(mobs, &wavepause, &sc, &qwerty, &wave);
				show_mobs1(sur, mobs, anime);
			}else if (wave == 2) {
        		wave2(mobs, &wavepause, &sc, &qwerty, &wave);
				show_mobs1(sur, mobs, anime);
     		}else if (wave == 3) {
        		wave3(mobs, &wavepause, &sc, &qwerty, &wave);
				show_mobs(sur, mobs, anime);
    		}else if (wave == 4) {
				if(timer < 10){
					timer++;
				}
        		wave4(mobs, &wavepause, &sc, &qwerty, &wave);
				show_mobs(sur, mobs, anime);
    		}else if (wave == 5) {
        		wave5(mobs, &wavepause, &sc, &qwerty, &wave);
				show_mobs(sur, mobs, anime);
			}
		draw_back1(sur);
		draw_sprite4(sur, x, y,&t4, gold);
		draw_tower(sur, x, y, t5, 516, 175, 200, 200, towertype5, anime, lvl5);// центр верх
		draw_menu(sur, menu);
		draw_tower(sur, x, y, t4, 1010, 175, 200, 200, towertype4, anime, lvl4); //право верх
		draw_sprite1(sur, x, y,&t1, gold);
		draw_choise(sur, &c);
		draw_choise1(sur, &c1, sell, up, lvl); 
		draw_tower(sur, x, y, t1, 120, 385, 200, 200, towertype1, anime, lvl1);// низ самый левый
		draw_sprite2(sur, x, y,&t2, gold);
		draw_tower(sur, x, y, t2, 454, 387, 200, 200, towertype2, anime, lvl2);// центр низ
		draw_sprite3(sur, x, y,&t3, gold);
		draw_tower(sur, x, y, t3, 998, 388, 200, 200, towertype3, anime, lvl3); //право низ  
		draw_sprite5(sur, x, y,&t5, gold);
		draw_pause(sur, menuout,pause);
		draw_exit(sur, menuout);
		draw_gold(sur, gold);
		draw_wave(sur,wave); 
		draw_health(sur, health);
		minushp(mobs, &health);
		draw_unit(sur, x, y);
		if (towers->isRadius && t1 == 1 && towertype1 == 1){
			k1++;
			if(k1 == 40) {
				killMob1(towers, mobs, &gold);
				k1 = 0;
			}
		}
		if (towers->next->isRadius && t2 == 1 && towertype2 == 1){
			k2++;
			if(k2 == 40) {
				killMob2(towers, mobs, &gold);
				k2 = 0;
			}
		}
		if (towers->next->next->isRadius && t3 == 1 && towertype3 == 1){
			k3++;
			if(k3 == 40) {
				killMob3(towers, mobs, &gold);
				k3 = 0;
			}
		}
		if (towers->next->next->next->isRadius && t4 == 1 && towertype4 == 1){
			k4++;
			if(k4 == 40) {
				killMob4(towers, mobs, &gold);
				k4 = 0;
			}
		}
		if (towers->next->next->next->next->isRadius && t5 == 1 && towertype5 == 1){
			k5++;
			if(k5 == 40) {
				killMob5(towers, mobs, &gold);
				k5 = 0;
			}
		}
		if (towers->isRadius && t1 == 1 && towertype1 == 2){
			k1++;
			if(k1 == 28) {
				killMob1(towers, mobs, &gold);
				k1 = 0;
			}
		}
		if (towers->next->isRadius && t2 == 1 && towertype2 == 2){
			k2++;
			if(k2 == 28) {
				killMob2(towers, mobs, &gold);
				k2 = 0;
			}
		}
		if (towers->next->next->isRadius && t3 == 1 && towertype3 == 2){
			k3++;
			if(k3 == 28) {
				killMob3(towers, mobs, &gold);
				k3 = 0;
			}
		}
		if (towers->next->next->next->isRadius && t4 == 1 && towertype4 == 2){
			k4++;
			if(k4 == 28) {
				killMob4(towers, mobs, &gold);
				k4 = 0;
			}
		}
		if (towers->next->next->next->next->isRadius && t5 == 1 && towertype5 == 2){
			k5++;
			if(k5 == 28) {
				killMob5(towers, mobs, &gold);
				k5 = 0;
			}
		}
		if (towers->isRadius && t1 == 1 && towertype1 == 3){
			k1++;
			if(k1 == 23) {
				killMob1(towers, mobs, &gold);
				k1 = 0;
			}
		}
		if (towers->next->isRadius && t2 == 1 && towertype2 == 3){
			k2++;
			if(k2 == 23) {
				killMob2(towers, mobs, &gold);
				k2 = 0;
			}
		}
		if (towers->next->next->isRadius && t3 == 1 && towertype3 == 3){
			k3++;
			if(k3 == 23) {
				killMob3(towers, mobs, &gold);
				k3 = 0;
			}
		}
		if (towers->next->next->next->isRadius && t4 == 1 && towertype4 == 3){
			k4++;
			if(k4 == 23) {
				killMob4(towers, mobs, &gold);
				k4 = 0;
			}
		}
		if (towers->next->next->next->next->isRadius && t5 == 1 && towertype5 == 3){
			k5++;
			if(k5 == 23) {
				killMob5(towers, mobs, &gold);
				k5 = 0;
			}
		}
		if (health < 0) {
			gameover = 1;
			draw_back2(sur);
		}
		if (wave == 6) {
			victory = 1;
			draw_back3(sur);
		} 
		if (mobs->next == NULL && wave == 4 && timer == 10) {
       		draw_final(sur, anime);
		}
		SDL_UpdateWindowSurface(win);
		if(anime == 20)
			anime = 0;
		anime++;

		
		while(pause) {
			while (SDL_PollEvent(&event)) {
				if (event.key.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE) {
					SDL_Quit();
					exit(0);
				}
			    switch(event.type) {
					case SDL_MOUSEBUTTONDOWN:
						x = event.motion.x;
						y = event.motion.y;
					if ((x > 550 && x < 550+300) && (y > 270 && y < 270+300)) {
						pause = 0;
					}
		    	}
			}
			SDL_UpdateWindowSurface(win);
		}
			
		while(gameover == 1) {
			while (SDL_PollEvent(&event)) {
				if (event.key.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE) {
					SDL_Quit();
					exit(0);
				}
			    switch(event.type) {
					case SDL_MOUSEBUTTONDOWN:
						x = event.motion.x;
						y = event.motion.y;
					if ((x > 1050 && x < 1050+130) && (y > 720 && y < 720+95)) {
						gameover = 0;
						log = 1;
					}
					if ((x > 1220 && x < 1220+80) && (y > 720 && y < 720+95)) {
						SDL_Quit();
						exit(0);
					}
		    	}
			}
			SDL_UpdateWindowSurface(win);
		}
		while(victory == 1) {
			while (SDL_PollEvent(&event)) {
				if (event.key.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE) {
					SDL_Quit();
					exit(0);
				}
			    switch(event.type) {
					case SDL_MOUSEBUTTONDOWN:
						x = event.motion.x;
						y = event.motion.y;
					if ((x > 1050 && x < 1050+130) && (y > 720 && y < 720+95)) {
						victory = 0;
						log = 1;
					}
					if ((x > 1220 && x < 1220+80) && (y > 720 && y < 720+95)) {
						SDL_Quit();
						exit(0);
					}
		    	}
			}
			SDL_UpdateWindowSurface(win);
		}
		if(log == 1)
			break;
	}
	}
	return 0;
}
				
