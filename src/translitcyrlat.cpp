#include "translitcyrlat.h"

#include "stringutils/stringutils.h"

#include <string>

using namespace altuninvv;
using namespace altuninvv::string;

namespace altuninvv::string {

/**
   * @brief Конструктор класса TranslitCyrLat
   *
*/
TranslitCyrLat::TranslitCyrLat() {}

/**
   * @brief Деструктор класса TranslitCyrLat
   *
*/
TranslitCyrLat::~TranslitCyrLat() {}

/**
 * @brief Производит трансклитерацию строк в указанном режиме
 *
 * @param sourceStr - строка для транслитерации
 * @param type - Тип транслитерации
 * @return std::string - результат
 */
std::string TranslitCyrLat::transliterate(std::wstring sourceStr, int type) {

  std::wstring buffer;
  std::string result;

  for (auto i : sourceStr) {

    buffer = i;

    switch (type) {
    case TRANSLIT_EMAIL:
      result.append(CYR_TO_LAT_EMAIL.at(buffer));
      break;
    case TRANSLIT_GOST:
      result.append(CYR_TO_LAT_GOST.at(buffer));
      break;
    }
  }

  return result;
}

/**
 * @brief Производит трансклитерацию строк в указанном режиме
 *
 * @param sourceStr - строка для транслитерации
 * @param type - Тип транслитерации
 * @return std::string - результат
 */
std::string TranslitCyrLat::transliterateToGost(std::wstring sourceStr) {
  return TranslitCyrLat::transliterate(sourceStr, TRANSLIT_GOST);
}

/**
 * @brief Производит трансклитерацию строк в указанном режиме
 *
 * @param sourceStr - строка для транслитерации
 * @param type - Тип транслитерации
 * @return std::string - результат
 */
std::string TranslitCyrLat::transliterateToLogin(std::wstring sourceStr) {

  StringUtils<std::wstring> s;

  std::wstring login = s.makeLogin(sourceStr, L" ");

  return TranslitCyrLat::transliterate(login, TRANSLIT_EMAIL);
}

} // namespace altuninvv::string
