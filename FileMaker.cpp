#include "math.h"
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void javaIf(string variable){

    string value, print, x = "Absorption, Achromatic, Adaptation, Aerobic, Algae, Alimentary, Allergy, Amoeba, Amphibian, Analogue, Anatomy, Ancestor, Antibody, Appendage, Aquatic, Arboreal, Asexual, Assimilation, Atrophy, Auditory" +
            "Backbone, Bacteria, Balance, Barrier, Benign, Biology, Biome, Bisect, Botany, Branch, Breathe" +
            "Carnivorous, Catalyst, Cavity, Cell, Chlorophyll, Cholesterol, Chromatic, Chromosome, Cilia, Classification, Cohesive, Collagen, Communicable, Community, Contraction, Control, Convolution, Coronary, Cyclic" +
            "Darwin, Deciduous, Decomposition, Dermis, Develop, Dichotomous, Dietary, Differentiation, Diffusion, Digestion, Dinosaur, Discipline, Displacement, Division, DNA, Dominant, Dormant" +
            "Ecology, Ecosystem, Ectoplasm, Edema, Embryo, Endangered, Endemic, Endoskeleton, Endothermic, Energy, Environment, Enzyme, Epidermis, Erosion, Essential, Estrogen, Evolution, Exoskeleton, Exothermic, Extermination, Extinct" +
            "Factor, Feedback, Fertilization, Fetus, Fibrillation, Filament, Fish, Fission, Flower, Food chain, Fossil, Function" +
            "Gamete, Gaseous, Gastrin, Genetics, Genome, Genus, Germ, Gestation, Gills, Grafting, Greenhouse effect, Growth" +
            "Habitat, Hemoglobin, Herbivore, Heredity, Heterogeneous, Hibernation, Hierarchy, Homogeneous, Hormone, Horticulture, Host, Human, Hybrid" +
            "Immunity, Inclusion, Incubate, Ingestion, Inherited traits, Inoculate, Inquiry, Insoluble, Instinct, Insulate, Insulin, Interdependent, Invertebrate, Involuntary, Isolate, Isotope" +
            "Juncture" +
            "Kinesthesia, Kingdom" +
            "Latitude, Leaf, Life cycle, Linkage, Living, Luminescent, Lymph" +
            "Malignant, Mammal, Marine, Meiosis, Membrane, Memory, Metabolism, Microbiology, Microscope, Migration, Mildew, Molt, Muscle, Mutation, Mutualism" +
            "Natural, Nerve, Neuron, Nitrogen, Nonliving, Nucleus" +
            "Omnivorous, Optic, Order, Organs, Osmosis, Ossification, Oviparous, Oxidation" +
            "Paleontologist, Parasite, Parasympathetic, Pathogen, Permeable, Photosynthesis, Plankton, Plasma, Platelet, Pollen, Pollution, Portion, Predator, Preserve, Pressure, Producer, Protein, Protoplasm, Pulmonary, Pyramid" +
            "Quest, Question" +
            "Radial, Receptor, Recessive, Recycling, Reflex, Regeneration, Regulate, Replicate, Repress, Reptile, Residual, Resource, Respiration, Restriction, RH factor, Root" +
            "Scope, Secrete, Seed, Sensor, Shelter, Skeleton, Skin, Solar, Spatial, Species, Specimen, Statistics, Stimulus, Stress, Structure, Symbiosis, Symmetry, Synapse, System" +
            "Taste, Taxonomy, Tendril, Terrestrial, Tissue, Tolerance, Toxin, Transformation, Transpiration, Tundra, Turgid" +
            "Unsaturated" +
            "Vacuole, Variation, Ventilate, Vertebrate, Viable, Virus, Vital, Vitamin, Viviparous, Volume, Voluntary" +
            "Waste, Weather" +
            "X chromosome" +
            "Y chromosome" +
            "Zone, Zoology";
;

   while(true){

   printf("Value: ");
            getline(cin, value);
   printf("print: ");
            getline(cin, print);

	ofstream MakedFile;
	MakedFile.open("MakedFile.txt",ios::app|ios::ate);
	MakedFile << "else if (" << variable << " == " << value << "){" << endl << "   System.out.println(\"" << print << "\");" << endl << "}" << endl << endl;
	MakedFile.close();

	MakedFile.seekp(0,std::ios::end); //to ensure the put pointer is at the end
	MakedFile << "else if (" << variable << " == " << value << "){" << endl << "   System.out.println(\"" << print << "\");" << endl << "}" << endl << endl;


    }

}

int main()
{
    string variable;
    string options[1][2];
    options[0][0] ="1.-\n   if (variable == value){\n      System.out.println(\"print\");\n\n   }";
    options[0][1] = "else if (variable == value){\n      System.out.println(\"print\");\n\n   }";

    int i = 0;
    int select;

    printf("Please select a language from the following:\n");
    printf("1.- C++\n2.- Java\n");
    scanf("%d", &select);

    if(select == 2){
       printf("   Select the template to use from the following:\n\n");
       printf("%s", options[0][0].c_str());
       scanf("%d", &select);

       if(select == 1){

          cin >> variable;
          printf("\n");
          javaIf(variable);

       }

    }




return 0;
}






/*getline(cin, lett);

	ofstream HighScoreFile;
	HighScoreFile.open("highscores.txt",ios::app|ios::ate);
	HighScoreFile << "else if (x.contains(\"" << lett << "\")){" << endl <<"Purelements[y][z] = \"" << lett << "\" ;" << endl << "return true;" << endl << "}" << endl << endl;
	HighScoreFile.close();

	HighScoreFile.seekp(0,std::ios::end); //to ensure the put pointer is at the end
	HighScoreFile << "else if (x.contains(\"" << lett << "\")){" << endl <<"Purelements[y][z] = \"" << lett << "\" ;" << endl << "return true;" << endl << "}" << endl << endl;
	   i++;*/

