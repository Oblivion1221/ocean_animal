#pragma once

#include <iostream>
#include <string>

class WaterAnimal
{
public:
    WaterAnimal(const std::string &nickname, const std::string &name) 
        : animal_nickname(nickname), who_i_am(name) 
    {
        std::cout << "working constructor\n";
    }

    virtual ~WaterAnimal() 
    {
        std::cout << "working destructor\n";
    }

    virtual std::string live_in() const = 0;
    virtual std::string eating() const  = 0;
    virtual std::string color_in_the_coloration() const  = 0;
    virtual std::string length() const  = 0;
    
    std::string get_nickname() const {return animal_nickname;}
    std::string get_name() const {return who_i_am;}

private:
    std::string animal_nickname;
    std::string who_i_am;
};

class Clownfish : public WaterAnimal 
{
public:
    Clownfish(const std::string &nickname, const std::string &name) 
        :WaterAnimal{nickname, name} 
    {
        std::cout << "Clown constructor\n";
    }

    virtual ~Clownfish() 
    {
        std::cout << "Clown destructor\n";
    }

    virtual std::string live_in() const override {return "I live in sea anemons";}
    virtual std::string eating() const override {return "I am omnivorous";};
    virtual std::string color_in_the_coloration() const override {return "I have orange, white, and black colors";};
    virtual std::string length() const override {return "I am between 6 and 18 centimeters long";}
};

class Great_White_Shark : public WaterAnimal
{
public:
    Great_White_Shark(const std::string &nickname, const std::string &name) 
        :WaterAnimal{nickname, name} 
    {
        std::cout << "Great_White_Shark constructor\n";
    }

    virtual ~Great_White_Shark() 
    {
        std::cout << "Great_White_Shark destructor\n";
    }

    virtual std::string live_in() const override {return "I live in all the oceans except the Arctic Ocean";}
    virtual std::string eating() const override {return "I am carnivorous";};
    virtual std::string color_in_the_coloration() const override {return "I have gray and white colors";};
    virtual std::string length() const override {return "I am between 3,4 and 4,8 meters long, but my record is 6 meters";}
};

class Blue_whale : public WaterAnimal
{
public:
    Blue_whale(const std::string &nickname, const std::string &name) 
        :WaterAnimal{nickname, name} 
    {
        std::cout << "Blue_whale constructor\n";
    }

    ~Blue_whale() 
    {
        std::cout << "Blue_whale destructor\n";
    }

    virtual std::string live_in() const override{return "I am a nomad";}
    virtual std::string eating() const override{return "I eat krill";};
    virtual std::string color_in_the_coloration() const override{return "I have gray-blue color";};
    virtual std::string length() const override{return "I am between 27 meters long, but my record is 33 meters";}
};

void encyclopedia(const WaterAnimal &animal);