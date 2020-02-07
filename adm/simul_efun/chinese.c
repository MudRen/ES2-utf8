
string chinese_number(int i)
{
  return CHINESE_D->chinese_number(i);
}

string to_chinese(string str)
{
  return CHINESE_D->chinese(str);
}

int is_chinese(string str)
{
    if (!str)
        return 0;

    // str = remove_ansi(str);

    return pcre_match(str, "^\\p{Han}+$");
}

int utf8_strlen(string str)
{
  return strlen(str);
/*
  int i;
  int n = 0;
  int len = strlen(str);
  for(i=0; i<len; i++) {
    if ((str[i] & 0xC0) != 0x80) n++;
  }
  return n;
*/
}
