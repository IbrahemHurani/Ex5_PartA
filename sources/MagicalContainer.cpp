
#include "MagicalContainer.hpp"

using namespace std;
using namespace ariel;

void MagicalContainer::addElement(int element)
{
    elements.push_back(element);
}

size_t MagicalContainer::size()
{
    return elements.size();
}

void MagicalContainer::removeElement(int element)
{
}

std::vector<int> &MagicalContainer::getVector()
{
    return this->elements;
}

/// Ascending Iterator implement
bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const
{
    return &container == &(other.container) && this->index == other.index;
}

bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const
{
    return !(*this == other);
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const MagicalContainer::AscendingIterator &other)
{
    if (this != &other)
    {
        this->index = other.index;
    }
    return *this;
}

bool MagicalContainer::AscendingIterator::operator<(const MagicalContainer::AscendingIterator &other) const
{
    return this->index < other.index;
}

bool MagicalContainer::AscendingIterator::operator>(const MagicalContainer::AscendingIterator &other) const
{

    return this->index > other.index;
}

int MagicalContainer::AscendingIterator::operator*() const
{
    return 0;
}

MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++()
{
    ++index;
    return *this;
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::begin()
{
    return *this;
}

MagicalContainer::AscendingIterator MagicalContainer::AscendingIterator::end()
{
    return *this;
}

MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &Magical) : container(Magical), index(0)
{
}

MagicalContainer &MagicalContainer::AscendingIterator::getVectorA()
{
    return container;
}

/// SideCross Iterator implement
MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &Magical) : container(Magical)
{
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::begin()
{
    return *this;
}

MagicalContainer::SideCrossIterator MagicalContainer::SideCrossIterator::end()
{
    return *this;
}

MagicalContainer::SideCrossIterator &
MagicalContainer::SideCrossIterator::operator=(const MagicalContainer::SideCrossIterator &other)
{
    return *this;
}

int MagicalContainer::SideCrossIterator::operator*() const
{
    return 0;
}

MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++()
{
    return *this;
}

bool MagicalContainer::SideCrossIterator::operator==(const MagicalContainer::SideCrossIterator &other) const
{
    return false;
}
bool MagicalContainer::SideCrossIterator::operator!=(const MagicalContainer::SideCrossIterator &other) const
{
    return false;
}

bool MagicalContainer::SideCrossIterator::operator<(const MagicalContainer::SideCrossIterator &other) const
{
    return false;
}

bool MagicalContainer::SideCrossIterator::operator>(const MagicalContainer::SideCrossIterator &other) const
{
    return false;
}

MagicalContainer &MagicalContainer::SideCrossIterator::getVecotrS() const
{
    return container;
}

// Prime Iterator implement
MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &cont) : container(cont)
{
}

bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const
{
    return false;
}

bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const
{
    return false;
}

MagicalContainer::PrimeIterator &
MagicalContainer::PrimeIterator::operator=(const MagicalContainer::PrimeIterator &other)
{

    return *this;
}

bool MagicalContainer::PrimeIterator::operator<(const MagicalContainer::PrimeIterator &other) const
{
    return false;
}

bool MagicalContainer::PrimeIterator::operator>(const MagicalContainer::PrimeIterator &other) const
{

    return false;
}

int MagicalContainer::PrimeIterator::operator*() const
{
    return 0;
}

MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++()
{
    return *this;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::begin()
{

    return *this;
}

MagicalContainer::PrimeIterator MagicalContainer::PrimeIterator::end()
{
    
    return *this;
}

MagicalContainer &MagicalContainer::PrimeIterator::getVectorP() const
{
    return container;
}
