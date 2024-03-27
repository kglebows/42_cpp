#ifndef ARRAY_TPP
# define ARRAY_TPP

/*cannonicalForm*/
template <typename T>
Array<T>::Array():
    _array(NULL),
    _size(0)
{std::clog << "\033[1;30m" << "⚙️  Array:: Default Constructor" << "\033[0m" << std::endl;}
template <typename T>
Array<T>::Array(unsigned int size):
    _array(new T[size]),
    _size(size)
{std::clog << "\033[1;30m" << "⚙️  Array:: Size " << size << " Constructor" << "\033[0m" << std::endl;}
template <typename T>
Array<T>::Array(Array const& copy):
    _array(new T[copy._size]),
    _size(copy._size)
{
    for (unsigned int i = 0; i < copy._size; i++)
        _array[i] = copy._array[i];
    std::clog << "\033[1;30m" << "⚙️  Array:: Copy Constructor" << "\033[0m" << std::endl;
}
template <typename T>
Array<T>& Array<T>::operator=(Array<T> const& copy){
    if (this != &copy){
        if (_array != NULL)
            delete[] _array;
        _array = new T[copy._size];
        _size = copy._size;
        for (unsigned int i = 0; i < copy._size; i++)
            _array[i] = copy._array[i];
    }
    std::clog << "\033[1;30m" << "🟰  Array:: Copy Assignment Operator" << "\033[0m" << std::endl;
    return (*this);
}
template <typename T>
Array<T>::~Array(){
    if (_array != NULL)
        delete[] _array;
    std::clog << "\033[1;30m" << "💣 Array:: Destructor" << "\033[0m" << std::endl;
}

/*exceptions*/
template <typename T>
T& Array<T>::operator[](unsigned int index){
    if (index >= _size)
        throw std::out_of_range("index out of Array's range!");
    return (_array[index]);
}
template <typename T>
const T& Array<T>::operator[](unsigned int index) const{
    if (index >= _size)
        throw std::out_of_range("index out of Array's range!");
    return (_array[index]);
}

/*memberFunctions*/
template <typename T>
unsigned int Array<T>::size() const{
    return (_size);
}

#endif