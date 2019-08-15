#include "../inc/a.h"

void create_mobs(Mob *mobs, int count, int way) {
	SDL_Rect rect_value;
	Mob *cur = mobs;
	int q = 0;
	
	while(cur->next != NULL) {
		cur = cur->next;
		q++;
	}
	
	for (int i = q; i < count + q; i++) {
		if (way == 1) {
			rect_value.x = 1400;
			rect_value.y = 150;
			rect_value.w = 122;
			rect_value.h = 122;
		}
		else if (way == 2) {
			rect_value.x = 1400;
			rect_value.y = 480;
			rect_value.w = 122;
			rect_value.h = 122;
		}
		else if (way == 3) {
			rect_value.x = 415;
			rect_value.y = 720;
			rect_value.w = 122;
			rect_value.h = 122;
		}
		
		cur->next = malloc(sizeof(Mob));
		cur->next->id = i + 1;
		cur->next->way = way;
		cur->next->ticks = 0;
		cur->next->bmp = SDL_LoadBMP("bmp/boss1.bmp");
		cur->next->rect = rect_value;
		cur->next->isdead = 0;
		cur->next->next = NULL;
		cur = cur->next;
	}
}

void show_mobs(SDL_Surface *sur, Mob *mobs, int anime) {
	Mob *cur = mobs;
	SDL_Surface *bmp_value;
	SDL_Rect rect_value;

	for (; cur != NULL;) {
		bmp_value = cur->bmp;
		rect_value = cur->rect;
		if(anime >= 0 && anime <= 5) {
			cur->bmp = SDL_LoadBMP("bmp/boss1.bmp");
		}
		if(anime >= 6 && anime <= 12) {
			cur->bmp = SDL_LoadBMP("bmp/boss2.bmp");
		}
		if(anime >= 13 && anime <= 20) {
			cur->bmp = SDL_LoadBMP("bmp/boss3.bmp");
		}
		if (cur->way == 3) {
			if (cur->ticks >= 0 && cur->ticks <= 65){
                if (anime >= 0 && anime <= 5) {
					cur->bmp = SDL_LoadBMP("bmp/bossback1.bmp");
				}
				if (anime >= 6 && anime <= 12) {
					cur->bmp = SDL_LoadBMP("bmp/bossback2.bmp");
				}
				if (anime >= 13 && anime <= 20) {
						cur->bmp = SDL_LoadBMP("bmp/bossback3.bmp");
				}  
			}
				else if (cur->ticks > 65 && cur->ticks <= 126){
                	if (anime >= 0 && anime <= 5) {
						cur->bmp = SDL_LoadBMP("bmp/bossback1.bmp");
					}
					if (anime >= 6 && anime <= 12) {
						cur->bmp = SDL_LoadBMP("bmp/bossback2.bmp");
					}
					if (anime >= 13 && anime <= 20) {
						cur->bmp = SDL_LoadBMP("bmp/bossback3.bmp");
					}  
                }
		}
		cur = cur->next;
		SDL_SetColorKey(bmp_value, SDL_TRUE, SDL_MapRGB(bmp_value->format, 0, 0, 0));
		SDL_BlitScaled(bmp_value, NULL, sur, &rect_value);
	}
}
void show_mobs1(SDL_Surface *sur, Mob *mobs, int anime) {
	Mob *cur = mobs;
	SDL_Surface *bmp_value;
	SDL_Rect rect_value;

	for (; cur != NULL;) {
		bmp_value = cur->bmp;
		rect_value = cur->rect;
		if(anime >= 0 && anime <= 5) {
			cur->bmp = SDL_LoadBMP("bmp/pers1.bmp");
		}
		if(anime >= 6 && anime <= 12) {
			cur->bmp = SDL_LoadBMP("bmp/pers2.bmp");
		}
		if(anime >= 13 && anime <= 20) {
			cur->bmp = SDL_LoadBMP("bmp/pers3.bmp");
		}
		if (cur->way == 3) {
			if (cur->ticks >= 0 && cur->ticks <= 65){
                if (anime >= 0 && anime <= 5) {
					cur->bmp = SDL_LoadBMP("bmp/persback1.bmp");
				}
				if (anime >= 6 && anime <= 12) {
					cur->bmp = SDL_LoadBMP("bmp/persback2.bmp");
				}
				if (anime >= 13 && anime <= 20) {
						cur->bmp = SDL_LoadBMP("bmp/persback3.bmp");
				}  
			}
				else if (cur->ticks > 65 && cur->ticks <= 126){
                	if (anime >= 0 && anime <= 5) {
						cur->bmp = SDL_LoadBMP("bmp/persback1.bmp");
					}
					if (anime >= 6 && anime <= 12) {
						cur->bmp = SDL_LoadBMP("bmp/persback2.bmp");
					}
					if (anime >= 13 && anime <= 20) {
						cur->bmp = SDL_LoadBMP("bmp/persback3.bmp");
					}  
                }
		}
		cur = cur->next;
		SDL_SetColorKey(bmp_value, SDL_TRUE, SDL_MapRGB(bmp_value->format, 0, 0, 0));
		SDL_BlitScaled(bmp_value, NULL, sur, &rect_value);
	}
}

void mobs_way(Mob *mobs) {
	Mob *cur = mobs;
	
	for (; cur != NULL;) {
		if (cur->way == 1) {
			if (cur->ticks >= 0 && cur->ticks <= 100) {
				cur->rect.x -= 5;
			}
			else if (cur->ticks > 100 && cur->ticks <= 140) {
				cur->rect.x -= 3;
				cur->rect.y += 2;
			}
			else if (cur->ticks > 140 && cur->ticks <= 180) {
				cur->rect.x -= 2;
				cur->rect.y += 3;
			}
			else if (cur->ticks > 180) {
				cur->rect.x -= 5;
			}
		}
		else if (cur->way == 2) {
			if (cur->ticks >= 0 && cur->ticks <= 80){
				cur->rect.x -= 2;
				cur->rect.y += 1;
			}
			else if (cur->ticks > 80 && cur->ticks <= 174) {
				cur->rect.x -= 3;
			}
			else if (cur->ticks > 174 && cur->ticks <= 288) {
				cur->rect.x -=2;
				cur->rect.y-=1;
			}
			else if (cur->ticks > 288 && cur->ticks <= 338) {
				cur->rect.x -=2;
				cur->rect.y-=2;
			}
			else if (cur->ticks > 338) {
				cur->rect.x -= 3;
			}
		}
		else if (cur->way == 3) {
			if (cur->ticks >= 0 && cur->ticks <= 65){
                cur->rect.x += 3;
                cur->rect.y -= 2;
            }
            else if (cur->ticks > 65 && cur->ticks <= 126){
                cur->rect.x += 1;
                cur->rect.y -= 4;
            }
            else if (cur->ticks > 126) {
                cur->rect.x -= 5;
            }
		}
		cur->ticks += 1;
		cur = cur->next;
	}
}
void delete_first_mob(Mob **mobs) {
	Mob *cur = *mobs;
	Mob *next_mob = NULL;
	
	
	if(cur->next != NULL) {
		cur = cur->next;
		next_mob = cur->next;
		free(cur);
		(*mobs)->next = next_mob;
	}
}

void delete_mobs(Mob **mobs_in, Mob *mob) {
	int index = mob->id;
	Mob *schet = *mobs_in;
		
	if (schet->next != NULL) {
        	int sch = 1;
			
		while(schet->next->next != NULL) {
			schet = schet->next;
			sch++;
		}if(sch == 1) {
			delete_first_mob(mobs_in);
		}else {
			if(sch == index) {
				free(schet->next);
    				schet->next = NULL;
			}
		Mob *current = *mobs_in;
		Mob *peredIsId = current;
		if(current->next != NULL) {
			current = current->next;
			for(; current->next != NULL;) {
				if(current->id == index) {
					if(current->next != NULL) {
						peredIsId->next = current->next;
						free(current);
					}
					else {
						peredIsId->next = NULL;
						free(current);
					}
				}
				peredIsId = current;
				current = current->next;
			}
		}
	}
	}
}

