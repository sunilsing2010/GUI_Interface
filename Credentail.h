#pragma once



ref class Credentail
{
private:
	System::String^ userName = "ItsKhuramShahzad";
      System::String^ password = "exam123";

public:

	System :: String^ getUserName() {
		return this->userName;
	}

	System::String^ getPassword() {
		return this->password;
	}

};

