#pragma once

namespace shapes{
    class Circle{
        private:
        float radius;

        public:
        Circle(){
            radius = 0.0;
        }

        Circle(float r){
            radius = r;
        }

        ~Circle(){

        }

        void setRadius(float r);
        
        float getRadius() const;
    };
}