# Sastantua
For me, `Sastantua` was the most emotionally charged project of the **[42 piscine](https://www.42.us.org/)**. I spent the whole day (July 29, 2018) working on it, and I _got it working_ by afternoon—in one super-long function full of for loops. Then, as I tried to corset it into the norme, I broke it, ran out of time, and started crying.

A year later, as a piscine prefect (July 12, 2019), I decided to do Sastantua again and vanquish it.

I did both an [recursive](./2019/recursive.c) and [iterative](./2019/iterative.c) version, and then (basically as a flex) submitted the recursive one. During corrections, my friend tested it with INT_MAX and it segfaults. (We tested the iterative one too, and it does _not_ do that.) I was sure Moulinette was going to fail me for that, but [it didn't](./2019/trace.txt).

# Details
* Tier rows
  * nth + 2
* Tier growth:
  * For even-number tiers, the growth is 1 + nth / 2
  * For odd-number tiers, the growth is the same as on the prev tier
* Door size
  * If the door is on an odd-number tier, the door is the size of the nth
  * On an even-numbered tier, the door is the same as on the prev tier
  
| Tier | Tier rows | Door size | Tier growth |
| ---- | --------- | --------- | ----------- |
| 1    | 3         | 1         |
| 2    | 4         | 1         | 2
| 3    | 5         | 3         | 2
| 4    | 6         | 3         | 3
| 5    | 7         | 5         | 3
| 6    | 8         | 5         | 4
| 7    | 9         | 7         | 4
| 8    | 10        | 7         | 5
| 9    | 11        | 9         | 5
| 10   | 12        | 9         | 6

```
☁  resources [master] ⚡  ./sastantua 0
☁  resources [master] ⚡  ./sastantua 1
  /*\
 /***\
/**|**\
☁  resources [master] ⚡  ./sastantua 2
        /*\
       /***\
      /*****\
   /***********\
  /*************\
 /***************\
/********|********\
☁  resources [master] ⚡  ./sastantua 3
               /*\
              /***\
             /*****\
          /***********\
         /*************\
        /***************\
       /*****************\
    /***********************\
   /*************************\
  /************|||************\
 /*************|||*************\
/**************|||**************\
☁  resources [master] ⚡  ./sastantua 4
                        /*\
                       /***\
                      /*****\
                   /***********\
                  /*************\
                 /***************\
                /*****************\
             /***********************\
            /*************************\
           /***************************\
          /*****************************\
         /*******************************\
     /***************************************\
    /*****************************************\
   /*******************************************\
  /*********************|||*********************\
 /**********************|||**********************\
/***********************|||***********************\
☁  resources [master] ⚡  ./sastantua 5
                                  /*\
                                 /***\
                                /*****\
                             /***********\
                            /*************\
                           /***************\
                          /*****************\
                       /***********************\
                      /*************************\
                     /***************************\
                    /*****************************\
                   /*******************************\
               /***************************************\
              /*****************************************\
             /*******************************************\
            /*********************************************\
           /***********************************************\
          /*************************************************\
      /*********************************************************\
     /***********************************************************\
    /****************************|||||****************************\
   /*****************************|||||*****************************\
  /******************************|||$|******************************\
 /*******************************|||||*******************************\
/********************************|||||********************************\
☁  resources [master] ⚡  ./sastantua 6
                                              /*\
                                             /***\
                                            /*****\
                                         /***********\
                                        /*************\
                                       /***************\
                                      /*****************\
                                   /***********************\
                                  /*************************\
                                 /***************************\
                                /*****************************\
                               /*******************************\
                           /***************************************\
                          /*****************************************\
                         /*******************************************\
                        /*********************************************\
                       /***********************************************\
                      /*************************************************\
                  /*********************************************************\
                 /***********************************************************\
                /*************************************************************\
               /***************************************************************\
              /*****************************************************************\
             /*******************************************************************\
            /*********************************************************************\
       /*******************************************************************************\
      /*********************************************************************************\
     /***********************************************************************************\
    /****************************************|||||****************************************\
   /*****************************************|||||*****************************************\
  /******************************************|||$|******************************************\
 /*******************************************|||||*******************************************\
/********************************************|||||********************************************\
☁  resources [master] ⚡  ./sastantua 7
                                                           /*\
                                                          /***\
                                                         /*****\
                                                      /***********\
                                                     /*************\
                                                    /***************\
                                                   /*****************\
                                                /***********************\
                                               /*************************\
                                              /***************************\
                                             /*****************************\
                                            /*******************************\
                                        /***************************************\
                                       /*****************************************\
                                      /*******************************************\
                                     /*********************************************\
                                    /***********************************************\
                                   /*************************************************\
                               /*********************************************************\
                              /***********************************************************\
                             /*************************************************************\
                            /***************************************************************\
                           /*****************************************************************\
                          /*******************************************************************\
                         /*********************************************************************\
                    /*******************************************************************************\
                   /*********************************************************************************\
                  /***********************************************************************************\
                 /*************************************************************************************\
                /***************************************************************************************\
               /*****************************************************************************************\
              /*******************************************************************************************\
             /*********************************************************************************************\
        /*******************************************************************************************************\
       /*********************************************************************************************************\
      /**************************************************|||||||**************************************************\
     /***************************************************|||||||***************************************************\
    /****************************************************|||||||****************************************************\
   /*****************************************************|||||$|*****************************************************\
  /******************************************************|||||||******************************************************\
 /*******************************************************|||||||*******************************************************\
/********************************************************|||||||********************************************************\
☁  resources [master] ⚡  ./sastantua 8
                                                                          /*\
                                                                         /***\
                                                                        /*****\
                                                                     /***********\
                                                                    /*************\
                                                                   /***************\
                                                                  /*****************\
                                                               /***********************\
                                                              /*************************\
                                                             /***************************\
                                                            /*****************************\
                                                           /*******************************\
                                                       /***************************************\
                                                      /*****************************************\
                                                     /*******************************************\
                                                    /*********************************************\
                                                   /***********************************************\
                                                  /*************************************************\
                                              /*********************************************************\
                                             /***********************************************************\
                                            /*************************************************************\
                                           /***************************************************************\
                                          /*****************************************************************\
                                         /*******************************************************************\
                                        /*********************************************************************\
                                   /*******************************************************************************\
                                  /*********************************************************************************\
                                 /***********************************************************************************\
                                /*************************************************************************************\
                               /***************************************************************************************\
                              /*****************************************************************************************\
                             /*******************************************************************************************\
                            /*********************************************************************************************\
                       /*******************************************************************************************************\
                      /*********************************************************************************************************\
                     /***********************************************************************************************************\
                    /*************************************************************************************************************\
                   /***************************************************************************************************************\
                  /*****************************************************************************************************************\
                 /*******************************************************************************************************************\
                /*********************************************************************************************************************\
               /***********************************************************************************************************************\
         /***********************************************************************************************************************************\
        /*************************************************************************************************************************************\
       /***************************************************************************************************************************************\
      /*****************************************************************|||||||*****************************************************************\
     /******************************************************************|||||||******************************************************************\
    /*******************************************************************|||||||*******************************************************************\
   /********************************************************************|||||$|********************************************************************\
  /*********************************************************************|||||||*********************************************************************\
 /**********************************************************************|||||||**********************************************************************\
/***********************************************************************|||||||***********************************************************************\
☁  resources [master] ⚡  ./sastantua 9
                                                                                          /*\
                                                                                         /***\
                                                                                        /*****\
                                                                                     /***********\
                                                                                    /*************\
                                                                                   /***************\
                                                                                  /*****************\
                                                                               /***********************\
                                                                              /*************************\
                                                                             /***************************\
                                                                            /*****************************\
                                                                           /*******************************\
                                                                       /***************************************\
                                                                      /*****************************************\
                                                                     /*******************************************\
                                                                    /*********************************************\
                                                                   /***********************************************\
                                                                  /*************************************************\
                                                              /*********************************************************\
                                                             /***********************************************************\
                                                            /*************************************************************\
                                                           /***************************************************************\
                                                          /*****************************************************************\
                                                         /*******************************************************************\
                                                        /*********************************************************************\
                                                   /*******************************************************************************\
                                                  /*********************************************************************************\
                                                 /***********************************************************************************\
                                                /*************************************************************************************\
                                               /***************************************************************************************\
                                              /*****************************************************************************************\
                                             /*******************************************************************************************\
                                            /*********************************************************************************************\
                                       /*******************************************************************************************************\
                                      /*********************************************************************************************************\
                                     /***********************************************************************************************************\
                                    /*************************************************************************************************************\
                                   /***************************************************************************************************************\
                                  /*****************************************************************************************************************\
                                 /*******************************************************************************************************************\
                                /*********************************************************************************************************************\
                               /***********************************************************************************************************************\
                         /***********************************************************************************************************************************\
                        /*************************************************************************************************************************************\
                       /***************************************************************************************************************************************\
                      /*****************************************************************************************************************************************\
                     /*******************************************************************************************************************************************\
                    /*********************************************************************************************************************************************\
                   /***********************************************************************************************************************************************\
                  /*************************************************************************************************************************************************\
                 /***************************************************************************************************************************************************\
                /*****************************************************************************************************************************************************\
          /*****************************************************************************************************************************************************************\
         /*******************************************************************************************************************************************************************\
        /******************************************************************************|||||||||******************************************************************************\
       /*******************************************************************************|||||||||*******************************************************************************\
      /********************************************************************************|||||||||********************************************************************************\
     /*********************************************************************************|||||||||*********************************************************************************\
    /**********************************************************************************|||||||$|**********************************************************************************\
   /***********************************************************************************|||||||||***********************************************************************************\
  /************************************************************************************|||||||||************************************************************************************\
 /*************************************************************************************|||||||||*************************************************************************************\
/**************************************************************************************|||||||||**************************************************************************************\
☁  resources [master] ⚡  ./sastantua 10
                                                                                                            /*\
                                                                                                           /***\
                                                                                                          /*****\
                                                                                                       /***********\
                                                                                                      /*************\
                                                                                                     /***************\
                                                                                                    /*****************\
                                                                                                 /***********************\
                                                                                                /*************************\
                                                                                               /***************************\
                                                                                              /*****************************\
                                                                                             /*******************************\
                                                                                         /***************************************\
                                                                                        /*****************************************\
                                                                                       /*******************************************\
                                                                                      /*********************************************\
                                                                                     /***********************************************\
                                                                                    /*************************************************\
                                                                                /*********************************************************\
                                                                               /***********************************************************\
                                                                              /*************************************************************\
                                                                             /***************************************************************\
                                                                            /*****************************************************************\
                                                                           /*******************************************************************\
                                                                          /*********************************************************************\
                                                                     /*******************************************************************************\
                                                                    /*********************************************************************************\
                                                                   /***********************************************************************************\
                                                                  /*************************************************************************************\
                                                                 /***************************************************************************************\
                                                                /*****************************************************************************************\
                                                               /*******************************************************************************************\
                                                              /*********************************************************************************************\
                                                         /*******************************************************************************************************\
                                                        /*********************************************************************************************************\
                                                       /***********************************************************************************************************\
                                                      /*************************************************************************************************************\
                                                     /***************************************************************************************************************\
                                                    /*****************************************************************************************************************\
                                                   /*******************************************************************************************************************\
                                                  /*********************************************************************************************************************\
                                                 /***********************************************************************************************************************\
                                           /***********************************************************************************************************************************\
                                          /*************************************************************************************************************************************\
                                         /***************************************************************************************************************************************\
                                        /*****************************************************************************************************************************************\
                                       /*******************************************************************************************************************************************\
                                      /*********************************************************************************************************************************************\
                                     /***********************************************************************************************************************************************\
                                    /*************************************************************************************************************************************************\
                                   /***************************************************************************************************************************************************\
                                  /*****************************************************************************************************************************************************\
                            /*****************************************************************************************************************************************************************\
                           /*******************************************************************************************************************************************************************\
                          /*********************************************************************************************************************************************************************\
                         /***********************************************************************************************************************************************************************\
                        /*************************************************************************************************************************************************************************\
                       /***************************************************************************************************************************************************************************\
                      /*****************************************************************************************************************************************************************************\
                     /*******************************************************************************************************************************************************************************\
                    /*********************************************************************************************************************************************************************************\
                   /***********************************************************************************************************************************************************************************\
                  /*************************************************************************************************************************************************************************************\
           /***************************************************************************************************************************************************************************************************\
          /*****************************************************************************************************************************************************************************************************\
         /*******************************************************************************************************************************************************************************************************\
        /************************************************************************************************|||||||||************************************************************************************************\
       /*************************************************************************************************|||||||||*************************************************************************************************\
      /**************************************************************************************************|||||||||**************************************************************************************************\
     /***************************************************************************************************|||||||||***************************************************************************************************\
    /****************************************************************************************************|||||||$|****************************************************************************************************\
   /*****************************************************************************************************|||||||||*****************************************************************************************************\
  /******************************************************************************************************|||||||||******************************************************************************************************\
 /*******************************************************************************************************|||||||||*******************************************************************************************************\
/********************************************************************************************************|||||||||********************************************************************************************************\
```
