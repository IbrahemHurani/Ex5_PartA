#ifndef MAGICAL_CONTAINER_HPP
#define MAGICAL_CONTAINER_HPP
#include <iostream>
#include <vector>
#include <algorithm>
namespace ariel {
    class MagicalContainer {
    private:
        std::vector<int> elements;
    public:
        MagicalContainer() = default;
        ~MagicalContainer() = default;

        void addElement(int element);
        size_t size();
        void removeElement(int element);
        std::vector<int>& getVector();

       
        MagicalContainer(const MagicalContainer& other) = delete;
        MagicalContainer& operator=(const MagicalContainer& other) = delete;
        MagicalContainer(MagicalContainer&& other) = delete;
        MagicalContainer& operator=(MagicalContainer&& other) = delete;

        
        class AscendingIterator {
        private:
            MagicalContainer& container;
            int index;

        public:
            AscendingIterator(MagicalContainer&);
            AscendingIterator(AscendingIterator& other) : container(other.container) , index(other.index){}
            ~AscendingIterator() = default;

            AscendingIterator begin();
            AscendingIterator end();

            AscendingIterator& operator=(const AscendingIterator& other);
            int operator*() const;
            AscendingIterator& operator++();
            MagicalContainer &getVectorA();

            bool operator==(const AscendingIterator& other) const;
            bool operator!=(const AscendingIterator& other) const;
            bool operator<(const AscendingIterator& other) const;
            bool operator>(const AscendingIterator& other) const;

            AscendingIterator(AscendingIterator&& other) = delete;
            AscendingIterator& operator=(AscendingIterator&& other) = delete;

        };

        class SideCrossIterator {
        private:
            MagicalContainer& container;

        public:
            SideCrossIterator(MagicalContainer&);
            SideCrossIterator(SideCrossIterator& other) : container(other.container){}
            ~SideCrossIterator() = default;

            SideCrossIterator begin();
            SideCrossIterator end();

            SideCrossIterator& operator=(const SideCrossIterator& other);
            int operator*() const;
            SideCrossIterator& operator++();
            MagicalContainer &getVecotrS()const;

            bool operator==(const SideCrossIterator& other) const;
            bool operator!=(const SideCrossIterator& other) const;
            bool operator<(const SideCrossIterator& other) const;
            bool operator>(const SideCrossIterator& other) const;

        
            SideCrossIterator(SideCrossIterator&& other) = delete;
            SideCrossIterator& operator=(SideCrossIterator&& other) = delete;

        };

        class PrimeIterator {
        private:
            MagicalContainer& container;

        public:
            PrimeIterator(MagicalContainer& );
            PrimeIterator(PrimeIterator& other) : container(other.container){}
            ~PrimeIterator() = default;

            PrimeIterator begin();
            PrimeIterator end();

            PrimeIterator& operator=(const PrimeIterator& other);
            int operator*() const;
            PrimeIterator& operator++();

            MagicalContainer &getVectorP() const;

            bool operator==(const PrimeIterator& other) const;
            bool operator!=(const PrimeIterator& other) const;
            bool operator<(const PrimeIterator& other) const;
            bool operator>(const PrimeIterator& other) const;

            
            PrimeIterator(PrimeIterator&& other) = delete;
            PrimeIterator& operator=(PrimeIterator&& other) = delete;
        };


    };

};








#endif 
