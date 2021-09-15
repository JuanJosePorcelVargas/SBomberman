#pragma once
class Bomber
{
private:

	int anchoAvatar;
	int altoAvatar;
	int posicionAvatarX;
	int posicionAvatarY;

public:
	//Ancho Avatar
	int getAnchoAvatar() { return anchoAvatar; }
	void setAnchoAvatar(int _anchoAvatar) { anchoAvatar = _anchoAvatar; }


	//Alto Avatar
	int getAltoAvatar() { return altoAvatar; }
	void setAltoAvatar(int _altoAvatar) { altoAvatar = _altoAvatar; }



	//Posicion X
	int getPosicionAvatarX() {
		return posicionAvatarX;
	}
	void setPosicionX(int _posicionAvatarX) {
		posicionAvatarX = _posicionAvatarX;
	}


	//Posicion Y
	int getPosicionAvatarY() {
		return posicionAvatarY;
	}
	void setPosicionAvatarY(int _posicionAvatarY) {
		posicionAvatarY = _posicionAvatarY;
	}

	//Metodos
	void Morir();
	void Aparecer();
	void Correr();
	void SoltarBomba();





};

