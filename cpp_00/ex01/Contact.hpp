#pragma once

class Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
	public:
		public:
			Contact();
			~Contact();
			// Setters
			void setFirstName(const std::string& firstName);
			void setLastName(const std::string& lastName);
			void setNickname(const std::string& nickname);
			void setPhoneNumber(const std::string& phoneNumber);
			void setDarkestSecret(const std::string& darkestSecret);

			// Getters
			const std::string& getFirstName() const;
			const std::string& getLastName() const;
			const std::string& getNickname() const;
			const std::string& getPhoneNumber() const;
			const std::string& getDarkestSecret() const;

};
