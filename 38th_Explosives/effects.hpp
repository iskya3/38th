class CfgCloudlets
{
    class Default;

    // Fireball Core
    class inferno_Fireball : Default
    {
        interval = 0.001;
        lifeTime = 0.6;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        size[] = {25,100,150};
        color[] = {{1.2,1.0,0.8,1}, {1.0,0.6,0.2,0.7}, {0.4,0.1,0.05,0}};
        moveVelocity[] = {0,25,10};
        rubbing = 0.05;
    };

    // Dust Ring for ground shockwave
    class inferno_Shockwave : Default
    {
        interval = 0.01;
        lifeTime = 3;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        size[] = {25,100,200};
        moveVelocity[] = {0,0,0};
        color[] = {{0.6,0.6,0.6,0.5},{0.3,0.3,0.3,0.3},{0.1,0.1,0.1,0}};
        rubbing = 0.01;
    };

    // Rising smoke column
    class inferno_Smoke : Default
    {
        interval = 0.02;
        lifeTime = 18;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        moveVelocity[] = {0,3,0};
        size[] = {35,120,200};
        color[] = {{0.15,0.15,0.15,0.7},{0.1,0.1,0.1,0.5},{0.05,0.05,0.05,0}};
        rubbing = 0.05;
    };

    // Debris particles
    class inferno_Debris : Default
    {
        interval = 0.01;
        lifeTime = 2.5;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        size[] = {1,5,10};
        moveVelocity[] = {0,5,10};
        color[] = {{0.4,0.3,0.2,1},{0.3,0.3,0.3,0.8},{0.1,0.1,0.1,0}};
        weight = 2;
        volume = 1;
    };

    // Water splash
    class inferno_Water_Splash : Default
    {
        interval = 0.01;
        lifeTime = 3;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        size[] = {10,50,80};
        color[] = {{0.5,0.6,0.7,0.7}, {0.3,0.4,0.5,0.5}, {0.1,0.2,0.3,0}};
        moveVelocity[] = {0,3,0};
        rubbing = 0.01;
    };
};

class CfgEffects
{
    class inferno_HE_Explosion
    {
        class Fireball
        {
            simulation = "particles";
            type = "inferno_Fireball";
            position[] = {0,0,0};
            lifeTime = 0.6;
        };
        class Shockwave
        {
            simulation = "particles";
            type = "inferno_Shockwave";
            position[] = {0,0,0};
            lifeTime = 3;
        };
        class Smoke
        {
            simulation = "particles";
            type = "inferno_Smoke";
            position[] = {0,0,0};
            lifeTime = 18;
        };
        class Debris
        {
            simulation = "particles";
            type = "inferno_Debris";
            position[] = {0,0,0};
            lifeTime = 2.5;
        };
        class WaterSplash
        {
            simulation = "particles";
            type = "inferno_Water_Splash";
            position[] = {0,0,0};
            lifeTime = 3;
        };
    };
};

