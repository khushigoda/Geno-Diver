#include <iostream>
#include <vector>
#ifndef ParameterClass_H_
#define ParameterClass_H_

////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
// Class to parameters used in the simulation program //
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
class parameters
{
private:
    /* Housekeeping Parameters */
    std::string StartSim = "sequence";                          /* Where Simulation Starts at Founders or Sequence */
    std::string outputfolder = "GenoDiverFiles";                /* Directory files are outputted */
    int seednumber = 1;                                         /* Seednumber */
    int nthread = 1;                                            /* Number of threads used */
    int replicates = 1;                                         /* Number of replicates */
    std::string Create_LD_Decay = "no";                         /* Create LD decay across generations */
    std::string OutputGeno = "yes";                             /* Do you want genotypes saved */
    int outputgeneration = 0;                                   /* Generation genotypes are outputted */
    /* Genome Information */
    int Chr  = -5;                                              /* Number of chromosomes */
    std::vector<double> ChrLength = std::vector<double>(0);     /* Chromosome Lenght in Megabases */
    std::vector<int> Marker_chr = std::vector<int>(0);          /* Number of Markers by chromosome */
    std::vector<int> QTL_chr = std::vector<int>(0);             /* Number of QTL mutations by chromosome */
    std::vector<int> FTL_lethal_chr = std::vector<int>(0);      /* Number of FTL lethal mutations by chromosome */
    std::vector<int> FTL_sublethal_chr = std::vector<int>(0);   /* Number of FTL sub-lethal mutations by chromosome */
    int haplo_size = 50;                                        /* Size of haplotypes in SNP */
    std::string Recomb_Distribution = "Uniform";                /* Distribution for recombination location*/
    /* MAF thresholds */
    double ThresholdMAFMark = 0.10;                             /* Minimum MAF for markers */
    double ThresholdMAFQTL = 0.05;                              /* Minimum MAF for QTL */
    double LowerThresholdMAFFitnesslethal = 0.02;               /* Upper frequency for lethal FTL */
    double maxdifferencelethal = 0.01;                          /* Range in allele frequencies that are allows for lethals */
    double LowerThresholdMAFFitnesssublethal = 0.08;            /* Upper frequency for sub-lethal FTL */
    /* QTL Distributions */
    double Gamma_Shape = 0.4;                                   /* Quantitative trait additive */
    double Gamma_Scale = 1.66;                                  /* Quantitative trait additive */
    double Normal_meanRelDom = 0.1;                             /* Quantitative trait dominance */
    double Normal_varRelDom = 0.2;                              /* Quantitative trait dominance */
    double Gamma_Shape_Lethal = 1.6;                            /* Lethal Fitness Selection Coefficent */
    double Gamma_Scale_Lethal = 0.1;                            /* Lethal Fitness Selection Coefficent */
    double Normal_meanRelDom_Lethal = 0.05;                     /* Lethal Fitness Dominance Degree */
    double Normal_varRelDom_Lethal = 0.01;                      /* Lethal Fitness Dominance Degree */
    double Gamma_Shape_SubLethal = 0.1;                         /* Sub-Lethal Fitness Selection Coefficent */
    double Gamma_Scale_SubLethal = 0.2;                         /* Sub-Lethal Fitness Selection Coefficent */
    double Normal_meanRelDom_SubLethal = 0.3;                   /* Sub-Lethal Fitness Dominance Degree */
    double Normal_varRelDom_SubLethal = 0.1;                    /* Sub-Lethal Fitness Dominance Degree */
    /* Mutations */
    float u = 2.5e-8;                                           /* Mutation Rate */
    double PropQTL = 0.0;                                       /* Proportion of mutations that can be QTL or FTL */
    /* Founder population */
    std::string Ne_spec = "";                                   /* MACS scenario */
    int ne_founder = -10;                                       /* If scenario not given then has to give effective population size */
    int foundermale = -10;                                      /* Number of founder males simulated */
    int founderfemale = -10;                                    /* Number of founder females simulated */
    int generationsfounderselect = 1;                           /* Number of generations founders selected for */
    std::string founderselect = "random";                       /* How founders are selected */
    int fnd_haplo = -10;                                        /* Number of founder haplotypes per chromosome generated by MaCS */
    /* Genetic Parameters */
    double Variance_Additiveh2 = -1;                            /* proportion of variance due to additive gene action */
    double Variance_Dominanceh2 = -1;                           /* proportion of variance due to dominant gene action */
    double proppleitropic = 0.0;                                /* proportion of genes with both sub-lethal fitness and quantitative effect */
    double genetic_correlation = 0.0;                           /* rank correlation between the additive and selection coeffecient  */
    /* Forward in Time population Parameters */
    int GENERATIONS = -1;                                       /* Number of generations simulated for forward-in-time part */
    int SIRES = -10;                                            /* Number of Sires per generation */
    double SireReplacement = 0.0;                               /* Number of Sires replaced each generation */
    int DAMS = -10;                                             /* Number of Dams per generation */
    double DamReplacement = 0.0;                                /* Number of Dams replaced each generation */
    int OffspringPerMating = 1;                                 /* Number of offspring per mating pair */
    std::string Selection = "random";                           /* How animals are selected */
    std::string SelectionDir = "high";                          /* Direction animals are selected */
    std::string AtSelectionHas = "phenotype";                   /* What animal has at and after selection */
    int maxmating;                                              /* Maximum number of full-siblings kept */
    std::string EBV_Calc = "pedigree";                          /* Relationship Used to Estimate Breeding Values */
     std::string Culling = "random";                            /* How animals are culled */
    int MaximumAge = 10;                                        /* Maximum age animal can stay in herd */
    /* Mating Parameters */
    std::string Mating = "random";                              /* How animals are mated */
    std::string mating_algorithm = "sslr";                      /* Optimization used to generate mating pairs */
    double BetaDist_alpha = 1.0;                                /* Beta distribution used for non-uniform mating pair by age */
    double BetaDist_beta = 1.0;                                 /* Beta distribution used for non-uniform mating pair by age */
    double maxsireproportion = 0.05;                            /* Maximum proportion of the population a sire can be mated to */
    std::vector <double> indexweights = std::vector<double>(0);      /* Proportion given to each: Genetic Value - Inbreeding - Haplofinder */
    /* Parameter used for each index: Genetic Value - Inbreeding - Haplofinder */
    std::vector <std::string> indexparameters = std::vector<std::string>(0);
    /* Haplotype Finder Stuff */
    int startgen = 5;                                           /* Generation to start training */
    int traingen = 3;                                           /* Number of generations in training set */
    int retrain = 1;                                            /* Number of generation till retrain again */
    /* Optimum Contribution Parameters */
    std::string ocsrelationship;                                /* Relationship Used in Optimum Contribution */
    std::string ocs_optimize;                                   /* whether to do a penalty or constraint optimization */
    double ocs_w_merit;                                         /* Weight given to merit */
    double ocs_w_rel;                                           /* Weight given to relationship */
    double nEVAgen;                                             /* Evolutionary algorithm number of generations */
    double nEVApop;                                             /* Evolutionary algorithm population size */
    /* Genome ROH Stuff */
    int MbLenthCutoff = 5;
    std::vector <int> ROHSummaryGen = std::vector<int>(0);
    /* min genomic maf stuff */
    double genomicmafcutoff = 0.0;
    std::string genomicmafdirection = "above";
    /* Bayes Options */
    std::string method = "BayesC";
    int numiter= 5000;                                          /* number of iterations for first generation of method */
    int burnin = 1000;                                          /* number of iterations burn-in for first generation of method */
    int numiterstat = 2000;                                     /* number of iterations for generation after first for method */
    int burninstat = 500;                                       /* number of iterations burn-in for generations after first of method */
    int thin = 1;                                               /* Thinning rate */
    std::string pie_f = "estimate";                             /* whether you want to fix or estimate pi parameter for BayesB or BayesC */
    double initpi = 0.50;                                       /* Starting pi value for BayesB or BayesC */
    int referencegenerations = 4;                               /* Number of Generations to include in reference */
    /* BLUP Options */
    int referencegenerationsblup = 0;                           /* Number of generations to include in BLUP Calculation */
    std::string Solver = "pcg";                                 /* How estimated breeding values are solved */
    std::string Geno_Inverse = "cholesky";                      /* Method used to generate genomic based inverse */
    /* G Options */
    std::string ConstructG = "VanRaden";                        /* Method used to construct G (i.e. ZZ'/2sum(pq) */
    std::string ConstructGFreq = "founder";                     /* Frequencies used to center and scale G (i.e. founder, observed or 0.5) */
    /* Output average Amax by generation */
    std::string OutputTrainReference = "no";                    /* Output Amax by generation */
    /* Output Window True additive and dominance variance across genome */
    std::string OutputWindowVariance = "no";                    /* Output true addtive and dominance varianace across windows by generation */
    /* Genotyping Strategy Options */
    int GenoGeneration = 5;                                     /* What generation to start genotyping */
    double MalePropGenotype = 1.0;                              /* Proportion of Males Genotyped */
    std::string MaleWhoGenotype = "parents";                    /* Who and at what point an animal gets genotyped */
    double FemalePropGenotype = 1.0;                            /* Proportion of Males Genotyped */
    std::string FemaleWhoGenotype = "parents";                  /* Who and at what point an animal gets genotyped */
 public:
    parameters();
    ~parameters();
    /* Start Location */
    std::string getStartSim(){return StartSim;}
    void UpdateStartSim(std::string temp);
    /* Output Folder */
    std::string getOutputFold(){return outputfolder;}
    void UpdateOutputFold(std::string temp);
    /* Seed Number */
    int getSeed(){return seednumber;}
    void UpdateSeed(int temp);
    /* Threads */
    int getThread(){return nthread;}
    void UpdateThread(int temp);
    /* Replicates */
    int getReplicates(){return replicates;}
    void UpdateReplicates(int temp);
    /* Chromosmes */
    int getChr(){return Chr;}
    void UpdateChr(int temp);
    /* Chromosome Length */
    const std::vector <double>& get_ChrLength() const{return ChrLength;}
    void add_ToChrLength(double x){ChrLength.push_back(x);}
    void clear_ChrLength(){ChrLength.clear();}
    /* Markers */
    const std::vector <int>& get_Marker_chr() const{return Marker_chr;}
    void add_ToMarker_chr(int x){Marker_chr.push_back(x);}
    void clear_Marker_chr(){Marker_chr.clear();}
    /* Marker MAF */
    double getThresholdMAFMark(){return ThresholdMAFMark;}
    void UpdateThresholdMAFMark(double temp);
    /* Quantitative Trait Mutation */
    const std::vector <int>& get_QTL_chr() const{return QTL_chr;}
    void add_ToQTL_chr(int x){QTL_chr.push_back(x);}
    void clear_QTL_chr(){QTL_chr.clear();}
    /* QTL MAF */
    double getThresholdMAFQTL(){return ThresholdMAFQTL;}
    void UpdateThresholdMAFQTL(double temp);
    /* Lethal Fitness Trait Mutation */
    const std::vector <int>& get_FTL_lethal_chr() const{return FTL_lethal_chr;}
    void add_ToFTL_lethal_chr(int x){FTL_lethal_chr.push_back(x);}
    void clear_FTL_lethal_chr(){FTL_lethal_chr.clear();}
    /* Sub-Lethal Fitness Trait Mutation */
    const std::vector <int>& get_FTL_sublethal_chr() const{return FTL_sublethal_chr;}
    void add_ToFTL_sublethal_chr(int x){FTL_sublethal_chr.push_back(x);}
    void clear_FTL_sublethal_chr(){FTL_sublethal_chr.clear();}
    /* Upper Threshold lethal fitness frequency */
    double getUpThrMAFLFit(){return LowerThresholdMAFFitnesslethal;}
    void UpdateUpThrMAFLFit(double temp);
    /* Range lethal fitness fitness frequency */
    double getRangeMAFLFit(){return maxdifferencelethal;}
    void UpdateRangeMAFLFit(double temp);
    /* Upper Threshold sublethal fitness alelles */
    double getUpThrMAFSFit(){return LowerThresholdMAFFitnesssublethal;}
    void UpdateUpThrMAFSFit(double temp);
    /* Haplotype Length */
    double gethaplo_size(){return haplo_size;}
    void Updatehaplo_size(double temp);
    /* Recombination */
    std::string getRecombDis(){return Recomb_Distribution;}
    void UpdateRecombDis(std::string temp);
    /* Mutation rate used for MACS and in recent population */
    float getu(){return u;}
    void Updateu(float temp);
    /* Proportion of new mutations that can be QTL */
    double getPropQTL(){return PropQTL;}
    void UpdatePropQTL(double temp);
    /* Gamma Shape */
    double getGamma_Shape(){return Gamma_Shape;}
    void UpdateGamma_Shape(double temp);
    /* Gamma Scale */
    double getGamma_Scale(){return Gamma_Scale;}
    void UpdateGamma_Scale(double temp);
    /* Normal Mean */
    double getNormal_meanRelDom(){return Normal_meanRelDom;}
    void UpdateNormal_meanRelDom(double temp);
    /* Normal standard devation */
    double getNormal_varRelDom(){return Normal_varRelDom;}
    void UpdateNormal_varRelDom(double temp);
    /* Gamma Shape Lethal */
    double getGamma_Shape_Lethal(){return Gamma_Shape_Lethal;}
    void UpdateGamma_Shape_Lethal(double temp);
    /* Gamma Scale Lethal */
    double getGamma_Scale_Lethal(){return Gamma_Scale_Lethal;}
    void UpdateGamma_Scale_Lethal(double temp);
    /* Normal Mean Lethal */
    double getNormal_meanRelDom_Lethal(){return Normal_meanRelDom_Lethal;}
    void UpdateNormal_meanRelDom_Lethal(double temp);
    /* Normal standard devation Lethal */
    double getNormal_varRelDom_Lethal(){return Normal_varRelDom_Lethal;}
    void UpdateNormal_varRelDom_Lethal(double temp);
    /* Gamma Shape SubLethal */
    double getGamma_Shape_SubLethal(){return Gamma_Shape_SubLethal;}
    void UpdateGamma_Shape_SubLethal(double temp);
    /* Gamma Scale SubLethal */
    double getGamma_Scale_SubLethal(){return Gamma_Scale_SubLethal;}
    void UpdateGamma_Scale_SubLethal(double temp);
    /* Normal Mean SubLethal */
    double getNormal_meanRelDom_SubLethal(){return Normal_meanRelDom_SubLethal;}
    void UpdateNormal_meanRelDom_SubLethal(double temp);
    /* Normal standard devation SubLethal */
    double getNormal_varRelDom_SubLethal(){return Normal_varRelDom_SubLethal;}
    void UpdateNormal_varRelDom_SubLethal(double temp);
    /* Proportion additive and dominance pleitropic */
    double getproppleitropic(){return proppleitropic;}
    void Updateproppleitropic(double temp);
    /* Genetic correlation additive and selection coeffecient for sublethals */
    double getgencorr(){return genetic_correlation;}
    void Updategencorr(double temp);
    /* Founder Population Scenario */
    std::string getNe_spec(){return Ne_spec;}
    void UpdateNe_spec(std::string temp);
    /* Founder Population Effective Population Size */
    int getne_founder(){return ne_founder;}
    void Updatene_founder(double temp);
    /* Founder Males */
    int getfoundermale(){return foundermale;}
    void Updatefoundermale(int temp);
    /* Founder Females */
    int getfounderfemale(){return founderfemale;}
    void Updatefounderfemale(int temp);
    /* Founders Selected */
    std::string getfounderselect(){return founderselect;}
    void Updatefounderselect(std::string temp);
    /* Founder Generations Selected */
    int getGenfoundsel(){return generationsfounderselect;}
    void UpdateGenfoundsel(int temp);
    /* Founder Haplotypes per Chromosome by MACS */
    int getfnd_haplo(){return fnd_haplo;}
    void Updatefnd_haplo(int temp);
    /* Variance due to additive */
    double getVarAdd(){return Variance_Additiveh2;}
    void UpdateVarAdd(double temp);
    /* Variance due to dominance */
    double getVarDom(){return Variance_Dominanceh2;}
    void UpdateVarDom(double temp);
    /* Number of Generation for Forward in Time Portion */
    int getGener(){return GENERATIONS;}
    void UpdateGener(int temp);
    /* Number of Sires recent population*/
    int getSires(){return SIRES;}
    void UpdateSires(int temp);
    /* Sire replacement rate recent population*/
    double getSireRepl(){return SireReplacement;}
    void UpdateSireRepl(double temp);
    /* Number of Dams recent population*/
    int getDams(){return DAMS;}
    void UpdateDams(int temp);
    /* Dam replacement rate recent population*/
    double getDamRepl(){return DamReplacement;}
    void UpdateDamRepl(double temp);
    /* Offspring per mating pair */
    int getOffspring(){return OffspringPerMating;}
    void UpdateOffspring(int temp);
    /* Selection Scenario */
    std::string getSelection(){return Selection;}
    void UpdateSelection(std::string temp);
    /* Selection Direction */
    std::string getSelectionDir(){return SelectionDir;}
    void UpdateSelectionDir(std::string temp);
    /* AtSelectionHas */
    std::string getAtSelectionHas(){return AtSelectionHas;}
    void UpdateAtSelectionHas(std::string temp);
    /* Max number of full sibling kept */
    int getmaxmating(){return maxmating;}
    void Updatemaxmating(int temp);
    /* How EBV are calculated */
    std::string getEBV_Calc(){return EBV_Calc;}
    void UpdateEBV_Calc(std::string temp);
    /* Culling Criteria */
    std::string getCulling(){return Culling;}
    void UpdateCulling(std::string temp);
    /* Maximum Age can stay in population */
    int getMaxAge(){return MaximumAge;}
    void UpdateMaxAge(int temp);
    /* Mating Criteria */
    std::string getMating(){return Mating;}
    void UpdateMating(std::string temp);
    /* Mating Algorithm */
    std::string getMatingAlg(){return mating_algorithm;}
    void UpdateMatingAlg(std::string temp);
    /* Parity Mate Beta alpha */
    double getBetaDist_alpha(){return BetaDist_alpha;}
    void UpdateBetaDist_alpha(double temp);
    /* Parity Mate Beta beta */
    double getBetaDist_beta(){return BetaDist_beta;}
    void UpdateBetaDist_beta(double temp);
    /* Max proportion sire can be mated to dam population */
    double getmaxsireprop(){return maxsireproportion;}
    void Updatemaxsireprop(double temp);
    /* Index Weights */
    const std::vector <double>& get_indexweights() const{return indexweights;}
    void add_Toindexweights(double x){indexweights.push_back(x);}
    void clear_indexweights(){indexweights.clear();}
    /* Parameter used */
    const std::vector <std::string>& get_indexparameters() const{return indexparameters;}
    void add_Toindexparameters(std::string x){indexparameters.push_back(x);}
    void clear_indexparameters(){indexparameters.clear();}
    /* LD_Decay */
    std::string getLDDecay(){return Create_LD_Decay;}
    void UpdateLDDecay(std::string temp);
    /* Output Genotypes */
    std::string getOutputGeno(){return OutputGeno;}
    void UpdateOutputGeno(std::string temp);
    /* What Generate to output Genotypes */
    int getoutputgeneration(){return outputgeneration;}
    void Updateoutputgeneration(int temp);
    /* Haplo-Finder generation to start training */
    int getstartgen(){return startgen;}
    void Updatestartgen(int temp);
    /* Haplo-Finder training generation size */
    int gettraingen(){return traingen;}
    void Updatetraingen(int temp);
    /* Haplo-Finder re-train generation */
    int getretrain(){return retrain;}
    void Updateretrain(int temp);
    /* ocs relationship */
    std::string getocsrelat(){return ocsrelationship;}
    void Updateocsrelat(std::string temp);
    /* ocs optimize */
    std::string getocs_optimize(){return ocs_optimize;}
    void Updateocs_optimize(std::string temp);
    /* ocs w merit */
    double getocs_w_merit(){return ocs_w_merit;}
    void Updateocs_w_merit(double temp);
    /* ocs w inbreeding */
    double getocs_w_rel(){return ocs_w_rel;}
    void Updateocs_w_rel(double temp);
    /* ocs eva generations */
    double getnEVAgen(){return nEVAgen;}
    void UpdatenEVAgen(double temp);
    /* ocs eva populations */
    double getnEVApop(){return nEVApop;}
    void UpdatenEVApop(double temp);
    /* Genome ROH Stuff */
    int getmblengthroh(){return MbLenthCutoff;}
    void Updatemblengthroh(int temp);
    const std::vector <int>& get_rohgeneration() const{return ROHSummaryGen;}
    void add_Torohgeneration(int x){ROHSummaryGen.push_back(x);}
    void clear_rohgeneration(){ROHSummaryGen.clear();}
    /* min genomic maf stuff */
    double getgenmafcutoff(){return genomicmafcutoff;}
    void Updategenmafcutoff(double temp);
    std::string getgenmafdir(){return genomicmafdirection;}
    void Updategetgenmafdir(std::string temp);
    /* Bayes EBV Stuff */
    std::string getmethod(){return method;}                         /* Bayes Variation */
    void Updatemethod(std::string temp);
    int getnumiter(){return numiter;}                               /* MCMC Iterations for first generation */
    void Updatenumiter(int temp);
    int getburnin(){return burnin;}                                 /* MCMC Iterations to Burn-in for first generation */
    void Updateburnin(int temp);
    int getnumiterstat(){return numiterstat;}                       /* MCMC Iterations for generations after first */
    void Updatenumiterstat(int temp);
    int getburninstat(){return burninstat;}                         /* MCMC Iterations to Burn-in after first */
    void Updateburninstat(int temp);
    int getthin(){return thin;}                                     /* Thinning Rate */
    void Updatethin(int temp);
    std::string getpie_f(){return pie_f;}                           /* Whether to estimate or have fixed pie */
    void Updatepie_f(std::string temp);
    double getinitpi(){return initpi;}                              /* Initial or Fixed Pie Value */
    void Updateinitpi(double temp);
    int getreferencegenerations(){return referencegenerations;}     /* Training Generations */
    void Updatereferencegenerations(int temp);
    /* BLUP OPTION STUFF */
    /* Generations to include */
    int getreferencegenblup(){return referencegenerationsblup;}
    void Updatereferencegenblup(int temp);
    /* Solver EBV */
    std::string getSolver(){return Solver;}
    void UpdateSolver(std::string temp);
    /* Relationship Inverse Calculation */
    std::string getGeno_Inverse(){return Geno_Inverse;}
    void UpdateGeno_Inverse(std::string temp);
    /* G_OPTION STUFF */
    std::string getConstructG(){return ConstructG;}
    void UpdateConstructG(std::string temp);
    std::string getConstructGFreq(){return ConstructGFreq;}
    void UpdateConstructGFreq(std::string temp);
    /* Output average Amax by generation */
    std::string getOutputTrainReference(){return OutputTrainReference;}
    void UpdateOutputTrainReference(std::string temp);
    /* Output Window True additive and dominance variance across genome */
    std::string getOutputWindowVariance(){return OutputWindowVariance;}
    void UpdateOutputWindowVariance(std::string temp);
    /* Genotyping Strategy Options */
    /* When to start genotyping */
    int getGenoGeneration(){return GenoGeneration;}
    void UpdateGenoGeneration(int temp);
    /* Male Strategy */
    double getMalePropGenotype(){return MalePropGenotype;}          /* Proportion of Males Genotyped */
    void UpdateMalePropGenotype(double temp);
    std::string getMaleWhoGenotype(){return MaleWhoGenotype;}       /* How Males selected to be genotyped */
    void UpdateMaleWhoGenotype(std::string temp);
    /* Female Strategy */
    double getFemalePropGenotype(){return FemalePropGenotype;}      /* Proportion of Females Genotyped */
    void UpdateFemalePropGenotype(double temp);
    std::string getFemaleWhoGenotype(){return FemaleWhoGenotype;}   /* How Females selected to be genotyped */
    void UpdateFemaleWhoGenotype(std::string temp);
};

#endif

