#pragma once

namespace shapes{
    class Triangle{
        private:
        float base;
        float height;

        public:

        Triangle(){
            base = 0.0;
            height = 0.0;
        }

        Triangle(float b, float h){
            base = b;
            height = h;
        }

        ~Triangle(){

        }

        void setBase(float b);
        void setHeight(float h);

        float getBase() const;
        float getHeight() const;
    };
}