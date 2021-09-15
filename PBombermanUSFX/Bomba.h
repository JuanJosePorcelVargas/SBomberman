#pragma once
class Bomba
{

private:

	int anchoBomba;
	int altoBomba;
	int posicionBombaX;
	int posicionBombaY;

public:

	//Ancho Bomba

	int getAnchoBomba() {
		return anchoBomba;
	}
	void setAnchoBomba(int _anchoBomba) {
		anchoBomba = _anchoBomba;
	}

	//Alto Bomba

	int getAltoBomba() {
		return altoBomba;
	}
	void setAltoBomba(int _altoBomba) {
		altoBomba = _altoBomba;
	}

	//Posicion en  X
	int getPosicionBombaX() {
		return posicionBombaX;
	}
	void setPosicionBombaX(int _posicionBombaX) {
		posicionBombaX = _posicionBombaX;
	}

	//Posicion en Y
	int getPosicionBombaY() {
		return posicionBombaY;
	}
	void setPosicionBombaY(int _posicionBombaY) {
		posicionBombaY = _posicionBombaY;
	}

	//Metodos
	void Explotar();





};

