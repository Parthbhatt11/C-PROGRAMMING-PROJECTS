#include<stdio.h>


int main()
{   int n,choice;

    while(1){
    printf("\n \n");
    printf("-------------------- WELCOME TO PERIODIC TABLE -------------------- \n");
    printf("                         BY PARTH BHATT                             \n ");
    
    printf("1. GET AN ELEMENT INFO OF A PERIODIC TABLE\n");
    printf("2. EXIT\n");
    printf("ENTER YOUR CHOICE: ");        
    scanf("%d", &choice);
    
    printf("\n \n ");
    
    if (choice == 1){
    printf("ENTER THE ATOMIC NUMBER OF ELEMENT:- ");
    scanf("%d",&n);
    printf("\n \n");
    
    switch(n)
    {
        case 1:
            printf("Element: Hydrogen\n");
            printf("Symbol: H\n");
            printf("Atomic Weight: 1.008\n");
            printf("Category: Non-metal\n");
            printf("Founder: Henry Cavendish\n");
            printf("Fun Fact: It's the most abundant element in the universe.\n");
            break;
        case 2:
            printf("Element: Helium\n");
            printf("Symbol: He\n");
            printf("Atomic Weight: 4.0026\n");
            printf("Category: Noble Gas\n");
            printf("Founder: Pierre Janssen\n");
            printf("Fun Fact: Helium is so light it can escape Earth's gravity.\n");
            break;
        case 3:
            printf("Element: Lithium\n");
            printf("Symbol: Li\n");
            printf("Atomic Weight: 6.94\n");
            printf("Category: Alkali Metal\n");
            printf("Founder: Johann Arfvedson\n");
            printf("Fun Fact: Used in rechargeable batteries.\n");
            break;
        case 4:
            printf("Element: Beryllium\n");
            printf("Symbol: Be\n");
            printf("Atomic Weight: 9.0122\n");
            printf("Category: Alkaline Earth Metal\n");
            printf("Founder: Louis-Nicolas Vauquelin\n");
            printf("Fun Fact: Transparent to X-rays.\n");
            break;
        case 5:
            printf("Element: Boron\n");
            printf("Symbol: B\n");
            printf("Atomic Weight: 10.81\n");
            printf("Category: Metalloid\n");
            printf("Founder: Joseph Gay-Lussac & Louis Jacques Thénard\n");
            printf("Fun Fact: Essential for plant growth.\n");
            break;
        case 6:
            printf("Element: Carbon\n");
            printf("Symbol: C\n");
            printf("Atomic Weight: 12.011\n");
            printf("Category: Non-metal\n");
            printf("Founder: Known since ancient times\n");
            printf("Fun Fact: Basis of all known life.\n");
            break;
        case 7:
            printf("Element: Nitrogen\n");
            printf("Symbol: N\n");
            printf("Atomic Weight: 14.007\n");
            printf("Category: Non-metal\n");
            printf("Founder: Daniel Rutherford\n");
            printf("Fun Fact: Makes up 78%% of Earth’s atmosphere.\n");
            break;
        case 8:
            printf("Element: Oxygen\n");
            printf("Symbol: O\n");
            printf("Atomic Weight: 15.999\n");
            printf("Category: Non-metal\n");
            printf("Founder: Carl Wilhelm Scheele\n");
            printf("Fun Fact: Essential for respiration.\n");
            break;
        case 9:
            printf("Element: Fluorine\n");
            printf("Symbol: F\n");
            printf("Atomic Weight: 18.998\n");
            printf("Category: Halogen\n");
            printf("Founder: Henri Moissan\n");
            printf("Fun Fact: Most reactive element.\n");
            break;
        case 10:
            printf("Element: Neon\n");
            printf("Symbol: Ne\n");
            printf("Atomic Weight: 20.180\n");
            printf("Category: Noble Gas\n");
            printf("Founder: William Ramsay & Morris Travers\n");
            printf("Fun Fact: Used in neon signs.\n");
            break;
        case 11:
            printf("Element: Sodium\n");
            printf("Symbol: Na\n");
            printf("Atomic Weight: 22.990\n");
            printf("Category: Alkali Metal\n");
            printf("Founder: Humphry Davy\n");
            printf("Fun Fact: Reacts violently with water.\n");
            break;
        case 12:
            printf("Element: Magnesium\n");
            printf("Symbol: Mg\n");
            printf("Atomic Weight: 24.305\n");
            printf("Category: Alkaline Earth Metal\n");
            printf("Founder: Joseph Black\n");
            printf("Fun Fact: Burns with a bright white flame.\n");
            break;
        case 13:
            printf("Element: Aluminum\n");
            printf("Symbol: Al\n");
            printf("Atomic Weight: 26.982\n");
            printf("Category: Post-transition Metal\n");
            printf("Founder: Hans Christian Ørsted\n");
            printf("Fun Fact: Most abundant metal in Earth's crust.\n");
            break;
        case 14:
            printf("Element: Silicon\n");
            printf("Symbol: Si\n");
            printf("Atomic Weight: 28.085\n");
            printf("Category: Metalloid\n");
            printf("Founder: Jöns Jacob Berzelius\n");
            printf("Fun Fact: Used in computer chips.\n");
            break;
        case 15:
            printf("Element: Phosphorus\n");
            printf("Symbol: P\n");
            printf("Atomic Weight: 30.974\n");
            printf("Category: Non-metal\n");
            printf("Founder: Hennig Brand\n");
            printf("Fun Fact: Discovered from urine.\n");
            break;
        case 16:
            printf("Element: Sulfur\n");
            printf("Symbol: S\n");
            printf("Atomic Weight: 32.06\n");
            printf("Category: Non-metal\n");
            printf("Founder: Known since ancient times\n");
            printf("Fun Fact: Used in gunpowder.\n");
            break;
        case 17:
            printf("Element: Chlorine\n");
            printf("Symbol: Cl\n");
            printf("Atomic Weight: 35.45\n");
            printf("Category: Halogen\n");
            printf("Founder: Carl Wilhelm Scheele\n");
            printf("Fun Fact: Used in water purification.\n");
            break;
        case 18:
            printf("Element: Argon\n");
            printf("Symbol: Ar\n");
            printf("Atomic Weight: 39.948\n");
            printf("Category: Noble Gas\n");
            printf("Founder: Lord Rayleigh & William Ramsay\n");
            printf("Fun Fact: Most abundant noble gas in Earth’s atmosphere.\n");
            break;
        case 19:
            printf("Element: Potassium\n");
            printf("Symbol: K\n");
            printf("Atomic Weight: 39.098\n");
            printf("Category: Alkali Metal\n");
            printf("Founder: Humphry Davy\n");
            printf("Fun Fact: Essential nutrient for plants and humans.\n");
            break;
        case 20:
            printf("Element: Calcium\n");
            printf("Symbol: Ca\n");
            printf("Atomic Weight: 40.078\n");
            printf("Category: Alkaline Earth Metal\n");
            printf("Founder: Humphry Davy\n");
            printf("Fun Fact: Key component of bones and teeth.\n");
            break;
                    case 21:
            printf("Element: Scandium\n");
            printf("Symbol: Sc\n");
            printf("Atomic Weight: 44.955\n");
            printf("Category: Transition metal\n");
            printf("Founder: Lars Fredrik Nilson\n");
            printf("Fun Fact: Used in aerospace components.\n");
            break;
        case 22:
            printf("Element: Titanium\n");
            printf("Symbol: Ti\n");
            printf("Atomic Weight: 47.867\n");
            printf("Category: Transition metal\n");
            printf("Founder: William Gregor\n");
            printf("Fun Fact: As strong as steel but much lighter.\n");
            break;
        case 23:
            printf("Element: Vanadium\n");
            printf("Symbol: V\n");
            printf("Atomic Weight: 50.942\n");
            printf("Category: Transition metal\n");
            printf("Founder: Andrés Manuel del Río\n");
            printf("Fun Fact: Strengthens steel.\n");
            break;
        case 24:
            printf("Element: Chromium\n");
            printf("Symbol: Cr\n");
            printf("Atomic Weight: 51.996\n");
            printf("Category: Transition metal\n");
            printf("Founder: Louis Nicolas Vauquelin\n");
            printf("Fun Fact: Gives rubies their red color.\n");
            break;
        case 25:
            printf("Element: Manganese\n");
            printf("Symbol: Mn\n");
            printf("Atomic Weight: 54.938\n");
            printf("Category: Transition metal\n");
            printf("Founder: Johann Gahn\n");
            printf("Fun Fact: Essential for photosynthesis.\n");
            break;
        case 26:
            printf("Element: Iron\n");
            printf("Symbol: Fe\n");
            printf("Atomic Weight: 55.845\n");
            printf("Category: Transition metal\n");
            printf("Founder: Known since ancient times\n");
            printf("Fun Fact: Core element of Earth’s core.\n");
            break;
        case 27:
            printf("Element: Cobalt\n");
            printf("Symbol: Co\n");
            printf("Atomic Weight: 58.933\n");
            printf("Category: Transition metal\n");
            printf("Founder: Georg Brandt\n");
            printf("Fun Fact: Used in jet engines and magnets.\n");
            break;
        case 28:
            printf("Element: Nickel\n");
            printf("Symbol: Ni\n");
            printf("Atomic Weight: 58.693\n");
            printf("Category: Transition metal\n");
            printf("Founder: Axel Fredrik Cronstedt\n");
            printf("Fun Fact: Found in meteors.\n");
            break;
        case 29:
            printf("Element: Copper\n");
            printf("Symbol: Cu\n");
            printf("Atomic Weight: 63.546\n");
            printf("Category: Transition metal\n");
            printf("Founder: Known since ancient times\n");
            printf("Fun Fact: One of the first metals used by humans.\n");
            break;
        case 30:
            printf("Element: Zinc\n");
            printf("Symbol: Zn\n");
            printf("Atomic Weight: 65.38\n");
            printf("Category: Transition metal\n");
            printf("Founder: Andreas Sigismund Marggraf\n");
            printf("Fun Fact: Essential mineral for humans.\n");
            break;
        case 31:
            printf("Element: Gallium\n");
            printf("Symbol: Ga\n");
            printf("Atomic Weight: 69.723\n");
            printf("Category: Post-transition metal\n");
            printf("Founder: Paul-Émile Lecoq de Boisbaudran\n");
            printf("Fun Fact: Melts in your hand.\n");
            break;
        case 32:
            printf("Element: Germanium\n");
            printf("Symbol: Ge\n");
            printf("Atomic Weight: 72.63\n");
            printf("Category: Metalloid\n");
            printf("Founder: Clemens Winkler\n");
            printf("Fun Fact: Used in early transistors.\n");
            break;
        case 33:
            printf("Element: Arsenic\n");
            printf("Symbol: As\n");
            printf("Atomic Weight: 74.922\n");
            printf("Category: Metalloid\n");
            printf("Founder: Known since ancient times\n");
            printf("Fun Fact: Notorious poison.\n");
            break;
        case 34:
            printf("Element: Selenium\n");
            printf("Symbol: Se\n");
            printf("Atomic Weight: 78.971\n");
            printf("Category: Non-metal\n");
            printf("Founder: Jöns Jacob Berzelius\n");
            printf("Fun Fact: Used in photocopiers.\n");
            break;
        case 35:
            printf("Element: Bromine\n");
            printf("Symbol: Br\n");
            printf("Atomic Weight: 79.904\n");
            printf("Category: Halogen\n");
            printf("Founder: Antoine Balard\n");
            printf("Fun Fact: Only liquid non-metal at room temp.\n");
            break;
        case 36:
            printf("Element: Krypton\n");
            printf("Symbol: Kr\n");
            printf("Atomic Weight: 83.798\n");
            printf("Category: Noble gas\n");
            printf("Founder: William Ramsay & Morris Travers\n");
            printf("Fun Fact: Used in flash photography.\n");
            break;
        case 37:
            printf("Element: Rubidium\n");
            printf("Symbol: Rb\n");
            printf("Atomic Weight: 85.468\n");
            printf("Category: Alkali metal\n");
            printf("Founder: Robert Bunsen and Gustav Kirchhoff\n");
            printf("Fun Fact: Highly reactive metal.\n");
            break;
        case 38:
            printf("Element: Strontium\n");
            printf("Symbol: Sr\n");
            printf("Atomic Weight: 87.62\n");
            printf("Category: Alkaline earth metal\n");
            printf("Founder: Adair Crawford\n");
            printf("Fun Fact: Gives fireworks a red color.\n");
            break;
        case 39:
            printf("Element: Yttrium\n");
            printf("Symbol: Y\n");
            printf("Atomic Weight: 88.906\n");
            printf("Category: Transition metal\n");
            printf("Founder: Johan Gadolin\n");
            printf("Fun Fact: Used in LEDs and superconductors.\n");
            break;
        case 40:
            printf("Element: Zirconium\n");
            printf("Symbol: Zr\n");
            printf("Atomic Weight: 91.224\n");
            printf("Category: Transition metal\n");
            printf("Founder: Martin Heinrich Klaproth\n");
            printf("Fun Fact: Used in nuclear reactors.\n");
            break;
          case 41:
            printf("Element: Niobium\n");
            printf("Symbol: Nb\n");
            printf("Atomic Weight: 92.906\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Charles Hatchett\n");
            printf("Fun Fact: Used in superconducting magnets!\n");
            break;

        case 42:
            printf("Element: Molybdenum\n");
            printf("Symbol: Mo\n");
            printf("Atomic Weight: 95.95\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Carl Wilhelm Scheele\n");
            printf("Fun Fact: Strengthens steel at high temperatures.\n");
            break;

        case 43:
            printf("Element: Technetium\n");
            printf("Symbol: Tc\n");
            printf("Atomic Weight: [98]\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Emilio Segrè & Carlo Perrier\n");
            printf("Fun Fact: First artificially produced element.\n");
            break;

        case 44:
            printf("Element: Ruthenium\n");
            printf("Symbol: Ru\n");
            printf("Atomic Weight: 101.07\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Karl Ernst Claus\n");
            printf("Fun Fact: Used in wear-resistant electrical contacts.\n");
            break;

        case 45:
            printf("Element: Rhodium\n");
            printf("Symbol: Rh\n");
            printf("Atomic Weight: 102.91\n");
            printf("Category: Transition Metal\n");
            printf("Founder: William Hyde Wollaston\n");
            printf("Fun Fact: Most reflective metal, used in jewelry.\n");
            break;

        case 46:
            printf("Element: Palladium\n");
            printf("Symbol: Pd\n");
            printf("Atomic Weight: 106.42\n");
            printf("Category: Transition Metal\n");
            printf("Founder: William Hyde Wollaston\n");
            printf("Fun Fact: Used in catalytic converters in cars.\n");
            break;

        case 47:
            printf("Element: Silver\n");
            printf("Symbol: Ag\n");
            printf("Atomic Weight: 107.87\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Ancient Known\n");
            printf("Fun Fact: Best electrical conductor of all metals.\n");
            break;

        case 48:
            printf("Element: Cadmium\n");
            printf("Symbol: Cd\n");
            printf("Atomic Weight: 112.41\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Friedrich Stromeyer\n");
            printf("Fun Fact: Used in rechargeable NiCd batteries.\n");
            break;

        case 49:
            printf("Element: Indium\n");
            printf("Symbol: In\n");
            printf("Atomic Weight: 114.82\n");
            printf("Category: Post-transition Metal\n");
            printf("Founder: Ferdinand Reich & Hieronymous Richter\n");
            printf("Fun Fact: Screeches when bent – “tin cry”.\n");
            break;

        case 50:
            printf("Element: Tin\n");
            printf("Symbol: Sn\n");
            printf("Atomic Weight: 118.71\n");
            printf("Category: Post-transition Metal\n");
            printf("Founder: Ancient Known\n");
            printf("Fun Fact: Used in bronze alloys with copper.\n");
            break;

        case 51:
            printf("Element: Antimony\n");
            printf("Symbol: Sb\n");
            printf("Atomic Weight: 121.76\n");
            printf("Category: Metalloid\n");
            printf("Founder: Ancient Known\n");
            printf("Fun Fact: Symbol comes from Latin 'Stibium'.\n");
            break;

        case 52:
            printf("Element: Tellurium\n");
            printf("Symbol: Te\n");
            printf("Atomic Weight: 127.60\n");
            printf("Category: Metalloid\n");
            printf("Founder: Franz-Joseph Müller von Reichenstein\n");
            printf("Fun Fact: Rare in Earth's crust but essential in semiconductors.\n");
            break;

        case 53:
            printf("Element: Iodine\n");
            printf("Symbol: I\n");
            printf("Atomic Weight: 126.90\n");
            printf("Category: Halogen\n");
            printf("Founder: Bernard Courtois\n");
            printf("Fun Fact: Essential nutrient for thyroid health.\n");
            break;

        case 54:
            printf("Element: Xenon\n");
            printf("Symbol: Xe\n");
            printf("Atomic Weight: 131.29\n");
            printf("Category: Noble Gas\n");
            printf("Founder: William Ramsay & Morris Travers\n");
            printf("Fun Fact: Used in flash lamps and ion propulsion engines.\n");
            break;

        case 55:
            printf("Element: Cesium\n");
            printf("Symbol: Cs\n");
            printf("Atomic Weight: 132.91\n");
            printf("Category: Alkali Metal\n");
            printf("Founder: Robert Bunsen & Gustav Kirchhoff\n");
            printf("Fun Fact: Used in atomic clocks for precise timekeeping.\n");
            break;

        case 56:
            printf("Element: Barium\n");
            printf("Symbol: Ba\n");
            printf("Atomic Weight: 137.33\n");
            printf("Category: Alkaline Earth Metal\n");
            printf("Founder: Carl Wilhelm Scheele\n");
            printf("Fun Fact: Used in medical imaging (barium meals).\n");
            break;

        case 57:
            printf("Element: Lanthanum\n");
            printf("Symbol: La\n");
            printf("Atomic Weight: 138.91\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Carl Gustaf Mosander\n");
            printf("Fun Fact: The first element in the lanthanide series.\n");
            break;

        case 58:
            printf("Element: Cerium\n");
            printf("Symbol: Ce\n");
            printf("Atomic Weight: 140.12\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Jöns Jakob Berzelius & Wilhelm Hisinger\n");
            printf("Fun Fact: Named after the dwarf planet Ceres.\n");
            break;

        case 59:
            printf("Element: Praseodymium\n");
            printf("Symbol: Pr\n");
            printf("Atomic Weight: 140.91\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Carl Auer von Welsbach\n");
            printf("Fun Fact: Used in studio lighting and glass coloring.\n");
            break;

        case 60:
            printf("Element: Neodymium\n");
            printf("Symbol: Nd\n");
            printf("Atomic Weight: 144.24\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Carl Auer von Welsbach\n");
            printf("Fun Fact: Strong magnets used in headphones and motors.\n");
            break;
                    
        case 61:
            printf("Element: Promethium\n");
            printf("Symbol: Pm\n");
            printf("Atomic Weight: [145]\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Jacob A. Marinsky et al.\n");
            printf("Fun Fact: It’s radioactive and used in luminous paint.\n");
            break;

        case 62:
            printf("Element: Samarium\n");
            printf("Symbol: Sm\n");
            printf("Atomic Weight: 150.36\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Lecoq de Boisbaudran\n");
            printf("Fun Fact: Used in powerful magnets and cancer treatment.\n");
            break;

        case 63:
            printf("Element: Europium\n");
            printf("Symbol: Eu\n");
            printf("Atomic Weight: 151.96\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Eugène-Anatole Demarçay\n");
            printf("Fun Fact: Glows red under UV light; used in Euro banknotes.\n");
            break;

        case 64:
            printf("Element: Gadolinium\n");
            printf("Symbol: Gd\n");
            printf("Atomic Weight: 157.25\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Jean Charles Galissard de Marignac\n");
            printf("Fun Fact: Used in MRI contrast agents.\n");
            break;

        case 65:
            printf("Element: Terbium\n");
            printf("Symbol: Tb\n");
            printf("Atomic Weight: 158.93\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Carl Gustaf Mosander\n");
            printf("Fun Fact: Emits green phosphorescence in TVs.\n");
            break;

        case 66:
            printf("Element: Dysprosium\n");
            printf("Symbol: Dy\n");
            printf("Atomic Weight: 162.50\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Paul Émile Lecoq de Boisbaudran\n");
            printf("Fun Fact: High resistance to demagnetization.\n");
            break;

        case 67:
            printf("Element: Holmium\n");
            printf("Symbol: Ho\n");
            printf("Atomic Weight: 164.93\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Per Theodor Cleve\n");
            printf("Fun Fact: Strongest magnetic moment of any element.\n");
            break;

        case 68:
            printf("Element: Erbium\n");
            printf("Symbol: Er\n");
            printf("Atomic Weight: 167.26\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Carl Gustaf Mosander\n");
            printf("Fun Fact: Used in fiber-optic communication.\n");
            break;

        case 69:
            printf("Element: Thulium\n");
            printf("Symbol: Tm\n");
            printf("Atomic Weight: 168.93\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Per Theodor Cleve\n");
            printf("Fun Fact: Rare but used in X-ray machines.\n");
            break;

        case 70:
            printf("Element: Ytterbium\n");
            printf("Symbol: Yb\n");
            printf("Atomic Weight: 173.05\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Jean Charles Galissard de Marignac\n");
            printf("Fun Fact: Can monitor earthquakes via laser.\n");
            break;

        case 71:
            printf("Element: Lutetium\n");
            printf("Symbol: Lu\n");
            printf("Atomic Weight: 174.97\n");
            printf("Category: Lanthanide\n");
            printf("Founder: Georges Urbain\n");
            printf("Fun Fact: Used in PET scan detectors.\n");
            break;

        case 72:
            printf("Element: Hafnium\n");
            printf("Symbol: Hf\n");
            printf("Atomic Weight: 178.49\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Dirk Coster & George de Hevesy\n");
            printf("Fun Fact: Used in nuclear submarines.\n");
            break;

        case 73:
            printf("Element: Tantalum\n");
            printf("Symbol: Ta\n");
            printf("Atomic Weight: 180.95\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Anders Gustaf Ekeberg\n");
            printf("Fun Fact: Resists corrosion; used in implants.\n");
            break;

        case 74:
            printf("Element: Tungsten\n");
            printf("Symbol: W\n");
            printf("Atomic Weight: 183.84\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Juan José and Fausto Elhuyar\n");
            printf("Fun Fact: Highest melting point of all elements.\n");
            break;

        case 75:
            printf("Element: Rhenium\n");
            printf("Symbol: Re\n");
            printf("Atomic Weight: 186.21\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Masataka Ogawa (unconfirmed), Ida Tacke et al.\n");
            printf("Fun Fact: Used in superalloys for jet engines.\n");
            break;

        case 76:
            printf("Element: Osmium\n");
            printf("Symbol: Os\n");
            printf("Atomic Weight: 190.23\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Smithson Tennant\n");
            printf("Fun Fact: Densest naturally occurring element.\n");
            break;

        case 77:
            printf("Element: Iridium\n");
            printf("Symbol: Ir\n");
            printf("Atomic Weight: 192.22\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Smithson Tennant\n");
            printf("Fun Fact: Very corrosion-resistant, used in spark plugs.\n");
            break;

        case 78:
            printf("Element: Platinum\n");
            printf("Symbol: Pt\n");
            printf("Atomic Weight: 195.08\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Antonio de Ulloa (Europe)\n");
            printf("Fun Fact: Precious metal used in jewelry and catalysts.\n");
            break;

        case 79:
            printf("Element: Gold\n");
            printf("Symbol: Au\n");
            printf("Atomic Weight: 196.97\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Ancient Known\n");
            printf("Fun Fact: Conducts electricity and doesn't tarnish.\n");
            break;

        case 80:
            printf("Element: Mercury\n");
            printf("Symbol: Hg\n");
            printf("Atomic Weight: 200.59\n");
            printf("Category: Transition Metal\n");
            printf("Founder: Ancient Known\n");
            printf("Fun Fact: Only liquid metal at room temperature.\n");
            break;
         case 81:
            printf("Element: Thallium\n");
            printf("Symbol: Tl\n");
            printf("Atomic Weight: 204.38\n");
            printf("Category: Post-transition metal\n");
            printf("Founder: William Crookes\n");
            printf("Fun Fact: Used in rat poisons before being banned in many countries.\n");
            break;

        case 82:
            printf("Element: Lead\n");
            printf("Symbol: Pb\n");
            printf("Atomic Weight: 207.2\n");
            printf("Category: Post-transition metal\n");
            printf("Founder: Known since ancient times\n");
            printf("Fun Fact: Once used in pipes and paints, now known for toxicity.\n");
            break;

        case 83:
            printf("Element: Bismuth\n");
            printf("Symbol: Bi\n");
            printf("Atomic Weight: 208.98\n");
            printf("Category: Post-transition metal\n");
            printf("Founder: Known since ancient times\n");
            printf("Fun Fact: Has colorful iridescent crystals.\n");
            break;

        case 84:
            printf("Element: Polonium\n");
            printf("Symbol: Po\n");
            printf("Atomic Weight: 209\n");
            printf("Category: Metalloid\n");
            printf("Founder: Marie Curie\n");
            printf("Fun Fact: Extremely radioactive and rare.\n");
            break;

        case 85:
            printf("Element: Astatine\n");
            printf("Symbol: At\n");
            printf("Atomic Weight: 210\n");
            printf("Category: Halogen\n");
            printf("Founder: Dale R. Corson, Kenneth Ross MacKenzie, Emilio Segrè\n");
            printf("Fun Fact: Rarest naturally occurring element on Earth.\n");
            break;

        case 86:
            printf("Element: Radon\n");
            printf("Symbol: Rn\n");
            printf("Atomic Weight: 222\n");
            printf("Category: Noble gas\n");
            printf("Founder: Friedrich Ernst Dorn\n");
            printf("Fun Fact: Radioactive gas that can accumulate in basements.\n");
            break;

        case 87:
            printf("Element: Francium\n");
            printf("Symbol: Fr\n");
            printf("Atomic Weight: 223\n");
            printf("Category: Alkali metal\n");
            printf("Founder: Marguerite Perey\n");
            printf("Fun Fact: Most unstable of the first 101 elements.\n");
            break;

        case 88:
            printf("Element: Radium\n");
            printf("Symbol: Ra\n");
            printf("Atomic Weight: 226\n");
            printf("Category: Alkaline earth metal\n");
            printf("Founder: Marie Curie\n");
            printf("Fun Fact: Once used in glow-in-the-dark paints.\n");
            break;

        case 89:
            printf("Element: Actinium\n");
            printf("Symbol: Ac\n");
            printf("Atomic Weight: 227\n");
            printf("Category: Actinide\n");
            printf("Founder: Friedrich Oskar Giesel\n");
            printf("Fun Fact: Glows in the dark due to radioactivity.\n");
            break;

        case 90:
            printf("Element: Thorium\n");
            printf("Symbol: Th\n");
            printf("Atomic Weight: 232.04\n");
            printf("Category: Actinide\n");
            printf("Founder: Jöns Jakob Berzelius\n");
            printf("Fun Fact: Named after the Norse god Thor.\n");
            break;

        case 91:
            printf("Element: Protactinium\n");
            printf("Symbol: Pa\n");
            printf("Atomic Weight: 231.04\n");
            printf("Category: Actinide\n");
            printf("Founder: Otto Hahn and Lise Meitner\n");
            printf("Fun Fact: Extremely rare and radioactive.\n");
            break;

        case 92:
            printf("Element: Uranium\n");
            printf("Symbol: U\n");
            printf("Atomic Weight: 238.03\n");
            printf("Category: Actinide\n");
            printf("Founder: Martin Heinrich Klaproth\n");
            printf("Fun Fact: Fuel for nuclear reactors and weapons.\n");
            break;

        case 93:
            printf("Element: Neptunium\n");
            printf("Symbol: Np\n");
            printf("Atomic Weight: 237\n");
            printf("Category: Actinide\n");
            printf("Founder: Edwin McMillan and Philip H. Abelson\n");
            printf("Fun Fact: Named after the planet Neptune.\n");
            break;

        case 94:
            printf("Element: Plutonium\n");
            printf("Symbol: Pu\n");
            printf("Atomic Weight: 244\n");
            printf("Category: Actinide\n");
            printf("Founder: Glenn T. Seaborg\n");
            printf("Fun Fact: Used in nuclear weapons and reactors.\n");
            break;

        case 95:
            printf("Element: Americium\n");
            printf("Symbol: Am\n");
            printf("Atomic Weight: 243\n");
            printf("Category: Actinide\n");
            printf("Founder: Glenn T. Seaborg\n");
            printf("Fun Fact: Found in smoke detectors.\n");
            break;

        case 96:
            printf("Element: Curium\n");
            printf("Symbol: Cm\n");
            printf("Atomic Weight: 247\n");
            printf("Category: Actinide\n");
            printf("Founder: Glenn T. Seaborg\n");
            printf("Fun Fact: Named after Marie and Pierre Curie.\n");
            break;

        case 97:
            printf("Element: Berkelium\n");
            printf("Symbol: Bk\n");
            printf("Atomic Weight: 247\n");
            printf("Category: Actinide\n");
            printf("Founder: Glenn T. Seaborg\n");
            printf("Fun Fact: Named after Berkeley, California.\n");
            break;

        case 98:
            printf("Element: Californium\n");
            printf("Symbol: Cf\n");
            printf("Atomic Weight: 251\n");
            printf("Category: Actinide\n");
            printf("Founder: Glenn T. Seaborg\n");
            printf("Fun Fact: Used to start nuclear reactors.\n");
            break;

        case 99:
            printf("Element: Einsteinium\n");
            printf("Symbol: Es\n");
            printf("Atomic Weight: 252\n");
            printf("Category: Actinide\n");
            printf("Founder: Albert Ghiorso et al.\n");
            printf("Fun Fact: Named in honor of Albert Einstein.\n");
            break;

        case 100:
            printf("Element: Fermium\n");
            printf("Symbol: Fm\n");
            printf("Atomic Weight: 257\n");
            printf("Category: Actinide\n");
            printf("Founder: Albert Ghiorso\n");
            printf("Fun Fact: Discovered in the debris of the first hydrogen bomb.\n");
            break;

        case 101:
            printf("Element: Mendelevium\n");
            printf("Symbol: Md\n");
            printf("Atomic Weight: 258\n");
            printf("Category: Actinide\n");
            printf("Founder: Glenn T. Seaborg\n");
            printf("Fun Fact: Named in honor of Dmitri Mendeleev.\n");
            break;

        case 102:
            printf("Element: Nobelium\n");
            printf("Symbol: No\n");
            printf("Atomic Weight: 259\n");
            printf("Category: Actinide\n");
            printf("Founder: Joint team of scientists\n");
            printf("Fun Fact: Named after Alfred Nobel.\n");
            break;

        case 103:
            printf("Element: Lawrencium\n");
            printf("Symbol: Lr\n");
            printf("Atomic Weight: 262\n");
            printf("Category: Actinide\n");
            printf("Founder: Albert Ghiorso\n");
            printf("Fun Fact: Named after Ernest Lawrence.\n");
            break;

        case 104:
            printf("Element: Rutherfordium\n");
            printf("Symbol: Rf\n");
            printf("Atomic Weight: 267\n");
            printf("Category: Transition metal\n");
            printf("Founder: Joint Institute for Nuclear Research\n");
            printf("Fun Fact: Named after Ernest Rutherford.\n");
            break;

        case 105:
            printf("Element: Dubnium\n");
            printf("Symbol: Db\n");
            printf("Atomic Weight: 270\n");
            printf("Category: Transition metal\n");
            printf("Founder: Joint Institute for Nuclear Research\n");
            printf("Fun Fact: Named after Dubna, Russia.\n");
            break;

        case 106:
            printf("Element: Seaborgium\n");
            printf("Symbol: Sg\n");
            printf("Atomic Weight: 271\n");
            printf("Category: Transition metal\n");
            printf("Founder: Glenn T. Seaborg\n");
            printf("Fun Fact: Named after Glenn Seaborg while he was still alive.\n");
            break;

        case 107:
            printf("Element: Bohrium\n");
            printf("Symbol: Bh\n");
            printf("Atomic Weight: 270\n");
            printf("Category: Transition metal\n");
            printf("Founder: GSI Helmholtz Centre\n");
            printf("Fun Fact: Named after Niels Bohr.\n");
            break;

        case 108:
            printf("Element: Hassium\n");
            printf("Symbol: Hs\n");
            printf("Atomic Weight: 277\n");
            printf("Category: Transition metal\n");
            printf("Founder: GSI Helmholtz Centre\n");
            printf("Fun Fact: Named after the German state of Hesse.\n");
            break;

        case 109:
            printf("Element: Meitnerium\n");
            printf("Symbol: Mt\n");
            printf("Atomic Weight: 278\n");
            printf("Category: Transition metal\n");
            printf("Founder: GSI Helmholtz Centre\n");
            printf("Fun Fact: Named after physicist Lise Meitner.\n");
            break;

        case 110:
            printf("Element: Darmstadtium\n");
            printf("Symbol: Ds\n");
            printf("Atomic Weight: 281\n");
            printf("Category: Transition metal\n");
            printf("Founder: GSI Helmholtz Centre\n");
            printf("Fun Fact: Named after Darmstadt, Germany.\n");
            break;

        case 111:
            printf("Element: Roentgenium\n");
            printf("Symbol: Rg\n");
            printf("Atomic Weight: 282\n");
            printf("Category: Transition metal\n");
            printf("Founder: GSI Helmholtz Centre\n");
            printf("Fun Fact: Named after Wilhelm Röntgen, discoverer of X-rays.\n");
            break;

        case 112:
            printf("Element: Copernicium\n");
            printf("Symbol: Cn\n");
            printf("Atomic Weight: 285\n");
            printf("Category: Transition metal\n");
            printf("Founder: GSI Helmholtz Centre\n");
            printf("Fun Fact: Named after astronomer Nicolaus Copernicus.\n");
            break;

        case 113:
            printf("Element: Nihonium\n");
            printf("Symbol: Nh\n");
            printf("Atomic Weight: 286\n");
            printf("Category: Unknown properties\n");
            printf("Founder: RIKEN institute\n");
            printf("Fun Fact: First element discovered in Asia.\n");
            break;

        case 114:
            printf("Element: Flerovium\n");
            printf("Symbol: Fl\n");
            printf("Atomic Weight: 289\n");
            printf("Category: Unknown properties\n");
            printf("Founder: Joint Institute for Nuclear Research\n");
            printf("Fun Fact: Named after physicist Georgy Flyorov.\n");
            break;

        case 115:
            printf("Element: Moscovium\n");
            printf("Symbol: Mc\n");
            printf("Atomic Weight: 290\n");
            printf("Category: Unknown properties\n");
            printf("Founder: Joint Institute for Nuclear Research\n");
            printf("Fun Fact: Named after Moscow region.\n");
            break;

        case 116:
            printf("Element: Livermorium\n");
            printf("Symbol: Lv\n");
            printf("Atomic Weight: 293\n");
            printf("Category: Unknown properties\n");
            printf("Founder: Joint Institute for Nuclear Research\n");
            printf("Fun Fact: Named after Lawrence Livermore National Laboratory.\n");
            break;

        case 117:
            printf("Element: Tennessine\n");
            printf("Symbol: Ts\n");
            printf("Atomic Weight: 294\n");
            printf("Category: Halogen\n");
            printf("Founder: Oak Ridge National Lab\n");
            printf("Fun Fact: Named after the state of Tennessee.\n");
            break;

        case 118:
            printf("Element: Oganesson\n");
            printf("Symbol: Og\n");
            printf("Atomic Weight: 294\n");
            printf("Category: Noble gas\n");
            printf("Founder: Joint Institute for Nuclear Research\n");
            printf("Fun Fact: Named after Russian physicist Yuri Oganessian.\n");
            break;
            
        default: printf("\nEnter the number between 1 -118");

    }
    }
    
    else if (choice == 2) {
            printf("Exiting program. Thank you!\n");
            break;
        } else {
            printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}