<!-- =========================================================================================
                                     HEADER SECTION
     ========================================================================================= -->
<div align="center">

  # Artificial Intelligence and Soft Computing Laboratory

  ### CSL703 · Semester VII · Computer Engineering

  [![Curated by](https://img.shields.io/badge/Curated%20by-Amey%20Thakur-blue.svg)](https://github.com/Amey-Thakur)
  [![Documents](https://img.shields.io/badge/Documents-10-yellowgreen.svg)](#experiment-1-problem-statement-formulation)
  [![Language](https://img.shields.io/badge/Language-Python%20%7C%20PROLOG%20%7C%20C%20%7C%20MATLAB-orange.svg)](./)
  [![Type](https://img.shields.io/badge/Type-PDF%20%7C%20DOCX-blueviolet.svg)](./)

  **A comprehensive collection of laboratory experiments for Artificial Intelligence and Soft Computing, covering search strategies, knowledge representation, neural networks, fuzzy logic, and genetic algorithms.**

  ---

  **[How to Use](#how-to-use)** &nbsp;·&nbsp; **[Learning Path](#learning-path)** &nbsp;·&nbsp; **[Experiment 1](#experiment-1-problem-statement-formulation)** &nbsp;·&nbsp; **[Experiment 2](#experiment-2-prolog-programming)** &nbsp;·&nbsp; **[Experiment 3](#experiment-3-uninformed-search)** &nbsp;·&nbsp; **[Experiment 4](#experiment-4-informed-search)** &nbsp;·&nbsp; **[Experiment 5](#experiment-5-classification-problem)** &nbsp;·&nbsp; **[Experiment 6](#experiment-6-fuzzy-relations)** &nbsp;·&nbsp; **[Experiment 7](#experiment-7-fuzzy-controller)** &nbsp;·&nbsp; **[Experiment 8](#experiment-8-mcculloch-pitts-neuron)** &nbsp;·&nbsp; **[Experiment 9](#experiment-9-kohonen-som)** &nbsp;·&nbsp; **[Experiment 10](#experiment-10-case-study)**

</div>

---

> [!TIP]
> **Multi-Language Laboratory**: This laboratory utilizes a diverse set of languages. **PROLOG** is used for logic programming, **C/C++** for search strategy implementation flexibility, **Python** for modern AI algorithms, and **MATLAB** for soft computing simulations. Ensure you have the corresponding environments set up.

> [!WARNING]
> **Code Compatibility**: Some C programs may require specific compiler flags depending on your environment. For MATLAB files (renamed to `.m.txt` for safe storage), allow them to act as standard scripts. PROLOG files (`.pl`) require a SWI-Prolog interpreter.

---

<!-- =========================================================================================
                                     HOW TO USE SECTION
     ========================================================================================= -->
## How to Use

### Running PROLOG Programs
1. **Install** SWI-Prolog suitable for your OS.
2. **Navigate** to the experiment folder.
3. **Run** the interpreter with the file.

**Example:**
```bash
cd "AISC Lab/Experiment-2"
swipl -s Family_Tree_Concrete.pl
```

### Running C Programs
1. **Compile** the C program using GCC.
2. **Execute** the binary.

**Example:**
```bash
cd "AISC Lab/Experiment-3"
gcc Uninformed_Search_BFS.c -o bfs
./bfs
```

### Running Python Scripts
**Environment Setup:**
Ensure **Python 3.x** is installed.

**Execution:**
```bash
cd "AISC Lab/Experiment-4"
python Informed_Search_AStar.py
```

### Running MATLAB Programs
1. **Open** the `.m.txt` or `.m` file in MATLAB.
2. **Run** the script using `F5` or the command window.

**Example:**
```bash
cd "AISC Lab/Experiment-9"
matlab -r "run('Kohonen_SOM.m.txt')"
```

### Laboratory Reports
Each experiment includes comprehensive PDF reports covering:
- **Aim**: The specific AI/SC objective.
- **Theory**: Theoretical background of the algorithm.
- **Implementation**: Code explanation, flowcharts, and output screenshots.
- Use these reports as a reference for structuring your own lab submissions.

---

<!-- =========================================================================================
                                     LEARNING PATH SECTION
     ========================================================================================= -->
## Learning Path

### Phase 1: Foundations & Logic
Understanding the basics of intelligent agents and logic programming.
- **Experiment 1**: Define AI problem statements and PEAS descriptors.
- **Experiment 2**: Master Logic Programming using PROLOG (Family Tree).

### Phase 2: Search Strategies
Solving problems through state-space search.
- **Experiment 3**: Implement Uninformed Search (BFS, DFS).
- **Experiment 4**: Implement Informed Search (A* Algorithm).
- **Experiment 5**: Apply optimization methods to classification problems.

### Phase 3: Fuzzy Logic & Soft Computing
Handling uncertainty and vagueness.
- **Experiment 6**: Compute Fuzzy Relations (Max-Min, Max-Product).
- **Experiment 7**: Design a Fuzzy Logic Controller.

### Phase 4: Neural Networks
Simulating biological neural systems.
- **Experiment 8**: Model a McCulloch-Pitts Neuron.
- **Experiment 9**: Implement Unsupervised Learning with Kohonen SOM.
- **Experiment 10**: Explore Hybrid Neuro-Fuzzy Systems (Case Study).

---

<!-- =========================================================================================
                                     EXPERIMENT 1
     ========================================================================================= -->
## Experiment 1: Problem Statement Formulation

Identify a problem statement relevant to AI and describe its PEAS Descriptors with its Properties.

**Date:** July 27, 2021

| # | Document | Description | Link |
|:-:|:---|:---|:-:|
| — | Lab Report (PDF) | Detailed experiment report | [View](Experiment-1/AMEY_B-50_AI&SC_EXPERIMENT-1.pdf) |
| — | Lab Report (DOCX) | Editable report file | [Download](Experiment-1/AMEY_B-50_AI&SC_EXPERIMENT-1.docx) |

---

<!-- =========================================================================================
                                     EXPERIMENT 2
     ========================================================================================= -->
## Experiment 2: PROLOG Programming

A case study on Basic Programming in PROLOG and Develop a program to implement a family tree.

**Date:** August 03, 2021

| # | Program | Description | Source Code |
|:-:|:---|:---|:-:|
| 1 | Family_Tree_Abstract.pl | Knowledge base for basic family relationships (Abstract) | [View](Experiment-2/Family_Tree_Abstract.pl) |
| 2 | Family_Tree_Concrete.pl | Knowledge base for extended family relationships (Concrete) | [View](Experiment-2/Family_Tree_Concrete.pl) |
| — | Lab Report (PDF) | Detailed experiment report | [View](Experiment-2/AMEY_B-50_AI&SC_EXPERIMENT-2.pdf) |
| — | Lab Report (DOCX) | Editable report file | [Download](Experiment-2/AMEY_B-50_AI_SC_EXPERIMENT-2.docx) |

---

<!-- =========================================================================================
                                     EXPERIMENT 3
     ========================================================================================= -->
## Experiment 3: Uninformed Search

To Implement uninformed search methods using C or Java.

**Date:** August 10, 2021

| # | Program | Description | Source Code |
|:-:|:---|:---|:-:|
| 1 | Uninformed_Search_BFS.c | Implementation of Breadth-First Search (BFS) | [View](Experiment-3/Uninformed_Search_BFS.c) |
| 2 | Uninformed_Search_DFS.c | Implementation of Depth-First Search (DFS) | [View](Experiment-3/Uninformed_Search_DFS.c) |
| — | Lab Report (PDF) | Detailed experiment report | [View](Experiment-3/AMEY_B-50_AI&SC_EXPERIMENT-3.pdf) |
| — | Lab Report (DOCX) | Editable report file | [Download](Experiment-3/AMEY_B-50_AI_SC_EXPERIMENT-3.docx) |

---

<!-- =========================================================================================
                                     EXPERIMENT 4
     ========================================================================================= -->
## Experiment 4: Informed Search

To Implement informed A* search methods using C or Java.

**Date:** August 20, 2021

| # | Program | Description | Source Code |
|:-:|:---|:---|:-:|
| 1 | Informed_Search_AStar.py | Implementation of A* Algorithm | [View](Experiment-4/Informed_Search_AStar.py) |
| — | Lab Report (PDF) | Detailed experiment report | [View](Experiment-4/AMEY_B-50_AI&SC_EXPERIMENT-4.pdf) |
| — | Lab Report (DOCX) | Editable report file | [Download](Experiment-4/AMEY_B-50_AI_SC_EXPERIMENT-4.docx) |

---

<!-- =========================================================================================
                                     EXPERIMENT 5
     ========================================================================================= -->
## Experiment 5: Classification Problem

Identify the Classification problem and create a Knowledge database for that problem and apply appropriate search methods for optimization.

**Date:** August 24, 2021

| # | Resource | Description | Link |
|:-:|:---|:---|:-:|
| 1 | Flowers.arff | Weka Dataset - Flower Classification | [View](Experiment-5/Flowers.arff) |
| 2 | Model | Learned Models Directory | [View](Experiment-5/Model) |
| 3 | Output | Classification Results Directory | [View](Experiment-5/Output) |
| — | Lab Report (PDF) | Detailed experiment report | [View](Experiment-5/AMEY_B-50_AI&SC_EXPERIMENT-5.pdf) |
| — | Lab Report (DOCX) | Editable report file | [Download](Experiment-5/AMEY_B-50_AI_SC_EXPERIMENT-5.docx) |

---

<!-- =========================================================================================
                                     EXPERIMENT 6
     ========================================================================================= -->
## Experiment 6: Fuzzy Relations

To implement a program to calculate cartesian product on fuzzy relation using 1. Max-Min and 2. Max-Product composition.

**Date:** September 21, 2021

| # | Program | Description | Source Code |
|:-:|:---|:---|:-:|
| 1 | Fuzzy_Relations_Composition.c | Fuzzy Relations Composition (Max-Min & Max-Product) | [View](Experiment-6/Fuzzy_Relations_Composition.c) |
| — | Lab Report (PDF) | Detailed experiment report | [View](Experiment-6/AMEY_B-50_AI&SC_EXPERIMENT-6.pdf) |
| — | Lab Report (DOCX) | Editable report file | [Download](Experiment-6/AMEY_B-50_AI_SC_EXPERIMENT-6.docx) |

---

<!-- =========================================================================================
                                     EXPERIMENT 7
     ========================================================================================= -->
## Experiment 7: Fuzzy Controller

To Implement Fuzzy-Controller.

**Date:** October 02, 2021

| # | Program | Description | Source Code |
|:-:|:---|:---|:-:|
| 1 | Fuzzy_Controller.m.txt | Fuzzy Logic Controller Implementation (MATLAB) | [View](Experiment-7/Fuzzy_Controller.m.txt) |
| — | Lab Report (PDF) | Detailed experiment report | [View](Experiment-7/AMEY_B-50_AI&SC_EXPERIMENT-7.pdf) |
| — | Lab Report (DOCX) | Editable report file | [Download](Experiment-7/AMEY_B-50_AI_SC_EXPERIMENT-7.docx) |

---

<!-- =========================================================================================
                                     EXPERIMENT 8
     ========================================================================================= -->
## Experiment 8: McCulloch Pitts Neuron

To implement McCulloch Pitts Neuron Model for AND/OR functions.

**Date:** October 05, 2021

| # | Program | Description | Source Code |
|:-:|:---|:---|:-:|
| 1 | McCulloch_Pitts_Neuron.py | McCulloch Pitts Neuron Model for AND/OR | [View](Experiment-8/McCulloch_Pitts_Neuron.py) |
| 2 | McCulloch_Pitts_Neuron.ipynb | Interactive Jupyter Notebook | [View](Experiment-8/McCulloch_Pitts_Neuron.ipynb) |
| — | Lab Report (PDF) | Detailed experiment report | [View](Experiment-8/AMEY_B-50_AI&SC_EXPERIMENT-8.pdf) |
| — | Lab Report (DOCX) | Editable report file | [Download](Experiment-8/AMEY_B-50_AI_SC_EXPERIMENT-8.docx) |

---

<!-- =========================================================================================
                                     EXPERIMENT 9
     ========================================================================================= -->
## Experiment 9: Kohonen SOM

To Implement Kohonen self-organizing Map- un-supervised learning algorithm.

**Date:** October 06, 2021

| # | Program | Description | Source Code |
|:-:|:---|:---|:-:|
| 1 | Kohonen_SOM.m.txt | Kohonen Self-Organizing Map Implementation (MATLAB) | [View](Experiment-9/Kohonen_SOM.m.txt) |
| — | Lab Report (PDF) | Detailed experiment report | [View](Experiment-9/AMEY_B-50_AI&SC_EXPERIMENT-9.pdf) |
| — | Lab Report (DOCX) | Editable report file | [Download](Experiment-9/AMEY_B-50_AI_SC_EXPERIMENT-9.docx) |

---

<!-- =========================================================================================
                                     EXPERIMENT 10
     ========================================================================================= -->
## Experiment 10: Case Study

<div align="center">

  ### 🧠 [Neuro-Fuzzy: Artificial Neural Networks & Fuzzy Logic](https://scholar.google.com/citations?view_op=view_citation&hl=en&user=0inooPgAAAAJ&citation_for_view=0inooPgAAAAJ:hqOjcs7Dif8C)

  **Design and Implementation of a Neuro-Fuzzy System using Artificial Neural Networks and Fuzzy Logic**

  [![Project](https://img.shields.io/badge/Project-Case%20Study-purple.svg)](Experiment-10/AISC_EXPERIMENT_10_B-28_B-31_B-50.pdf)
  [![Stack](https://img.shields.io/badge/Stack-Python%20%7C%20MATLAB-blue.svg)](Experiment-10/AISC_EXPERIMENT_10_B-28_B-31_B-50.pdf)
  [![Status](https://img.shields.io/badge/Status-Completed-brightgreen.svg)](Experiment-10/AISC_EXPERIMENT_10_B-28_B-31_B-50.pdf)

</div>

<div align="center">

  #### 👥 Authors
  | <img src="https://github.com/Amey-Thakur.png" width="150" alt="Amey Thakur"><br>[**Amey Thakur**](https://github.com/Amey-Thakur) | <img src="https://github.com/Karan-Dhiman.png" width="150" alt="Karan Dhiman"><br>[**Karan Dhiman**](https://github.com/Karan-Dhiman) |
  | :---: | :---: |

</div>

> [!IMPORTANT]
> ### 🤝🏻 Special Acknowledgement
> *Special thanks to [Karan Dhiman](https://github.com/Karan-Dhiman) for his meaningful contributions, guidance, and support that helped shape this work.*

#### Project Overview

A hybrid Neuro-Fuzzy system developed as a case study for the Artificial Intelligence and Soft Computing Lab. This system integrates the learning capabilities of Artificial Neural Networks with the reasoning power of Fuzzy Logic to create a robust model for pattern recognition and decision making. By combining these paradigms, the project demonstrates how to handle complex, non-linear data processing tasks effectively.

> [!NOTE]
> **Research Impact**: This project was published as a research paper in **International Journal for Research in Applied Science & Engineering Technology (IJRASET)** (Volume 9, Issue IX) and is also available as a preprint on **viXra**.
> - [Preprint @viXra](https://vixra.org/abs/2109.0047)
> - [Published Paper @IJRASET](https://doi.org/10.22214/ijraset.2021.37930)

**Date:** October 22, 2021

#### Resources

| # | Document | Description | Link |
|:-:|:---|:---|:-:|
| 1 | **Individual Report** | Individual Experiment Report | [View](Experiment-10/AMEY_B-50_AI_SC_EXPERIMENT-10.pdf) |
| 2 | **Case Study Report** | Detailed documentation and system design | [View](Experiment-10/AISC_EXPERIMENT_10_B-28_B-31_B-50.pdf) |
| 3 | **Presentation** | Visual overview of the development lifecycle | [View](Experiment-10/AISC_EXPERIMENT_10_PPT.pdf) |
| 4 | **Research Paper** | Neuro-Fuzzy: Artificial Neural Networks & Fuzzy Logic | [View](Experiment-10/Neuro-Fuzzy_Artificial%20Neural%20Networks_&_Fuzzy%20Logic.pdf) |
| 5 | **ResearchGate** | Research paper available on ResearchGate | [View](https://www.researchgate.net/publication/354402722_Neuro-Fuzzy_Artificial_Neural_Networks_Fuzzy_Logic) |
| — | **Lab Report (DOCX)** | Editable report file | [Download](Experiment-10/AMEY_B-50_AI_SC_EXPERIMENT-10.docx) |

---

<!-- =========================================================================================
                                     FOOTER SECTION
     ========================================================================================= -->
<div align="center">

  <!-- Footer Navigation -->
  **[↑ Back to Top](#artificial-intelligence-and-soft-computing-laboratory)**

  **[How to Use](#how-to-use)** &nbsp;·&nbsp; **[Learning Path](#learning-path)** &nbsp;·&nbsp; **[Experiment 1](#experiment-1-problem-statement-formulation)** &nbsp;·&nbsp; **[Experiment 2](#experiment-2-prolog-programming)** &nbsp;·&nbsp; **[Experiment 3](#experiment-3-uninformed-search)** &nbsp;·&nbsp; **[Experiment 4](#experiment-4-informed-search)** &nbsp;·&nbsp; **[Experiment 5](#experiment-5-classification-problem)** &nbsp;·&nbsp; **[Experiment 6](#experiment-6-fuzzy-relations)** &nbsp;·&nbsp; **[Experiment 7](#experiment-7-fuzzy-controller)** &nbsp;·&nbsp; **[Experiment 8](#experiment-8-mcculloch-pitts-neuron)** &nbsp;·&nbsp; **[Experiment 9](#experiment-9-kohonen-som)** &nbsp;·&nbsp; **[Experiment 10](#experiment-10-case-study)**

  <br>

  **[🏠 Back to Main Repository](../)**

</div>

---

<div align="center">

  ### [Artificial Intelligence and Soft Computing and Artificial Intelligence and Soft Computing Lab](https://github.com/Amey-Thakur/ARTIFICIAL-INTELLIGENCE-AND-SOFT-COMPUTING-AND-ARTIFICIAL-INTELLIGENCE-AND-SOFT-COMPUTING-LAB)

  **CSL703 · Semester VII · Computer Engineering**

  *University of Mumbai · Curated by [Amey Thakur](https://github.com/Amey-Thakur)*

</div>
