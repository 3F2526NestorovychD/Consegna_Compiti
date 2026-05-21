#include <iostream>

class Bevanda {
    public:

    void preparazione(){
        scalda_acqua();
        aggiungi_ingredienti();
        versa();
        aggiuntivi_extra();
    }

    void scalda_acqua(){
        std::cout << "Scaldo l'acqua fino a 100 gradi\n";
    }

    void versa(){
        std::cout << "Verso il tutto nella tazza\n";
    }

    virtual void aggiungi_ingredienti() = 0;
    virtual void aggiuntivi_extra() = 0;
};

class caffe : public Bevanda{
    public:
    void aggiungi_ingredienti() override {
        std::cout << "Aggiungo un cucchiaio di caffe in polvere\n";
    }

    void aggiuntivi_extra() override {
        std::cout << "Aggiungo zucherro\n";
    }
};

class Te : public Bevanda{
    public:
    void aggiungi_ingredienti() override {
        std::cout << "Aggiungo una bustina di Te\n";
    }

    void aggiuntivi_extra() override {
        std::cout << "Aggiungo un po' di limone";
    }
};


int main(){

    Bevanda* gestore[] = {new caffe, new Te} ;

    for(int i = 0; i < 4; i++){
        gestore[i]->preparazione();
        std::cout << "-------";
    }



    return 0;
}