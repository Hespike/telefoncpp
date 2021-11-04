struct Telefon {
    unsigned tarhely;
    unsigned foglalt = 0;
};

bool telepit(Telefon& telefon, unsigned meret) {
    if (telefon.tarhely-telefon.foglalt >= meret){
        telefon.foglalt = telefon.foglalt + meret;
        return true;
    } else {
        return false;
    }
}

/*
 struct Telefon {
    unsigned tarhely;
    unsigned foglalt = 0;
};

bool telepit(Telefon& telefon, unsigned meret) {
    if (telefon.foglalt + meret <= telefon.tarhely) {
        telefon.foglalt += meret;
        return true;
    }

    return false;
}
 */
