#pragma once
class Enemigo
{

private:

	int anchoEnemigo;
	int altoEnemigo;
	int posicionEnemigoX;
	int posicionEnemigoY;

public:
	//Ancho Enemigo
	int getanchoAvatar() {
		return anchoEnemigo;
	}
	void setanchoAvatar(int _anchoEnemigo) {
		anchoEnemigo = _anchoEnemigo;
	}

	//Alto Enemigo
	int getaltoAvatar() {
		return altoEnemigo;
	}
	void setaltoAvatar(int _altoEnemigo) {
		altoEnemigo = _altoEnemigo;
	}


	//Posicion X
	int getPosicionEnemigoX() {
		return posicionEnemigoX;
	}
	void setPosicionEnemigoX(int _posicionEnemigoX) {
		posicionEnemigoX = _posicionEnemigoX;
	}

	//Posicion Y
	int getPosicionEnemigoY() {
		return posicionEnemigoY;
	}
	void setPosicionEnemigoY(int _posicionEnemigoY) {
		posicionEnemigoY = _posicionEnemigoY;

	}

	//Metodos

	void Atacar();
	void Morir();
	void Aparecer();




};

