void myStringCopy(char destination [], const char source []) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int myStringLength(const char str []) {
    int length = 0, i = 0;
    while (str[i++] != '\0') length++;

    return length;
}

// if they are both empty strings then invalid

int myStringCompare(char * str1, char * str2)
{
    while(*str1==*str2) {
        if(*str1=='\0' || *str2=='\0') {
            break;
        } else {
        str1++;
        str2++;
        }
    if(*str1=='\0' && *str2=='\0') {
        return 1;
    }
 }
 return 0;
}


DataType& DataType::operator=(const DataType& rhs){
  if (this != &rhs){
    m_intVal = rhs.m_intVal;
    m_doubleVal = rhs.m_doubleVal;
  }
  return *this;
}
