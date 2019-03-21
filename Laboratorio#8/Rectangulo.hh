#include "Figura.hh"

class Rectangulo : public Figura{
	public:
		Rectangulo(Vector2d c, double a, double l);
		virtual double area() const override;
		virtual void escalar(const double escala) override;
		virtual void mover(const Vector2d lugar) override;
		virtual bool estaAdentro(const Vector2d posicion) const override;
		virtual std::string toString() const override;
	private:
		Vector2d o;
		double w;
		double h;
}