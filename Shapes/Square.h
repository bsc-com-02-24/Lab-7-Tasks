#pragma once

namespace shapes{
    class Square{
        private:
        float sideLength;

        public:
        Square(){
            sideLength = 0.0;
        }

        Square(float s){
            sideLength = s;
        }

        void setSideLength(float s);
        float getSideLength() const;


        ~Square(){

        }
    };
}