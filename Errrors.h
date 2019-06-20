#pragma once


private:
	int a, b;
	int errNum;
	char  *errText;
	bool err;


void Counter::setErr(int errNum, const char *errText) {
	this->errNum = errNum;
	this->err = true;
	this->errText = new char[strlen(errText) + 1];
	strcpy_s(this->errText, strlen(errText) + 1, errText);
}


void Counter::echoError() {
	if (err) {
		cout << "Во время последней операции возникла ошибка (" << errNum << "): " << errText << endl;
		system("pause");
		exit(1);
	}
}


