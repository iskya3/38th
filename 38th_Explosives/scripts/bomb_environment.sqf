// _bomb = the bomb object
_surface = surfaceType position _bomb;

switch (_surface) do
{
    case "grass":
    case "dirt":
    case "sand":
    {
        _dustEffect = "#particlesource" createVehicleLocal position _bomb;
        _dustEffect setParticleType "inferno_Shockwave";
    };
    case "concrete":
    case "asphalt":
    {
        _dustEffect = "#particlesource" createVehicleLocal position _bomb;
        _dustEffect setParticleType "inferno_Smoke";
    };
    case "water":
    {
        _splashEffect = "#particlesource" createVehicleLocal position _bomb;
        _splashEffect setParticleType "inferno_Water_Splash";
    };
    default
    {
        _dustEffect = "#particlesource" createVehicleLocal position _bomb;
        _dustEffect setParticleType "inferno_Shockwave";
    };
};
