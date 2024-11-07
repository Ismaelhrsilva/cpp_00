/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishenriq <ishenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:25:00 by ishenriq          #+#    #+#             */
/*   Updated: 2024/11/07 16:35:12 by ishenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string ft_replace_words(std::string &content, std::string oldWord, std::string newWord){
	std::string newContent;
	size_t pos = 0;
	size_t lenOldWord = oldWord.length();

	while (true){
		size_t found = content.find(oldWord, pos);
		if (found == std::string::npos){
			newContent += content.substr(pos);
			break;}
		newContent += content.substr(pos, found - pos);
		newContent += newWord;
		pos = found + lenOldWord;
	}
	return newContent;
};

int	main(int argc, char **argv){

	if (argc != 4){
		std::cout << "please, put <filename> <word> <substitute> argmuments" << std::endl;
		return (1);}

	std::string filename = argv[1];
	std::string outfilename =  filename + ".replace";
	std::string oldWord = argv[2];
	std::string newWord = argv[3];
	std::string content;

	std::ifstream infile(filename.c_str());
	if (!infile.is_open()){
		std::cerr << "Error opening file for reading" << std::endl;
		return (2);}

	std::string line;
	while (std::getline(infile, line)){
		content += ft_replace_words(line, oldWord, newWord) + "\n";}
	infile.close();

	std::ofstream outfile(outfilename.c_str());
	if (!outfile.is_open()){
		std::cerr << "Error opening file for writing" << std::endl;
		return (3);}

	outfile << content;
	outfile.close();

	std::cout << "File has been created with replace word" << std::endl;

	return (0);
};
