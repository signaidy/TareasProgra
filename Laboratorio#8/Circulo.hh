 #include "Figura.hh"
 
 class Circulo: public Figura{
	 public:
		Circulo(Vector2d centro, double r);
		virtual double area() const = 0;
		virtual void escalar(const double escala) override;
		virtual void mover(const Vector2d lugar) override;
		virtual bool estaAdentro(const Vector2d posicion) const override;
		virtual std::string toString() const override;
	 private:
		Vector2d centro;
		double r;
 }