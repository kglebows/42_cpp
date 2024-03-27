#ifndef ARRAY_TPP
# define ARRAY_TPP

/*cannonicalForm*/
template <typename T>
Array<T>::Array():
    array(NULL),
    size(0)
{}
template <typename T>
Array<T>::Array(unsigned int size):
    array(new T[size]),
    size(size)
{}
template <typename T>
Array<T>::Array(Array const& copy):
    array(new T[copy.size]),
    size(copy.size)
{
    for (unsigned int i = 0; i < copy.size; i++)
        array[i] = copy.array[i];
}
template <typename T>
Array<T>& Array<T>::operator=(Array<T> const& copy){
    if (this != &copy){
        if (array != NULL)
            delete[] array;
        array = new T[copy.size];
        size = copy.size;
        for (unsigned int i = 0; i < copy.size; i++)
            array[i] = copy.array[i];
    }
    return (*this);
}
template <typename T>
Array<T>::~Array(){
    if (array != NULL)
        delete[] array;
}

/*exceptions*/
template <typename T>
T& Array<T>::operator[](unsigned int index){
    if (index >= size)
        throw std::out_of_range("index out of Array's range!");
    return (array[index]);
}
template <typename T>
const T& Array<T>::operator[](unsigned int index) const{
    if (index >= size)
        throw std::out_of_range("index out of Array's range!");
    return (array[index]);
}

/*memberFunctions*/
template <typename T>
unsigned int Array<T>::size() const{
    return (size);
}

#endif