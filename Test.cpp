#include "sources/MagicalContainer.hpp"
#include "doctest.h"
using namespace std;
using namespace ariel;

TEST_CASE("Test Class MagicalContainer")
{
    MagicalContainer container;

    SUBCASE("Adding elements")
    {
        container.addElement(7);
        container.addElement(3);
        container.addElement(4);
        container.addElement(2);
        container.addElement(1);
        container.addElement(3);
        CHECK(container.size() == 6);
    }
    SUBCASE("Remove Elements")
    {
        CHECK_NOTHROW(container.removeElement(2));
        CHECK_NOTHROW(container.removeElement(3));
        CHECK_NOTHROW(container.removeElement(7));
        CHECK_NOTHROW(container.removeElement(1));
    }
    SUBCASE("empty Elements")
    {
        MagicalContainer empty;
        CHECK_EQ(empty.size(), 0);
    }
}
TEST_CASE("Test Class AscendingIterator")
{
    MagicalContainer cont1;
    MagicalContainer cont2;
    for (int i = 0; i < 20; i++)
    {
        cont1.addElement(i * 5);
        cont2.addElement(i * 2);
    }
    MagicalContainer::AscendingIterator it1(cont1);
    MagicalContainer::AscendingIterator it2(cont2);
    CHECK(it1.getVectorA().size() == 20);
    CHECK(it2.getVectorA().size() == 20);

    SUBCASE("iterator")
    {
        MagicalContainer container;
        MagicalContainer empty;
        container.addElement(7);
        container.addElement(3);
        container.addElement(4);
        container.addElement(2);
        container.addElement(1);
        container.addElement(3);
        MagicalContainer::AscendingIterator it(container);
        MagicalContainer::AscendingIterator it2(empty);
        CHECK_NOTHROW(it.begin());
        CHECK_NOTHROW(it.end());
        CHECK_NOTHROW(it.operator!=(it2));
        CHECK_NOTHROW(it.operator<(it2));
        CHECK_NOTHROW(it.operator>(it2));
        CHECK_NOTHROW(it.operator==(it2));
    }
    SUBCASE("Iterator empty")
    {
        MagicalContainer emptyContainer;
        MagicalContainer::AscendingIterator it(emptyContainer);
        CHECK(it == it.end());
        CHECK_NOTHROW(it.begin());
        CHECK_EQ(it.getVectorA().size(), 0);
    }
}
TEST_CASE("Test class PrimeIterator")
{
    MagicalContainer cont1;
    MagicalContainer cont2;
    for (int i = 0; i < 60; i++)
    {
        if (i % 2 == 0)
        {
            cont1.addElement(i * 5);
        }
        else
        {
            cont2.addElement(i * 2);
        }
    }
    MagicalContainer::PrimeIterator it1(cont1);
    MagicalContainer::PrimeIterator it2(cont2);
    CHECK(it1.getVectorP().size() == 30);
    CHECK(it2.getVectorP().size() == 30);

    SUBCASE("iterator")
    {
        MagicalContainer container;
        MagicalContainer empty;
        container.addElement(2);
        container.addElement(3);
        container.addElement(50);
        container.addElement(10);
        container.addElement(21);
        container.addElement(3);
        MagicalContainer::PrimeIterator it(container);
        MagicalContainer::PrimeIterator it2(empty);
        CHECK_NOTHROW(it.begin());
        CHECK_NOTHROW(it.end());
        CHECK_NOTHROW(it.operator!=(it2));
        CHECK_NOTHROW(it.operator<(it2));
        CHECK_NOTHROW(it.operator>(it2));
        CHECK_NOTHROW(it.operator==(it2));
    }
    SUBCASE("Iterator empty")
    {
        MagicalContainer emptyContainer;
        MagicalContainer::PrimeIterator it(emptyContainer);
        CHECK_NOTHROW(it.end());
        CHECK_NOTHROW(it.begin());
        CHECK_EQ(it.getVectorP().size(), 0);
    }
}
TEST_CASE("Test Class SideCrossIterator")
{
    MagicalContainer cont1;
    MagicalContainer cont2;
    for (int i = 0; i < 60; i++)
    {
        if (i % 2 == 0)
        {
            cont1.addElement(i * 5);
        }
        else
        {
            cont2.addElement(i * 2);
        }
    }
    MagicalContainer::PrimeIterator it1(cont1);
    MagicalContainer::PrimeIterator it2(cont2);
    CHECK(it1.getVectorP().size() == 30);
    CHECK(it2.getVectorP().size() == 30);

    SUBCASE("iterator")
    {
        MagicalContainer container;
        MagicalContainer empty;
        container.addElement(2);
        container.addElement(3);
        container.addElement(50);
        container.addElement(10);
        container.addElement(21);
        container.addElement(3);
        MagicalContainer::SideCrossIterator it(container);
        MagicalContainer::SideCrossIterator it2(empty);
        CHECK_NOTHROW(it.begin());
        CHECK_NOTHROW(it.end());
        CHECK_NOTHROW(it.operator!=(it2));
        CHECK_NOTHROW(it.operator<(it2));
        CHECK_NOTHROW(it.operator>(it2));
        CHECK_NOTHROW(it.operator==(it2));
    }
    SUBCASE("Iterator empty")
    {
        MagicalContainer emptyContainer;
        MagicalContainer::SideCrossIterator it(emptyContainer);
        CHECK_NOTHROW(it.end());
        CHECK_NOTHROW(it.begin());
        
    }
}