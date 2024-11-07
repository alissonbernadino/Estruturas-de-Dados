const int maxx = 100;

class fila
{
private:
  int tamanho;
  int *vet;

public:
  fila(int t);
  void addFila();
  void removeFila();
  bool vaziaFila();
  bool cheiaFila();
  void mostrarFila();
  void apagarFila();
};