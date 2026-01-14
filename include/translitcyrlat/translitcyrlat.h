/**
 * @file translitcyrlat.h
 * @author Василий Алтунин (skyr@altuninvv.ru)
 * @brief Файл содержит объявление и реализацию класса TranslitCyrLat
 * @version 0.1.0
 * @date 07.01.2026
 * @bug Багов не обнаружено
  *
 * @copyright Алтунин Василий 2026
 *
 * Файл содержит реализацию класса TranslitCyrLat для транслитерации с русскога языка
 *
 * @example examples/basic/main.cpp Файл содержит пример использования класса TranslitCyrLat
 *
 */


#ifndef TRANSLITCYRLAT_H
#define TRANSLITCYRLAT_H

#include <map>

#include <string>

#pragma once

/**
 * @brief Пространство имён altuninvv::string содержит классы и функции для 
 обработки строк
 *
 */
namespace altuninvv::string {

 /**
 * @brief Устанавливает транслитерацию в формате ГОСТ
 * 
 */
static const int TRANSLIT_GOST = 0;

/**
 * @brief Устанавливает транслитерацию в упрощеном формате для создания логинов и адресов e-mail 
 * 
 */
static const int TRANSLIT_EMAIL = 1;

/**
 * @brief Карта привязки русских букв к латинским в формате ГОСТ 
 * 
 */
static const std::map<std::wstring, std::string> CYR_TO_LAT_GOST = {    
{L"А", "A"},
{L"а", "a"},
{L"Б", "B"}, 
{L"б", "b"},
{L"В", "V"}, 
{L"в", "v"},
{L"Г", "G"}, 
{L"г", "g"},
{L"Д", "D"}, 
{L"д", "d"},
{L"Е", "E"}, 
{L"е", "e"},
{L"Ё", "Yo"}, 
{L"ё", "yo"},
{L"Ж", "Zh"}, 
{L"ж", "zh"},
{L"З", "Z"},  
{L"з", "z"},
{L"И", "I"},  
{L"и", "i"},
{L"Й", "J"},  
{L"й", "j"},
{L"К", "K"},  
{L"к", "k"},
{L"Л", "L"},  
{L"л", "l"},
{L"М", "M"},  
{L"м", "m"},
{L"Н", "N"},  
{L"н", "n"},
{L"О", "O"},  
{L"о", "o"},
{L"П", "P"},  
{L"п", "p"},
{L"Р", "R"},  
{L"р", "r"},
{L"С", "S"},  
{L"с", "s"},
{L"Т", "T"},  
{L"т", "t"},
{L"У", "U"},   
{L"у", "u"},
{L"Ф", "F"},  
{L"ф", "f"},
{L"Х", "X"},  
{L"х", "x"},
{L"Ц", "Cz"}, 
{L"ц", "cz"},
{L"Ч", "Ch"}, 
{L"ч", "ch"},
{L"Ш", "Sh"}, 
{L"ш", "sh"},
{L"Щ", "Shh"},
{L"щ", "shh"},
{L"Ъ", "''"}, 
{L"ъ", "''"},
{L"Ы", "Y'"}, 
{L"ы", "y'"},
{L"Ь", "'"},  
{L"ь", "'"},
{L"Э", "E'"}, 
{L"э", "e'"},
{L"Ю", "Y"},  
{L"ю", "y"},
{L"Я", "Ya"}, 
{L"я", "ya"},
{L" ", " "},
};

/**
 * @brief Карта привязки русских букв к латинским в упрощеном формате 
 * 
 */
static const std::map<std::wstring, std::string> CYR_TO_LAT_EMAIL = {    
{L"А", "A"},
{L"а", "a"},
{L"Б", "B"}, 
{L"б", "b"},
{L"В", "V"}, 
{L"в", "v"},
{L"Г", "G"}, 
{L"г", "g"},
{L"Д", "D"}, 
{L"д", "d"},
{L"Е", "E"}, 
{L"е", "e"},
{L"Ё", "Yo"}, 
{L"ё", "yo"},
{L"Ж", "Zh"}, 
{L"ж", "zh"},
{L"З", "Z"},  
{L"з", "z"},
{L"И", "I"},  
{L"и", "i"},
{L"Й", "y"},  
{L"й", "y"},
{L"К", "K"},  
{L"к", "k"},
{L"Л", "L"},  
{L"л", "l"},
{L"М", "M"},  
{L"м", "m"},
{L"Н", "N"},  
{L"н", "n"},
{L"О", "O"},  
{L"о", "o"},
{L"П", "P"},  
{L"п", "p"},
{L"Р", "R"},  
{L"р", "r"},
{L"С", "S"},  
{L"с", "s"},
{L"Т", "T"},  
{L"т", "t"},
{L"У", "U"},   
{L"у", "u"},
{L"Ф", "F"},  
{L"ф", "f"},
{L"Х", "h"},  
{L"х", "h"},
{L"Ц", "Cz"}, 
{L"ц", "cz"},
{L"Ч", "Ch"}, 
{L"ч", "ch"},
{L"Ш", "Sh"}, 
{L"ш", "sh"},
{L"Щ", "Sch"},
{L"щ", "sch"},
{L"Ъ", ""}, 
{L"ъ", ""},
{L"Ы", "Y'"}, 
{L"ы", "y'"},
{L"Ь", ""},  
{L"ь", ""},
{L"Э", "E"}, 
{L"э", "e"},
{L"Ю", "U"},  
{L"ю", "u"},
{L"Я", "Ya"}, 
{L"я", "ya"},
{L" ", " "},
};

/**
 * @brief Класс для транслитерации русских строк
 *  
 * @bug Багов не обнаружено
 * @details 
 * Класс для транслитерации русских строк
 * 
 * @warning Нет предупреждений
 */
class TranslitCyrLat {
public:

  /**
   * @brief Конструктор класса TranslitCyrLat
   *
   */
  TranslitCyrLat();

  /**
   * @brief Деструктор класса TranslitCyrLat
   *
   */
  ~TranslitCyrLat();

  /**
   * @brief Производит трансклитерацию строк в указанном режиме
   * 
   * @param sourceStr - строка для транслитерации
   * @param type - Тип транслитерации
   * @return std::string - результат
   */
  static std::string transliterate(std::wstring sourceStr, int type);

  /**
   * @brief Производит трансклитерацию строк в режиме ГОСТ
   * 
   * @param sourceStr - строка для транслитерации
   * @return std::string - результат
   */
  static std::string transliterateToGost(std::wstring sourceStr);

  /**
   * @brief Производит трансклитерацию строк в упрощеном режиме
   * 
   * @param sourceStr - строка для транслитерации
   * @return std::string - результат
   */
  static std::string transliterateToLogin(std::wstring sourceStr);

private:
};

} // namespace altuninvv::transilt

#endif