#include <cstdlib>
#include <iostream>
int main() {
	std::string key, encrypted, decrypted;
	int i, random;
	key = "....hoDWU3xn3Gk9y";
	encrypted = "\xde\x1b\x6c\x8c\x33\xaf\xe5\xd3\xfb\xd4\xe7\x76\x23\x06\xf6\x0f\xe4\xc8\x23\xa8\x3a\x5e\x80\x88\x08\xa2\x8e\xe2\x75\xa5\xd5\x80\x96\x10\x8b\x9c\xe7\x71\x11\x47\x2a\x23\xd5\x88\x42\x64\xa0\x65\x1b\x9f\x4c\x71\x3d\xd3\xbb\xb6\x8c\x95\x20\xf7\x34\x46\xb6\xab\x1d\x72\x91\xca";
	for (key[0] = 32; key[0] < 127; key[0] += 1)
	for (key[1] = 32; key[1] < 127; key[1] += 1)
	for (key[2] = 32; key[2] < 127; key[2] += 1)
	for (key[3] = 32; key[3] < 127; key[3] += 1) {
		std::srand(key[0] * key[1] * key[2] * key[3]);
		for (i = 0; i < encrypted.length(); i += 1) {
			random = std::rand();
			decrypted.push_back(encrypted[i] ^ key[random % key.length()] ^ random);
			if (std::isprint(decrypted[decrypted.length() - 1]) == 0) {
				break;
			}
		}
		if (encrypted.length() == i) {
			std::cout << key.substr(0, 4) << "\t" << decrypted << std::endl;
		}
		decrypted.clear();
	}
}
