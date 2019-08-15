#include "../inc/a.h"

void wave1(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 3) {
		if (*sc == 0) {
			create_mobs(mobs, 1, 3);		
			*qwerty += 1;
		}
		if (*sc == 40) {
			create_mobs(mobs, 1, 1);	
			create_mobs(mobs, 1, 2);
			 *qwerty += 1;
		}
		if (*sc == 60) {
			create_mobs(mobs, 1, 1);
			 *qwerty += 1;
		}
    }
    if (mobs->next == NULL) 
        *wavepause += 1;
    if (mobs->next == NULL && *wavepause == 100) {
		*sc = 0;
		*qwerty = 0;
        *wavepause = 0;
        *wave = 2;
    }
}

void wave2(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 4) {
		if (*sc == 0) {
			create_mobs(mobs, 1, 1);		
			create_mobs(mobs, 1, 2);
			*qwerty += 1;
		}
		if (*sc == 20) {
			create_mobs(mobs, 1, 1);		
            *qwerty += 1;
		}
		if (*sc == 60) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			*qwerty += 1;
		}
		if (*sc == 80) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);
			*qwerty += 1;
		}
    }
    if (mobs->next == NULL) 
        *wavepause += 1;
    if (mobs->next == NULL && *wavepause == 100) {
		*sc = 0;
		*qwerty = 0;
        *wavepause = 0;
        *wave = 3;
    }
}


void wave3(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 3) {
		if (*sc == 0) {
			create_mobs(mobs, 1, 1);	
			*qwerty += 1;
		}
		if (*sc == 20) {
			create_mobs(mobs, 1, 1);	
			create_mobs(mobs, 1, 2);
            *qwerty += 1;
		}
		if (*sc == 40) {
			create_mobs(mobs, 1, 1);	
			create_mobs(mobs, 1, 2);
		}
		if (*sc == 80) {
			create_mobs(mobs, 1, 1);
			create_mobs(mobs, 1, 2);	
		}
    }
    if (mobs->next == NULL) 
        *wavepause += 1;
    if (mobs->next == NULL && *wavepause == 100) {
		*sc = 0;
		*qwerty = 0;
        *wavepause = 0;
        *wave = 4;
    }
}

void wave4(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 3) {
		if (*sc == 0) {
			create_mobs(mobs, 1, 3);
			*qwerty += 1;
		}
		if (*sc == 10) {
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
            *qwerty += 1;
		}
		if (*sc == 20) {
			create_mobs(mobs, 1, 1);
			*qwerty += 1;
		}
    }
    if (mobs->next == NULL) {
        *wavepause += 1;
	}
    if (mobs->next == NULL && *wavepause == 200) {
		*sc = 0;
		*qwerty = 0;
        *wavepause = 0;
        *wave = 5;
    }
}

void wave5(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 4) {
		if (*sc == 0) {
			create_mobs(mobs, 10, 1);
			*qwerty += 1;
		}
		if (*sc == 10) {
			create_mobs(mobs, 10, 2);
            *qwerty += 1;
		}
		if (*sc == 20) {
			create_mobs(mobs, 10, 1);
			*qwerty += 1;
		}
		if (*sc == 30) {
			create_mobs(mobs, 10, 2);
            *qwerty += 1;
		}
    }
	if (mobs->next == NULL) 
        *wavepause += 1;
    if (mobs->next == NULL && *wavepause == 200) {
		*sc = 0;
		*qwerty = 0;
        *wavepause = 0;
        *wave = 6;
    }
}
/*
void wave6(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 3) {
		if (*sc == 0) {
			create_mobs(mobs, 1, 3);
			*qwerty += 1;
		}
		if (*sc == 10) {
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
            *qwerty += 1;
		}
		if (*sc == 20) {
			create_mobs(mobs, 1, 1);
		}
    }
    if (mobs->next == NULL) 
        *wavepause += 1;
    if (mobs->next == NULL && *wavepause == 200) {
		*sc = 0;
		*qwerty = 0;
        *wavepause = 0;
        *wave = 7;
    }
}

void wave7(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 3) {
		if (*sc == 0) {
			create_mobs(mobs, 1, 3);
			*qwerty += 1;
		}
		if (*sc == 10) {
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
            *qwerty += 1;
		}
		if (*sc == 20) {
			create_mobs(mobs, 1, 1);
		}
    }
    if (mobs->next == NULL) 
        *wavepause += 1;
    if (mobs->next == NULL && *wavepause == 200) {
		*sc = 0;
		*qwerty = 0;
        *wavepause = 0;
        *wave = 8;
    }
}

void wave8(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 3) {
		if (*sc == 0) {
			create_mobs(mobs, 1, 3);
			*qwerty += 1;
		}
		if (*sc == 10) {
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
            *qwerty += 1;
		}
		if (*sc == 20) {
			create_mobs(mobs, 1, 1);
		}
    }
    if (mobs->next == NULL) 
        *wavepause += 1;
    if (mobs->next == NULL && *wavepause == 200) {
		*sc = 0;
		*qwerty = 0;
        *wavepause = 0;
        *wave = 9;
    }
}

void wave9(Mob *mobs, int *wavepause, int *sc, int *qwerty, int *wave) {
    *sc += 1;

    if (*qwerty <= 3) {
		if (*sc == 0) {
			create_mobs(mobs, 1, 3);
			*qwerty += 1;
		}
		if (*sc == 10) {
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
			create_mobs(mobs, 1, 2);
            *qwerty += 1;
		}
		if (*sc == 20) {
			create_mobs(mobs, 1, 1);
		}
    }
    if (mobs->next == NULL) 
        *wavepause += 1;
    if (mobs->next == NULL && *wavepause == 200) {
		*sc = 0;
		*qwerty = 0;
        *wavepause = 0;
        *wave = 10;
    }
}
*/
