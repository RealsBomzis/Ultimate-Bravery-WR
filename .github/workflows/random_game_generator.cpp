#include <string>
#include <iostream>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <cstdlib>     /* srand, rand */
#include <ctime>       
#include <algorithm>
#include <vector>

main()
{
	srand(static_cast<unsigned int>(time(0)));
srand (time(NULL));
std::cout << "CHAMPION: ";
int choice=rand()%103+1;
	
switch (choice) {
        case 1: std::cout << "AATROX"; break;
        case 2: std::cout << "AHRI"; break;
        case 3: std::cout << "AKALI"; break;
        case 4: std::cout << "ALISTAR"; break;
        case 5: std::cout << "AMUMU"; break;
        case 6: std::cout << "ANNIE"; break;
        case 7: std::cout << "ASHE"; break;
        case 8: std::cout << "AURELION SOL"; break;
        case 9: std::cout << "AKSHAN"; break;
        case 10: std::cout << "BLITZCRANK"; break;
        case 11: std::cout << "BRAND"; break;
        case 12: std::cout << "BRAUM"; break;
        case 13: std::cout << "CAITLYN"; break;
        case 14: std::cout << "CAMILLE"; break;
        case 15: std::cout << "CORKI"; break;
        case 16: std::cout << "DARIUS"; break;
        case 17: std::cout << "DIANA"; break;
        case 18: std::cout << "DR. MUNDO"; break;
        case 19: std::cout << "DRAVEN"; break;
        case 20: std::cout << "EKKO"; break;
        case 21: std::cout << "EVELYNN"; break;
        case 22: std::cout << "EZREAL"; break;
        case 23: std::cout << "FIORA"; break;
        case 24: std::cout << "FIZZ"; break;
        case 25: std::cout << "GALIO"; break;
        case 26: std::cout << "GAREN"; break;
        case 27: std::cout << "GRAGAS"; break;
        case 28: std::cout << "GRAVES"; break;
        case 29: std::cout << "GWEN"; break;
        case 30: std::cout << "IRELIA"; break;
        case 31: std::cout << "JANNA"; break;
        case 32: std::cout << "JARVAN IV"; break;
        case 33: std::cout << "JAX"; break;
        case 34: std::cout << "JAYCE"; break;
        case 35: std::cout << "JHIN"; break;
        case 36: std::cout << "JINX"; break;
        case 37: std::cout << "KAISA"; break;
        case 38: std::cout << "KASSADIN"; break;
        case 39: std::cout << "KATARINA"; break;
        case 40: std::cout << "KAYLE"; break;
        case 41: std::cout << "KAYN"; break;
        case 42: std::cout << "KHA'ZIX"; break;
        case 43: std::cout << "KARMA"; break;
        case 44: std::cout << "KENNEN"; break;
        case 45: std::cout << "LEE SIN"; break;
        case 46: std::cout << "LEONA"; break;
        case 47: std::cout << "LILLIA"; break;
        case 48: std::cout << "LUCIAN"; break;
        case 49: std::cout << "LULU"; break;
        case 50: std::cout << "LUX"; break;
        case 51: std::cout << "MALPHITE"; break;
        case 52: std::cout << "MASTER YI"; break;
        case 53: std::cout << "MISS FORTUNE"; break;
        case 54: std::cout << "MORGANA"; break;
        case 55: std::cout << "NAMI"; break;
        case 56: std::cout << "NASUS"; break;
        case 57: std::cout << "NAUTILUS"; break;
        case 58: std::cout << "NUNU & WILLUMP"; break;
        case 59: std::cout << "OLAF"; break;
        case 60: std::cout << "ORIANNA"; break;
        case 61: std::cout << "PANTHEON"; break;
        case 62: std::cout << "PYKE"; break;
        case 63: std::cout << "RAKAN"; break;
        case 64: std::cout << "RAMMUS"; break;
        case 65: std::cout << "RENGAR"; break;
        case 66: std::cout << "RIVEN"; break;
        case 67: std::cout << "RENEKTON"; break;
        case 68: std::cout << "SAMIRA"; break;
        case 69: std::cout << "SENNA"; break;
        case 70: std::cout << "SERAPHINE"; break;
        case 71: std::cout << "SETT"; break;
        case 72: std::cout << "SHEN"; break;
        case 73: std::cout << "SHYVANA"; break;
        case 74: std::cout << "SINGED"; break;
        case 75: std::cout << "SION"; break;
        case 76: std::cout << "SONA"; break;
        case 77: std::cout << "SORAKA"; break;
        case 78: std::cout << "SWAIN"; break;
        case 79: std::cout << "TEEMO"; break;
        case 80: std::cout << "THRESH"; break;
        case 81: std::cout << "TRISTANA"; break;
        case 82: std::cout << "TRYNDAMERE"; break;
        case 83: std::cout << "TWISTED FATE"; break;
        case 84: std::cout << "TWITCH"; break;
        case 85: std::cout << "URGOT"; break;
        case 86: std::cout << "VARUS"; break;
        case 87: std::cout << "VAYNE"; break;
        case 88: std::cout << "VEIGAR"; break;
        case 89: std::cout << "VEX"; break;
        case 90: std::cout << "VI"; break;
        case 91: std::cout << "WARWICK"; break;
        case 92: std::cout << "WUKONG"; break;
        case 93 : std::cout << "XAYAH"; break;
        case 94 : std::cout << "XIN ZHAO"; break;
        case 95 : std::cout << "YASUO"; break;
        case 96 : std::cout << "YONE"; break;
        case 97 : std::cout << "YUUMI"; break;
        case 98 : std::cout << "ZED"; break;
        case 99 : std::cout << "ZERI"; break;
        case 100 : std::cout << "ZIGGS"; break;
        case 101 : std::cout << "ZOE"; break;
        case 103 : std::cout << "ORNN"; break;
        case 104 : std::cout << "VOLIBEAR"; break;
}
std::cout << " " << std::endl;
std::cout << "ITEMS: ";

    std::vector<std::string> items;
    items.push_back("BLOODTHIRSTER, ");
    items.push_back("GUARDIAN ANGEL, ");
    items.push_back("STATIKK SHIV, ");
    items.push_back("BLADE OF THE RUINED KING, ");
    items.push_back("RAPID FIRECANNON, ");
    items.push_back("RUNAAN'S HURRICANE, ");
    items.push_back("YOUMUU'S GHOSTBLADE, ");
    items.push_back("DUSKBLADE OF DRAKTHARR, ");
    items.push_back("INFINITY EDGE, ");
    items.push_back("MORTAL REMINDER, ");
    items.push_back("BLACK CLEAVER, ");
    items.push_back("MANAMUNE, ");
    items.push_back("TRINITY FORCE, ");
    items.push_back("MAW OF MALMORTIUS, ");
    items.push_back("DEATH'S DANCE, ");
    items.push_back("PHANTOM DANCER, ");
    items.push_back("NASHOR'S TOOTH, ");
    items.push_back("WIT'S END, ");
    items.push_back("ESSENCE REAVER, ");
    items.push_back("STORMRAZOR, ");
    items.push_back("SERYLDA'S GRUDGE, ");
    items.push_back("SOLARI CHARGEBLADE, ");
    items.push_back("NAVORI QUICKBLADES, ");
    items.push_back("EDGE OF NIGHT, ");
    items.push_back("HULLBREAKER, ");
    items.push_back("DIVINE SUNDERER, ");
    items.push_back("SERPENT'S FANG, ");
    items.push_back("LORD DOMINIK'S REGARD, ");
    items.push_back("IMMORTAL SHIELDBOW, ");
    items.push_back("THE COLLECTOR, ");
    items.push_back("LUDEN'S ECHO, ");
    items.push_back("MORELLONOMICON, ");
    items.push_back("VOID STAFF, ");
    items.push_back("RABADON'S DEATHCAP, ");
    items.push_back("RYALAI'S CRYSTAL SCEPTER, ");
    items.push_back("LAINDRY'S TORMENT, ");
    items.push_back("ROD OF AGES, ");
    items.push_back("LICH BANE, ");
    items.push_back("IMPERIAL MANDATE, ");
    items.push_back("ARCHANGEL'S STAFF, ");
    items.push_back("ARDENT CENSER, ");
    items.push_back("HARMONIC ECHO, ");
    items.push_back("AWAKENED SOULSTEALER, ");
    items.push_back("INFINITY ORB, ");
    items.push_back("CRYSTALLINE REFLECTOR, ");
    items.push_back("STAFF OF FLOWING WATER, ");
    items.push_back("BANSHEE'S VEIL, ");
    items.push_back("COSMIC DRIVE, ");
    items.push_back("RIFTMAKER, ");
    items.push_back("HORIZON FOCUS, ");
    items.push_back("SUNFIRE AEGIS, ");
    items.push_back("SPIRIT VISAGE, ");
    items.push_back("RANDUIN'S OMEN, ");
    items.push_back("WARMOG'S ARMOR, ");
    items.push_back("STERAK'S GAGE, ");
    items.push_back("ICEBORN GAUNTLET, ");
    items.push_back("DEAD MAN'S PLATE, ");
    items.push_back("ABYSSAL MASK, ");
    items.push_back("ZEKE'S CONVERGENCE, ");
    items.push_back("PROTECTOR'S VOW, ");
    items.push_back("WINTER'S APPROACH, ");
    items.push_back("FORCE OF NATURE, ");
    items.push_back("FROZEN HEART, ");
    items.push_back("IXTALI SEEDJAR, ");
    items.push_back("DAWNSHROUD, ");
    items.push_back("AMARANTH TWINGUARD, ");
    items.push_back("MANTLE OF THE TWELFTH HOUR, ");
    items.push_back("SEARING CROWN, ");
    std::random_shuffle(items.begin(), items.end());

    std::vector<std::string> boots;
    boots.push_back("BOOTS OF FUROR, ");
    boots.push_back("MERCURY'S TREADS, ");
    boots.push_back("IONIAN BOOTS OF LUCIDITY, ");
    boots.push_back("PLATED STEELCAPS, ");
    boots.push_back("GLUTTONOUS GREAVES, ");

    std::random_shuffle(boots.begin(), boots.end());

    std::vector<std::string> totalItems;
    for (int i = 0; i < 5; ++i) {
        totalItems.push_back(items[i]);
    }
    totalItems.push_back(boots[0]);

    std::random_shuffle(totalItems.begin(), totalItems.end());

    for (std::vector<std::string>::iterator it = totalItems.begin(); it != totalItems.end(); ++it) {
        std::cout << *it ;
    }
    std::cout << std::endl;
    std::cout << "RUNES: ";
   int main=rand()%10+1;
   switch (main)
   {
   	    case 1: std::cout << "PHASE RUSH, "; break;
        case 2: std::cout << "CONQUEROR, "; break;
        case 3: std::cout << "ELECTROCUTE, "; break;
        case 4: std::cout << "AERY, "; break;
        case 5: std::cout << "FLEET FOOTWORK, "; break;
        case 6: std::cout << "GRASP OF THE UNDYING, "; break;
        case 7: std::cout << "AFTERSHOCK, "; break;
        case 8: std::cout << "FONT OF LIFE, "; break;
        case 9: std::cout << "KRAKEN SLAYER"; break;
        case 10: std::cout << "LETHAL TEMPO"; break; 
   }
   int secondary=rand()%8+1;
   switch (secondary)
   {
   	    case 1: std::cout << "BRUTAL, "; break;
        case 2: std::cout << "GATHERING STORM, "; break;
        case 3: std::cout << "HUNTER-VAMPIRISM, "; break;
        case 4: std::cout << "TRIUMPH, "; break;
        case 5: std::cout << "SUDDEN IMPACT, "; break;
        case 6: std::cout << "WEAKNESS, "; break;
        case 7: std::cout << "SCORCH, "; break;
        case 8: std::cout << "GIANT SLAYER, "; break;
   }
    int third=rand()%8+1;
   switch (third)
   {
   	    case 1: std::cout << "ADAPTIVE CARAPACE, "; break;
        case 2: std::cout << "CONDITIONING, "; break;
        case 3: std::cout << "PERSEVERANCE, "; break;
        case 4: std::cout << "SECOND WIND, "; break;
        case 5: std::cout << "LOYALTY, "; break;
        case 6: std::cout << "BONE PLATING, "; break;
        case 7: std::cout << "ULTIMATE SHIELD, "; break;
        case 8: std::cout << "NULLIFYING ORB, "; break;
   }
       int fourth=rand()%8+1;
   switch (fourth)
   {
   	    case 1: std::cout << "PATHFINDER, "; break;
        case 2: std::cout << "MASTERMIND, "; break;
        case 3: std::cout << "TRANSCENDENCE, "; break;
        case 4: std::cout << "SWEET TOOTH, "; break;
        case 5: std::cout << "PACK HUNTER, "; break;
        case 6: std::cout << "MANAFLOW BAND, "; break;
        case 7: std::cout << "NIMBUS CLOAK, "; break;
        case 8: std::cout << "DEMOLISH, "; break;
   }
   std::cout << std::endl;
   std::cout << "SPELLS: ";
   
   std::vector<std::string> spells;
    spells.push_back("GHOST, ");
    spells.push_back("HEAL, ");
    spells.push_back("BARRIER, ");
    spells.push_back("EXHAUST, ");
    spells.push_back("IGNITE, ");
    spells.push_back("FLASH, ");
   std::random_shuffle(spells.begin(), spells.end());
   std::vector<std::string> totalSpells;
    for (int i = 0; i < 2; ++i) {
        totalSpells.push_back(spells[i]);
    }

    std::random_shuffle(totalSpells.begin(), totalSpells.end());

    for (std::vector<std::string>::iterator it = totalSpells.begin(); it != totalSpells.end(); ++it) {
        std::cout << *it ;
    }
   
   std::cout << std::endl;
   
   
   
   
   
   
   std::cout << "Press any key to continue...";
    std::system("pause > nul");
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
}
