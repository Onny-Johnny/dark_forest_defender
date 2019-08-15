#include "../inc/a.h"

void create_towers(Tower *towers) {
	Tower *cur = towers;

	while(cur->next != NULL) {
		cur = cur->next;
    }

	for (int i = 0; i < 4; i++) {
        cur->next = malloc(sizeof(Tower));

        cur->next->id = i + 1;

	    if(cur->next->id == 1) {
		    cur->next->rect.x = 454;
		    cur->next->rect.y = 387;
		}
        if( cur->next->id == 2) {
		    cur->next->rect.x = 998;
		    cur->next->rect.y = 388;
		}
        if(cur->next->id == 3) {
		    cur->next->rect.x = 1010;
		    cur->next->rect.y = 175;
		}
        if(cur->next->id == 4) {
		    cur->next->rect.x = 516;
		    cur->next->rect.y = 175;	  
		}
        cur->next->rect.w = 200;
		cur->next->rect.h = 200;
        cur->next->radius.x = cur->next->rect.x - 140;
		cur->next->radius.y = cur->next->rect.y - 20;
        cur->next->radius.w = 500;
		cur->next->radius.h = 300;
		cur->next->next = NULL;
		cur = cur->next;
	}
}

 void isRadius(Tower *towers, Mob *mobs) {
    Tower *curt = towers;
    Mob *curm = mobs;

    for (;curm != NULL;) {  
            if((curm->rect.x+61 > curt->radius.x && curm->rect.x+61 < curt->radius.x + curt->radius.w)
            && (curm->rect.y+61 > curt->radius.y && curm->rect.y+61 < curt->radius.y + curt->radius.h))
            {
                curt->isRadius = true;
                break;
            }else{
                 curt->isRadius = false;
            }
             
        curm = curm->next;
    }

    curt = curt->next;
    curm = mobs;

     for (;curm != NULL;) {  
            if((curm->rect.x+61 > curt->radius.x && curm->rect.x+61 < curt->radius.x + curt->radius.w)
            && (curm->rect.y+61 > curt->radius.y && curm->rect.y+61 < curt->radius.y + curt->radius.h))
            {
                curt->isRadius = true;
                break;
            }else{
                 curt->isRadius = false;
            } 
        curm = curm->next;
    }

    curt = curt->next;
    curm = mobs;

     for (;curm != NULL;) {  
            if((curm->rect.x+61 > curt->radius.x && curm->rect.x+61 < curt->radius.x + curt->radius.w)
            && (curm->rect.y+61 > curt->radius.y && curm->rect.y+61 < curt->radius.y + curt->radius.h))
            {
                curt->isRadius = true;
                break;
            }else{
                 curt->isRadius = false;
            }
             
        curm = curm->next;
    }
    curt = curt->next;
    curm = mobs;
     for (;curm != NULL;) {  
            if((curm->rect.x+61 > curt->radius.x && curm->rect.x+61 < curt->radius.x + curt->radius.w)
            && (curm->rect.y+61 > curt->radius.y && curm->rect.y+61 < curt->radius.y + curt->radius.h))
            {
                curt->isRadius = true;
                break;
            }else{
                 curt->isRadius = false;
            }
             
        curm = curm->next;
    }
    curt = curt->next;
    curm = mobs;
    for (;curm != NULL;) {  
            if((curm->rect.x+61 > curt->radius.x && curm->rect.x+61 < curt->radius.x + curt->radius.w)
            && (curm->rect.y+61 > curt->radius.y && curm->rect.y+61 < curt->radius.y + curt->radius.h))
            {
                curt->isRadius = true;
                break;
            }else{
                 curt->isRadius = false;
            }
        curm = curm->next;
    }
}

void killMob1(Tower *towers, Mob *mobs, int *gold) {
    Tower *curt = towers;
    Mob *curm = mobs;

    for (;curm != NULL;) {  
            if((curm->rect.x+61 > curt->radius.x && curm->rect.x+61 < curt->radius.x + curt->radius.w)
            && (curm->rect.y+61 > curt->radius.y && curm->rect.y+61 < curt->radius.y + curt->radius.h))
            {
                *gold += 25;
                delete_mobs(&mobs, curm);
                break;
            }else{
                 curt->isRadius = false;
            }
             
        curm = curm->next;
    }
}

void killMob2(Tower *towers, Mob *mobs, int *gold) {
    Tower *curt = towers;
    Mob *curm = mobs;

    curt = curt->next;
    for (;curm != NULL;) {  
            if((curm->rect.x+61 > curt->radius.x && curm->rect.x+61 < curt->radius.x + curt->radius.w)
            && (curm->rect.y+61 > curt->radius.y && curm->rect.y+61 < curt->radius.y + curt->radius.h))
            {
                *gold += 25;
                delete_mobs(&mobs, curm);
                break;
            }else{
                 curt->isRadius = false;
            }
             
        curm = curm->next;
    }
}

void killMob3(Tower *towers, Mob *mobs, int *gold) {
    Tower *curt = towers;
    Mob *curm = mobs;

    curt = curt->next;
    curt = curt->next;
    for (;curm != NULL;) {  
            if((curm->rect.x+61 > curt->radius.x && curm->rect.x+61 < curt->radius.x + curt->radius.w)
            && (curm->rect.y+61 > curt->radius.y && curm->rect.y+61 < curt->radius.y + curt->radius.h))
            {
                *gold += 25;
                delete_mobs(&mobs, curm);
                break;
            }else{
                 curt->isRadius = false;
            }            
        curm = curm->next;
    }
}
void killMob4(Tower *towers, Mob *mobs, int *gold) {
    Tower *curt = towers;
    Mob *curm = mobs;

    curt = curt->next;
    curt = curt->next;
    curt = curt->next;
    for (;curm != NULL;) {  
            if((curm->rect.x+61 > curt->radius.x && curm->rect.x+61 < curt->radius.x + curt->radius.w)
            && (curm->rect.y+61 > curt->radius.y && curm->rect.y+61 < curt->radius.y + curt->radius.h))
            {
                *gold += 25;
                delete_mobs(&mobs, curm);
                break;
            }else{
                 curt->isRadius = false;
            }            
        curm = curm->next;
    }
}

void killMob5(Tower *towers, Mob *mobs, int *gold) {
    Tower *curt = towers;
    Mob *curm = mobs;

    curt = curt->next;
    curt = curt->next;
    curt = curt->next;
    curt = curt->next;
    for (;curm != NULL;) {  
            if((curm->rect.x+61 > curt->radius.x && curm->rect.x+61 < curt->radius.x + curt->radius.w)
            && (curm->rect.y+61 > curt->radius.y && curm->rect.y+61 < curt->radius.y + curt->radius.h))
            {
                *gold += 25;
                delete_mobs(&mobs, curm);
                break;
            }else{
                 curt->isRadius = false;
            }            
        curm = curm->next;
    }
}

void minushp(Mob *mobs, int *hp) {
    Mob *curm = mobs;

    for (;curm != NULL;) {  
            if((curm->rect.x+61 > 0 && curm->rect.x+61 < 120) 
            && (curm->rect.y+61 > 360 && curm->rect.y+61 < 475))
            { 
                delete_mobs(&mobs, curm);
                *hp -= 1; 
                break;
            }else{
            }            
        curm = curm->next;
    }
}

