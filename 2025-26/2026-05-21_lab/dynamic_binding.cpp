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
    virtual ~Bevanda() = default;
};

class Caffe : public Bevanda{
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
        std::cout << "Aggiungo un po' di limone\n";
    }
};


int main(){

    Bevanda* gestore[] = {new Caffe, new Te} ;
    int size = sizeof(gestore) / sizeof(gestore[0]);

    for(int i = 0; i < size; i++){
        gestore[i]->preparazione();
        std::cout << "-------\n";
        delete gestore[i];
        gestore[i] = nullptr;
    }

    getchar();
    return 0;
}