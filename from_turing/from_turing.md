# The Complete AI Papers Curriculum
## 935 Unique Papers + Ilya Sutskever's Top 30

**Total Papers: 935 curated + 30 Ilya additions** | **All with Implementation Tasks**

> "If you really learn all of these, you'll know 90% of what matters today." — Ilya Sutskever

---

## How to Use This Document

1. **Read** the abstract/introduction via the provided link.
2. **Complete** the implementation task.
3. **Optionally** read the full paper after implementation.

Tasks marked **[CORE]** are essential milestones. Papers in the **[ILYA]** section are from Ilya Sutskever's personally recommended reading list given to John Carmack.

---

## ⭐ ILYA SUTSKEVER'S TOP 30 — Start Here

*Ilya Sutskever gave John Carmack this list and said: "If you really learn all of these, you'll know 90% of what matters today." These are the foundational papers every serious AI practitioner should know.*

| # | Paper | Year | Tags | 🔗 Link | 🔧 What to Implement |
|---|-------|------|------|---------|---------------------|
| I-1 | The First Law of Complexodynamics — Scott Aaronson | 2011 | [FOUND] | [Link](https://scottaaronson.blog/?p=762) | Write a short essay connecting Kolmogorov complexity to why LLMs seem "interesting" rather than random or trivial. |
| I-2 | The Unreasonable Effectiveness of Recurrent Neural Networks — Karpathy | 2015 | [DL] | [Link](https://karpathy.github.io/2015/05/21/rnn-effectiveness/) | **[CORE]** Train a char-RNN on Shakespeare; generate text at different temperatures and observe quality changes. |
| I-3 | Understanding LSTM Networks — Olah | 2015 | [DL] | [Link](https://colah.github.io/posts/2015-08-Understanding-LSTMs/) | Implement an LSTM cell from scratch in NumPy; verify gate outputs against PyTorch's `nn.LSTMCell`. |
| I-4 | Recurrent Neural Network Regularization — Zaremba, Sutskever & Vinyals | 2014 | [DL][NLP] | [Link](https://arxiv.org/abs/1409.2329) | Train an LSTM language model on PTB with and without the proposed dropout; compare perplexity curves. |
| I-5 | Keeping Neural Networks Simple by Minimizing the Description Length of the Weights — Hinton & van Camp | 1993 | [DL] | [Link](https://www.cs.toronto.edu/~hinton/absps/colt93.pdf) | Add Gaussian weight noise to an MLP and measure the effect on validation loss vs. standard weight decay. |
| I-6 | Pointer Networks — Vinyals, Fortunato & Jaitly | 2015 | [DL][NLP] | [Link](https://arxiv.org/abs/1506.03134) | Implement a Pointer Network for sorting variable-length integer sequences; test generalization to lengths unseen in training. |
| I-7 | ImageNet Classification with Deep Convolutional Neural Networks (AlexNet) — Krizhevsky, Sutskever & Hinton | 2012 | [DL][VIS] | [Link](https://papers.nips.cc/paper/2012/hash/c399862d3b9d6b76c8436e924a68c45b-Abstract.html) | **[CORE]** Implement AlexNet in PyTorch; train on CIFAR-10; verify that removing any conv layer degrades accuracy. |
| I-8 | Order Matters: Sequence to Sequence for Sets — Vinyals, Bengio & Kudlur | 2015 | [DL][NLP] | [Link](https://arxiv.org/abs/1511.06391) | Train a seq2seq model to sort numbers; compare performance with natural vs. reversed vs. sorted input order. |
| I-9 | GPipe: Easy Scaling with Micro-Batch Pipeline Parallelism — Huang et al. | 2019 | [SYS] | [Link](https://arxiv.org/abs/1811.06965) | Implement naive pipeline parallelism across 2 GPUs (or simulated on CPU); measure throughput vs. single-device baseline. |
| I-10 | Deep Residual Learning for Image Recognition (ResNet) — He et al. | 2015 | [DL][VIS] | [Link](https://arxiv.org/abs/1512.03385) | **[CORE]** Build ResNet-18 from scratch in PyTorch; ablate the skip connections and show accuracy collapse on CIFAR-10. |
| I-11 | Multi-Scale Context Aggregation by Dilated Convolutions — Yu & Koltun | 2015 | [VIS] | [Link](https://arxiv.org/abs/1511.07122) | Implement dilated convolution layers; visualize the receptive field growth at dilation rates 1, 2, 4, 8. |
| I-12 | Neural Message Passing for Quantum Chemistry — Gilmer et al. | 2017 | [GRAPH] | [Link](https://arxiv.org/abs/1704.01212) | Implement an MPNN for a toy molecular graph dataset; predict a single property (e.g., atom count or ring presence). |
| I-13 | Attention Is All You Need (Transformer) — Vaswani et al. | 2017 | [DL][NLP] | [Link](https://arxiv.org/abs/1706.03762) | **[CORE]** Implement the full Transformer (encoder + decoder) from scratch; train on a small copy task. |
| I-14 | Neural Machine Translation by Jointly Learning to Align and Translate — Bahdanau, Cho & Bengio | 2014 | [NLP][DL] | [Link](https://arxiv.org/abs/1409.0473) | **[CORE]** Add Bahdanau attention to an LSTM seq2seq model; visualize the alignment matrix on test examples. |
| I-15 | Identity Mappings in Deep Residual Networks — He et al. | 2016 | [DL][VIS] | [Link](https://arxiv.org/abs/1603.05027) | Implement pre-activation ResNet and compare convergence speed and final accuracy against original ResNet on CIFAR-100. |
| I-16 | A Simple Neural Network Module for Relational Reasoning — Santoro et al. | 2017 | [DL][REASON] | [Link](https://arxiv.org/abs/1706.01427) | Build a Relation Network and test it on the Sort-of-CLEVR dataset; compare with a plain CNN on relational questions. |
| I-17 | Variational Lossy Autoencoder — Chen, Kingma et al. | 2016 | [GEN][DL] | [Link](https://arxiv.org/abs/1611.02731) | Implement a VAE with an autoregressive decoder (PixelCNN); visualize how the latent code captures global vs. local structure. |
| I-18 | Relational Recurrent Neural Networks — Santoro et al. | 2018 | [DL][REASON] | [Link](https://arxiv.org/abs/1806.01822) | Implement the Relational Memory Core (multi-head attention over memory slots); test on a simple relational reasoning sequence task. |
| I-19 | Quantifying the Rise and Fall of Complexity in Closed Systems: The Coffee Automaton — Aaronson, Carroll & Ouellette | 2014 | [FOUND] | [Link](https://arxiv.org/abs/1405.6903) | Simulate the coffee automaton; measure apparent complexity over time using gzip file size as a proxy. |
| I-20 | Neural Turing Machines — Graves, Wayne & Danihelka | 2014 | [DL][REASON] | [Link](https://arxiv.org/abs/1410.5401) | Implement a simplified NTM (content + location addressing) and train on the copy task; show generalization to longer sequences. |
| I-21 | Deep Speech 2: End-to-End Speech Recognition in English and Mandarin — Amodei et al. | 2015 | [SPEECH][DL] | [Link](https://arxiv.org/abs/1512.02595) | Use a pre-trained DeepSpeech model to transcribe audio samples; measure WER on a small test set. |
| I-22 | Scaling Laws for Neural Language Models — Kaplan, McCandlish et al. | 2020 | [LLM][FOUND] | [Link](https://arxiv.org/abs/2001.08361) | Train language models at 3+ different parameter counts; plot loss vs. compute and fit a power law; estimate the optimal model size for a fixed budget. |
| I-23 | A Tutorial Introduction to the Minimum Description Length Principle — Grünwald | 2004 | [FOUND][ML] | [Link](https://arxiv.org/abs/math/0406077) | Implement the two-part MDL code for polynomial regression; compare model selection with BIC on synthetic data. |
| I-24 | Machine Super Intelligence — Shane Legg | 2008 | [FOUND][ALIGN] | [Link](https://www.vetta.org/documents/Machine_Super_Intelligence.pdf) | Read the dissertation; write a 1-page comparison of Legg's intelligence definition against current LLM benchmarks (MMLU, ARC, etc.). |
| I-25 | Kolmogorov Complexity and Algorithmic Randomness — Shen, Uspensky & Vereshchagin | 2017 | [FOUND] | [Link](https://www.lirmm.fr/~ashen/kolmbook-eng-scan.pdf) | Implement a simple compression-based distance metric (NCD) between text samples; cluster a small dataset by genre. |
| I-26 | CS231n: Convolutional Neural Networks for Visual Recognition — Karpathy et al. | 2015 | [VIS][DL] | [Link](https://cs231n.github.io) | **[CORE]** Complete Assignments 1, 2, and 3 in full; ensure backprop and training loop are implemented by hand. |
| I-27 | The Annotated Transformer — Rush | 2018 | [NLP][DL] | [Link](https://nlp.seas.harvard.edu/2018/04/03/attention.html) | **[CORE]** Code through every line of the annotated implementation; reproduce the WMT training curve on a small dataset. |
| I-28 | Better & Faster Large Language Models via Multi-token Prediction — Gloeckle et al. | 2024 | [LLM][SYS] | [Link](https://arxiv.org/abs/2404.19737) | Modify a small GPT to add 4 output heads; train on WikiText-2 and compare inference speed and next-token perplexity. |
| I-29 | Retrieval-Augmented Generation for Knowledge-Intensive NLP Tasks (RAG) — Lewis et al. | 2020 | [LLM][NLP] | [Link](https://arxiv.org/abs/2005.11401) | **[CORE]** Build a Q&A system over a local document corpus using FAISS + a small LLM; measure answer accuracy with and without retrieval. |
| I-30 | Zephyr: Direct Distillation of LM Alignment — Tunstall et al. | 2023 | [LLM][ALIGN] | [Link](https://arxiv.org/abs/2310.16944) | Fine-tune a 7B model with dSFT then DPO on a small preference dataset; evaluate on MT-Bench before and after alignment. |

---

## 🟢 STAGE 1 — Foundations & Classical Machine Learning (Papers 1–250)

| # | Paper | Year | Tags | 🔗 Link | 🔧 What to Implement |
|---|-------|------|------|---------|---------------------|
| 1 | A Logical Calculus of Ideas Immanent in Nervous Activity — McCulloch & Pitts | 1943 | [FOUND] | [Link](https://www.cs.cmu.edu/~./epxing/Class/10715/reading/McCulloch.and.Pitts.pdf) | Write Python functions for AND, OR, NOT using threshold activation; show XOR needs a hidden layer. |
| 2 | Computing Machinery and Intelligence — Turing | 1950 | [FOUND] | [Link](https://www.csee.umbc.edu/courses/471/papers/turing.pdf) | Write a one-page reflection on whether modern LLMs pass the Turing Test and why. |
| 3 | Some Studies in Machine Learning Using the Game of Checkers — Samuel | 1952 | [ML][RL] | [Link](https://ieeexplore.ieee.org/document/5392560) | **[CORE]** Implement minimax with alpha-beta pruning for Tic-Tac-Toe; measure node visits before and after pruning. |
| 5 | The Logic Theory Machine — Newell & Simon | 1956 | [FOUND] | [Link](https://dl.acm.org/doi/10.1145/800259.808896) | Write a simple propositional theorem prover using resolution. |
| 7 | A General Problem-Solving Program (GPS) — Newell, Shaw & Simon | 1959 | [FOUND] | [Link](https://bitsavers.org/pdf/rand/ipl/P-1584_Report_On_A_General_Problem-Solving_Program_Feb59.pdf) | Implement means-ends analysis for the Tower of Hanoi. |
| 8 | The Perceptron — Rosenblatt | 1958 | [DL] | [Link](https://psycnet.apa.org/record/1959-09865-001) | **[CORE]** Build a single-layer perceptron from scratch in NumPy; train on Iris (2 classes) and plot the decision boundary. |
| 10 | Fuzzy Sets — Zadeh | 1965 | [ML] | [Link](https://www.sciencedirect.com/science/article/pii/S001999586590241X) | Implement a fuzzy logic thermostat controller (temperature → fan speed). |
| 11 | ELIZA — Weizenbaum | 1966 | [NLP] | [Link](https://dl.acm.org/doi/10.1145/365153.365168) | **[CORE]** Build a regex-based chatbot that mirrors user input using pattern-matching rules. |
| 13 | Perceptrons: An Introduction to Computational Geometry — Minsky & Papert | 1969 | [DL] | [Link](https://mitpress.mit.edu/9780262630221/perceptrons/) | Implement a 2-layer MLP to solve XOR; verify single-layer perceptron fails. |
| 16 | Neural Networks and Physical Systems with Emergent Collective Computational Abilities (Hopfield Networks) — Hopfield | 1982 | [DL] | [Link](https://www.pnas.org/doi/10.1073/pnas.79.8.2554) | Implement a Hopfield network for 5×5 binary pattern completion; measure storage capacity. |
| 17 | Learning Representations by Back-propagating Errors — Rumelhart, Hinton & Williams | 1986 | [DL] | [Link](https://www.nature.com/articles/323533a0) | **[CORE]** Implement backpropagation from scratch for a 2-layer MLP; train on XOR; verify gradients numerically. |
| 19 | A Statistical Approach to Machine Translation — Brown et al. | 1988 | [NLP] | [Link](https://dl.acm.org/doi/10.5555/92858.92860) | Implement IBM Model 1 word alignment on a tiny parallel corpus. |
| 20 | Learning to Predict by the Methods of Temporal Differences — Sutton | 1988 | [RL] | [Link](https://link.springer.com/article/10.1007/BF00115009) | **[CORE]** Implement TD(0) for a 5-state random walk; compare learning curves with Monte Carlo. |
| 21 | A Tutorial on Hidden Markov Models — Rabiner | 1989 | [NLP][SPEECH] | [Link](https://ieeexplore.ieee.org/document/18626) | **[CORE]** Implement the Viterbi algorithm for POS tagging; compare accuracy with a bigram baseline. |
| 22 | Handwritten Digit Recognition with a Back-Propagation Network — LeCun et al. | 1989 | [DL][VIS] | [Link](https://papers.nips.cc/paper_files/paper/1989/hash/53c3bce66e43be4f209556518c2fcb54-Abstract.html) | Train a 2-layer CNN on MNIST without any modern tricks; document what fails. |
| 25 | Eigenfaces for Recognition — Turk & Pentland | 1991 | [VIS] | [Link](https://www.cs.ucsb.edu/~mturk/Papers/mturk-CVPR91.pdf) | **[CORE]** Implement PCA-based Eigenfaces on the AT&T face dataset; plot top-20 eigenfaces. |
| 26 | The Recurrent Network and the Vanishing Gradient Problem — Bengio, Simard & Frasconi | 1994 | [DL] | [Link](https://ieeexplore.ieee.org/document/279181) | Train a vanilla RNN on a long-range dependency task; plot gradient norms over time steps. |
| 27 | A Training Algorithm for Optimal Margin Classifiers (SVM) — Boser, Guyon & Vapnik | 1992 | [ML] | [Link](https://dl.acm.org/doi/10.1145/130385.130401) | Implement hard-margin SVM using quadratic programming (cvxopt). |
| 28 | Support-Vector Networks — Cortes & Vapnik | 1995 | [ML] | [Link](https://link.springer.com/article/10.1007/BF00994018) | **[CORE]** Use `sklearn.svm.SVC` on MNIST (3 vs 8); visualize support vectors and margin. |
| 29 | A Decision-Theoretic Generalization of On-Line Learning and an Application to Boosting — Freund & Schapire | 1995 | [ML] | [Link](https://www.sciencedirect.com/science/article/pii/S002200009791504X) | **[CORE]** Implement AdaBoost with decision stumps from scratch; plot weak learner weights over rounds. |
| 30 | Long Short-Term Memory — Hochreiter & Schmidhuber | 1997 | [DL][NLP] | [Link](https://www.bioinf.jku.at/publications/older/2604.pdf) | **[CORE]** Implement LSTM forward pass in NumPy including all four gates; verify against PyTorch. |
| 31 | Reinforcement Learning: An Introduction — Sutton & Barto | 1998 | [RL][FOUND] | [Link](http://www.incompleteideas.net/book/the-book-2nd.html) | Implement multi-armed bandit algorithms (ε-greedy, UCB, gradient bandit); compare regret curves. |
| 32 | Gradient-Based Learning Applied to Document Recognition (LeNet-5) — LeCun et al. | 1998 | [DL][VIS] | [Link](https://ieeexplore.ieee.org/document/726791) | **[CORE]** Implement LeNet-5 in PyTorch; train on MNIST; plot feature maps from each conv layer. |
| 33 | Q-Learning — Watkins & Dayan | 1992 | [RL] | [Link](https://link.springer.com/article/10.1007/BF00992698) | **[CORE]** Implement tabular Q-learning for FrozenLake-v1; plot convergence of Q-values. |
| 34 | Simple Statistical Gradient-Following Algorithms for Connectionist Reinforcement Learning (REINFORCE) — Williams | 1992 | [RL][DL] | [Link](https://link.springer.com/article/10.1007/BF00992696) | Implement REINFORCE with a neural network policy for CartPole-v1. |
| 35 | Induction of Decision Trees — Quinlan | 1986 | [ML] | [Link](https://link.springer.com/article/10.1007/BF00116251) | **[CORE]** Implement ID3 from scratch on the Play Tennis dataset; visualize the resulting tree. |
| 36 | Gaussian Processes for Machine Learning — Rasmussen & Williams | 2006 | [ML] | [Link](https://gaussianprocess.org/gpml/) | Fit a GP regressor on 1D noisy data; plot mean prediction and confidence intervals. |
| 37 | The Elements of Statistical Learning — Hastie, Tibshirani & Friedman | 2001 | [ML][FOUND] | [Link](https://hastie.su.domains/ElemStatLearn/) | Implement k-fold cross-validation for model selection from scratch. |
| 40 | Principal Component Analysis — Wold, Esbensen & Geladi | 1987 | [ML] | [Link](https://www.sciencedirect.com/science/article/pii/0169743987800849) | **[CORE]** Implement PCA from scratch using SVD; project MNIST to 2D and plot class clusters. |
| 41 | A Neural Probabilistic Language Model — Bengio et al. | 2003 | [NLP][DL] | [Link](https://www.jmlr.org/papers/v3/bengio03a.html) | **[CORE]** Implement the feed-forward neural LM on a small text corpus; compare perplexity with n-gram baseline. |
| 42 | Latent Dirichlet Allocation (LDA) — Blei, Ng & Jordan | 2003 | [NLP][ML] | [Link](https://www.jmlr.org/papers/v3/blei03a.html) | **[CORE]** Use `gensim` to extract topics from 20 Newsgroups; visualize top words per topic. |
| 43 | BLEU: A Method for Automatic Evaluation of Machine Translation — Papineni et al. | 2002 | [NLP] | [Link](https://dl.acm.org/doi/10.3115/1073083.1073135) | Implement BLEU score calculation (1-gram to 4-gram) from scratch; verify on known reference translations. |
| 44 | Random Forests — Breiman | 2001 | [ML] | [Link](https://link.springer.com/article/10.1023/A:1010933404324) | **[CORE]** Train a Random Forest on Titanic; analyze feature importance and OOB error. |
| 45 | A Fast Learning Algorithm for Deep Belief Nets — Hinton, Osindero & Teh | 2006 | [DL] | [Link](https://www.cs.toronto.edu/~hinton/absps/fastnc.pdf) | Implement a Restricted Boltzmann Machine; train on MNIST and visualize reconstructions. |
| 46 | Reducing the Dimensionality of Data with Neural Networks — Hinton & Salakhutdinov | 2006 | [DL][GEN] | [Link](https://www.science.org/doi/10.1126/science.1127647) | Build an autoencoder for MNIST; visualize the 2D latent space with class labels. |
| 47 | Visualizing Data using t-SNE — van der Maaten & Hinton | 2008 | [ML] | [Link](https://jmlr.org/papers/v9/vandermaaten08a.html) | **[CORE]** Apply t-SNE to 5000 MNIST samples; compare different perplexity values. |
| 49 | Stacked Denoising Autoencoders — Vincent et al. | 2008 | [DL][GEN] | [Link](https://icml.cc/Conferences/2008/papers/592.pdf) | Train a denoising autoencoder on MNIST with Gaussian noise; visualize clean vs. corrupted vs. reconstructed. |
| 50 | A Unified Architecture for Natural Language Processing — Collobert & Weston | 2008 | [NLP][DL] | [Link](https://dl.acm.org/doi/10.1145/1390156.1390177) | Implement a multi-task CNN for POS tagging and NER with shared word embeddings. |
| 53 | Conditional Random Fields — Lafferty, McCallum & Pereira | 2001 | [NLP][ML] | [Link](https://dl.acm.org/doi/10.5555/645530.655813) | **[CORE]** Implement a linear-chain CRF for POS tagging using `sklearn-crfsuite`. |
| 56 | Gradient Boosting Machines — Friedman | 2001 | [ML] | [Link](https://projecteuclid.org/journals/annals-of-statistics/volume-29/issue-5/Greedy-function-approximation-A-gradient-boosting-machine/10.1214/aos/1013203451.full) | **[CORE]** Implement gradient boosting with regression trees from scratch; verify against `sklearn.GradientBoostingRegressor`. |
| 57 | Naive Bayes Text Classification — McCallum & Nigam | 1998 | [NLP][ML] | [Link](https://www.cs.cmu.edu/~knigam/papers/multinomial-aaaiws98.pdf) | **[CORE]** Build a spam classifier using `MultinomialNB` on the SMS spam dataset; report precision and recall. |
| 60 | Normalized Cuts and Image Segmentation — Shi & Malik | 2000 | [VIS] | [Link](https://ieeexplore.ieee.org/document/868688) | **[CORE]** Implement N-cut segmentation on synthetic 2D shapes using the eigendecomposition of the Laplacian. |
| 61 | Rectified Linear Units Improve Restricted Boltzmann Machines — Nair & Hinton | 2010 | [DL] | [Link](https://icml.cc/Conferences/2010/papers/432.pdf) | Train MLP with tanh vs. ReLU on MNIST; compare convergence speed and final accuracy. |
| 62 | Natural Language Processing (Almost) from Scratch — Collobert et al. | 2011 | [NLP][DL] | [Link](https://arxiv.org/abs/1103.0398) | Implement the SENNA architecture (window-based CNN) for POS tagging. |
| 63 | ImageNet Classification with Deep Convolutional Neural Networks (AlexNet) — Krizhevsky, Sutskever & Hinton | 2012 | [DL][VIS] | [Link](https://papers.nips.cc/paper/2012/hash/c399862d3b9d6b76c8436e924a68c45b-Abstract.html) | **[CORE]** Implement AlexNet in PyTorch; train on CIFAR-10; ablate each design choice (dropout, LRN, data augmentation). |
| 64 | Dropout: Preventing Co-Adaptation of Feature Detectors — Hinton et al. | 2012 | [DL] | [Link](https://arxiv.org/abs/1207.0580) | Train an overparameterized MLP with and without dropout; plot training vs. test accuracy curves. |
| 65 | Dropout: A Simple Way to Prevent Overfitting — Srivastava et al. | 2014 | [DL] | [Link](https://jmlr.org/papers/v15/srivastava14a.html) | Implement inverted dropout in the forward and backward pass manually in NumPy. |
| 66 | Efficient Estimation of Word Representations in Vector Space (Word2Vec) — Mikolov et al. | 2013 | [NLP] | [Link](https://arxiv.org/abs/1301.3781) | **[CORE]** Train Skip-gram with `gensim` on `text8`; find word analogies and plot 2D embeddings. |
| 67 | Distributed Representations of Words and Phrases — Mikolov et al. | 2013 | [NLP] | [Link](https://arxiv.org/abs/1310.4546) | Implement negative sampling manually; compare training speed with hierarchical softmax. |
| 68 | Playing Atari with Deep Reinforcement Learning — Mnih et al. | 2013 | [RL][DL] | [Link](https://arxiv.org/abs/1312.5602) | **[CORE]** Implement DQN for CartPole-v1; add experience replay and a target network; plot reward over episodes. |
| 69 | Auto-Encoding Variational Bayes (VAE) — Kingma & Welling | 2013 | [GEN][DL] | [Link](https://arxiv.org/abs/1312.6114) | **[CORE]** Build a VAE for MNIST; sample from the prior; interpolate between two latent codes. |
| 70 | Generative Adversarial Nets (GANs) — Goodfellow et al. | 2014 | [GEN][DL] | [Link](https://arxiv.org/abs/1406.2661) | **[CORE]** Implement DCGAN for MNIST; monitor discriminator vs. generator loss; visualize generated samples at each epoch. |
| 71 | Adam: A Method for Stochastic Optimization — Kingma & Ba | 2014 | [DL] | [Link](https://arxiv.org/abs/1412.6980) | **[CORE]** Implement Adam from scratch; compare convergence with SGD and RMSProp on a 2D non-convex surface. |
| 72 | Neural Machine Translation by Jointly Learning to Align and Translate — Bahdanau, Cho & Bengio | 2014 | [NLP][DL] | [Link](https://arxiv.org/abs/1409.0473) | **[CORE]** Add Bahdanau attention to a Seq2Seq model; visualize alignment heatmaps on a translation task. |
| 73 | Sequence to Sequence Learning with Neural Networks — Sutskever, Vinyals & Le | 2014 | [NLP][DL] | [Link](https://arxiv.org/abs/1409.3215) | **[CORE]** Build LSTM Seq2Seq for English→French on a small corpus; test reversed input encoding. |
| 74 | GloVe: Global Vectors for Word Representation — Pennington, Socher & Manning | 2014 | [NLP] | [Link](https://nlp.stanford.edu/pubs/glove.pdf) | Train GloVe on a small corpus; compare analogical reasoning accuracy with Word2Vec embeddings. |
| 76 | Recurrent Neural Network Regularization — Zaremba, Sutskever & Vinyals | 2014 | [NLP][DL] | [Link](https://arxiv.org/abs/1409.2329) | Train an LSTM language model with the proposed dropout on PTB; report perplexity vs. dropout rate. |
| 78 | Visualizing and Understanding Convolutional Networks (ZFNet) — Zeiler & Fergus | 2013 | [VIS][DL] | [Link](https://arxiv.org/abs/1311.2901) | Implement guided backpropagation; visualize max-activating patches for each filter. |
| 80 | Very Deep Convolutional Networks for Large-Scale Image Recognition (VGGNet) — Simonyan & Zisserman | 2014 | [DL][VIS] | [Link](https://arxiv.org/abs/1409.1556) | **[CORE]** Implement VGG16 in PyTorch; train on CIFAR-10; compare with AlexNet. |
| 81 | Going Deeper with Convolutions (GoogLeNet/Inception) — Szegedy et al. | 2014 | [DL][VIS] | [Link](https://arxiv.org/abs/1409.4842) | Implement an Inception module; build a simplified GoogLeNet and compare with VGG on parameter count. |
| 82 | Pointer Networks — Vinyals, Fortunato & Jaitly | 2015 | [DL][NLP] | [Link](https://arxiv.org/abs/1506.03134) | Implement Pointer Network for sorting variable-length sequences; test length generalization. |
| 83 | Show and Tell: A Neural Image Caption Generator — Vinyals et al. | 2014 | [VIS][NLP] | [Link](https://arxiv.org/abs/1411.4555) | Build an image captioning model (CNN encoder + LSTM decoder); compute BLEU-4 on COCO. |
| 84 | Learning Phrase Representations using RNN Encoder-Decoder — Cho et al. | 2014 | [NLP][DL] | [Link](https://arxiv.org/abs/1406.1078) | Implement a GRU-based Seq2Seq; compare with LSTM on the same translation task. |
| 86 | Spatial Transformer Networks — Jaderberg et al. | 2015 | [DL][VIS] | [Link](https://arxiv.org/abs/1506.02025) | Add a spatial transformer module to a CNN; visualize the learned transformations on MNIST. |
| 88 | Neural Turing Machines — Graves, Wayne & Danihelka | 2014 | [DL][REASON] | [Link](https://arxiv.org/abs/1410.5401) | Implement a simplified NTM for the copy task; show generalization to sequence lengths not seen during training. |
| 91 | Deep Residual Learning for Image Recognition (ResNet) — He et al. | 2015 | [DL][VIS] | [Link](https://arxiv.org/abs/1512.03385) | **[CORE]** Build ResNet-18 from scratch; compare convergence speed with a plain CNN of similar depth. |
| 92 | Batch Normalization: Accelerating Deep Network Training — Ioffe & Szegedy | 2015 | [DL] | [Link](https://arxiv.org/abs/1502.03167) | **[CORE]** Implement BatchNorm forward and backward pass from scratch; verify gradients numerically. |
| 94 | U-Net: Convolutional Networks for Biomedical Image Segmentation — Ronneberger, Fischer & Brox | 2015 | [VIS][DL] | [Link](https://arxiv.org/abs/1505.04597) | **[CORE]** Implement U-Net; train for binary segmentation on synthetic shapes; compute IoU. |
| 95 | Deep Speech 2: End-to-End Speech Recognition — Amodei et al. | 2015 | [SPEECH][DL] | [Link](https://arxiv.org/abs/1512.02595) | Use pre-trained DeepSpeech for transcription; measure WER on a small test set. |
| 96 | Faster R-CNN — Ren et al. | 2015 | [VIS] | [Link](https://arxiv.org/abs/1506.01497) | Use `detectron2` to run Faster R-CNN inference; measure FPS and mAP on a COCO subset. |
| 97 | Show, Attend and Tell — Xu et al. | 2015 | [VIS][NLP] | [Link](https://arxiv.org/abs/1502.03044) | Add soft visual attention to image captioning; visualize attention maps for each generated word. |
| 98 | Concrete Problems in AI Safety — Amodei et al. | 2016 | [ALIGN] | [Link](https://arxiv.org/abs/1606.06565) | Read the paper; propose a concrete mitigation for one of the five safety problems. |
| 99 | Mastering the Game of Go with Deep Neural Networks (AlphaGo) — Silver et al. | 2016 | [RL] | [Link](https://www.nature.com/articles/nature16961) | Implement simplified MCTS for Connect Four; add a value network trained by self-play. |
| 101 | Conditional Image Generation with PixelCNN Decoders — van den Oord et al. | 2016 | [GEN] | [Link](https://arxiv.org/abs/1606.05328) | Implement PixelCNN with masked convolutions; train on MNIST and generate class-conditional samples. |
| 103 | Identity Mappings in Deep Residual Networks — He et al. | 2016 | [DL][VIS] | [Link](https://arxiv.org/abs/1603.05027) | Implement pre-activation ResNet; compare convergence and final accuracy with original ResNet on CIFAR-100. |
| 104 | You Only Look Once (YOLO) — Redmon et al. | 2015 | [VIS] | [Link](https://arxiv.org/abs/1506.02640) | **[CORE]** Use YOLOv5 to detect objects in a webcam feed; measure FPS and visualize detections. |
| 106 | Asynchronous Methods for Deep Reinforcement Learning (A3C) — Mnih et al. | 2016 | [RL] | [Link](https://arxiv.org/abs/1602.01783) | Implement A3C with multiple parallel workers for CartPole; compare with single-worker A2C. |
| 107 | Continuous Control with Deep Reinforcement Learning (DDPG) — Lillicrap et al. | 2015 | [RL] | [Link](https://arxiv.org/abs/1509.02971) | Implement DDPG for Pendulum-v1; plot actor and critic loss curves. |
| 109 | Dueling Network Architectures — Wang et al. | 2015 | [RL] | [Link](https://arxiv.org/abs/1511.06581) | Modify DQN to use the dueling architecture; compare average Q-value estimates with standard DQN. |
| 110 | Prioritized Experience Replay — Schaul et al. | 2015 | [RL] | [Link](https://arxiv.org/abs/1511.05952) | Add PER to DQN; visualize the distribution of sampling probabilities over training. |
| 111 | Attention Is All You Need (Transformer) — Vaswani et al. | 2017 | [DL][NLP] | [Link](https://arxiv.org/abs/1706.03762) | **[CORE]** Implement the Transformer from scratch; train on a small copy task; verify attention patterns are diagonal. |
| 112 | Proximal Policy Optimization (PPO) — Schulman et al. | 2017 | [RL] | [Link](https://arxiv.org/abs/1707.06347) | **[CORE]** Implement PPO for LunarLander-v2; compare clipped objective vs. KL penalty variant. |
| 113 | Mastering Chess and Shogi by Self-Play (AlphaZero) — Silver et al. | 2017 | [RL] | [Link](https://arxiv.org/abs/1712.01815) | Implement self-play for Tic-Tac-Toe with MCTS; track Elo improvement over iterations. |
| 114 | Neural Discrete Representation Learning (VQ-VAE) — van den Oord et al. | 2017 | [GEN][DL] | [Link](https://arxiv.org/abs/1711.00937) | **[CORE]** Implement VQ-VAE for MNIST; visualize the learned codebook and latent space. |
| 116 | Densely Connected Convolutional Networks (DenseNet) — Huang et al. | 2016 | [DL][VIS] | [Link](https://arxiv.org/abs/1608.06993) | Implement DenseNet-121; compare parameter count and accuracy with ResNet-18. |
| 117 | MobileNets — Howard et al. | 2017 | [VIS][SYS] | [Link](https://arxiv.org/abs/1704.04861) | Implement depthwise separable convolution; count FLOPs and parameters vs. standard conv. |
| 120 | Wasserstein GAN — Arjovsky, Chintala & Bottou | 2017 | [GEN] | [Link](https://arxiv.org/abs/1701.07875) | Implement WGAN with gradient penalty; compare training stability with DCGAN on CIFAR-10. |
| 122 | Pix2Pix — Isola et al. | 2016 | [GEN][VIS] | [Link](https://arxiv.org/abs/1611.07004) | **[CORE]** Train Pix2Pix on the facades dataset; visualize generated images at each epoch. |
| 123 | CycleGAN — Zhu et al. | 2017 | [GEN][VIS] | [Link](https://arxiv.org/abs/1703.10593) | **[CORE]** Train CycleGAN for horse↔zebra translation; visualize cycle consistency. |
| 126 | Model-Agnostic Meta-Learning (MAML) — Finn, Abbeel & Levine | 2017 | [ML] | [Link](https://arxiv.org/abs/1703.03400) | Implement MAML for few-shot sine wave regression; compare inner-loop gradient steps. |
| 128 | Graph Attention Networks (GAT) — Veličković et al. | 2017 | [GRAPH] | [Link](https://arxiv.org/abs/1710.10903) | Implement a GAT layer; compare node classification accuracy with GCN on Cora. |
| 129 | Graph Convolutional Networks — Kipf & Welling | 2016 | [GRAPH] | [Link](https://arxiv.org/abs/1609.02907) | **[CORE]** Implement a 2-layer GCN for Cora node classification using PyG. |
| 131 | Layer Normalization — Ba, Kiros & Hinton | 2016 | [DL] | [Link](https://arxiv.org/abs/1607.06450) | Implement LayerNorm from scratch; compare with BatchNorm for an LSTM language model. |
| 132 | Deep Reinforcement Learning from Human Preferences — Christiano et al. | 2017 | [ALIGN][RL] | [Link](https://arxiv.org/abs/1706.03741) | Implement synthetic preference learning for a simple environment; train a reward model from pairwise comparisons. |
| 133 | Rainbow: Combining Improvements in Deep Reinforcement Learning — Hessel et al. | 2017 | [RL] | [Link](https://arxiv.org/abs/1710.02298) | Combine Double DQN, Dueling, and PER; compare with individual components on Atari. |
| 134 | MixUp — Zhang et al. | 2017 | [ML][DL] | [Link](https://arxiv.org/abs/1710.09412) | Implement MixUp; train on CIFAR-10 and compare calibration (ECE) with and without it. |
| 137 | Neural Style Transfer — Gatys, Ecker & Bethge | 2015 | [VIS][GEN] | [Link](https://arxiv.org/abs/1508.06576) | **[CORE]** Implement neural style transfer using VGG19; experiment with style layer weights. |
| 138 | Soft Actor-Critic (SAC) — Haarnoja et al. | 2018 | [RL] | [Link](https://arxiv.org/abs/1801.01290) | Implement SAC for HalfCheetah-v4; plot entropy temperature α over training. |
| 141 | BERT — Devlin, Chang, Lee & Toutanova | 2018 | [NLP][LLM] | [Link](https://arxiv.org/abs/1810.04805) | **[CORE]** Fine-tune `bert-base-uncased` on IMDB sentiment; report accuracy and F1. |
| 142 | Improving Language Understanding by Generative Pre-Training (GPT-1) — Radford et al. | 2018 | [NLP][LLM] | [Link](https://cdn.openai.com/research-covers/language-unsupervised/language_understanding_paper.pdf) | Load GPT-2; generate text with greedy, top-k, and nucleus sampling; compare quality. |
| 143 | ELMo — Peters et al. | 2018 | [NLP] | [Link](https://arxiv.org/abs/1802.05365) | Use ELMo embeddings for NER; visualize how the same word gets different representations in different contexts. |
| 144 | ULMFiT — Howard & Ruder | 2018 | [NLP][LLM] | [Link](https://arxiv.org/abs/1801.06146) | Implement discriminative fine-tuning and gradual unfreezing; compare with fine-tuning all layers at once. |
| 146 | AI Safety via Debate — Irving, Christiano & Amodei | 2018 | [ALIGN] | [Link](https://arxiv.org/abs/1805.00899) | Design a debate protocol for a simple QA task; implement both debater and judge. |
| 148 | Language Models are Unsupervised Multitask Learners (GPT-2) — Radford et al. | 2019 | [LLM][NLP] | [Link](https://d4mucfpksywv.cloudfront.net/better-language-models/language_models_are_unsupervised_multitask_learners.pdf) | **[CORE]** Implement top-k and nucleus sampling for GPT-2; analyze how temperature affects output diversity. |
| 149 | XLNet — Yang et al. | 2019 | [NLP][LLM] | [Link](https://arxiv.org/abs/1906.08237) | Fine-tune XLNet on a GLUE task; compare with BERT on the same task. |
| 150 | RoBERTa — Liu et al. | 2019 | [NLP][LLM] | [Link](https://arxiv.org/abs/1907.11692) | Fine-tune RoBERTa on SST-2; compare with BERT; ablate the pre-training differences. |
| 152 | DistilBERT — Sanh et al. | 2019 | [NLP][SYS] | [Link](https://arxiv.org/abs/1910.01108) | Distill BERT into a smaller model; measure inference latency and accuracy trade-off. |
| 153 | The Bitter Lesson — Sutton | 2019 | [FOUND] | [Link](http://www.incompleteideas.net/IncIdeas/BitterLesson.html) | Read the essay; write a reflection on 3 current methods that rely on human knowledge vs. scale. |
| 154 | Parameter-Efficient Transfer Learning for NLP (Adapters) — Houlsby et al. | 2019 | [NLP][SYS] | [Link](https://arxiv.org/abs/1902.00751) | Implement adapter layers inside BERT; compare training time and accuracy vs. full fine-tuning. |
| 155 | Deep Double Descent — Nakkiran et al. | 2019 | [ML][DL] | [Link](https://arxiv.org/abs/1912.02292) | Train models of increasing size on noisy CIFAR-10; plot test error vs. model size to observe the double descent curve. |
| 160 | The Lottery Ticket Hypothesis — Frankle & Carlin | 2018 | [DL][SYS] | [Link](https://arxiv.org/abs/1803.03635) | Implement iterative magnitude pruning; find a winning ticket and retrain from its initial weights. |
| 163 | Overcoming Catastrophic Forgetting (EWC) — Kirkpatrick et al. | 2016 | [ML][DL] | [Link](https://arxiv.org/abs/1612.00796) | Implement EWC on permuted MNIST; compare forgetting rate with naive sequential fine-tuning. |
| 166 | Intriguing Properties of Neural Networks (Adversarial Examples) — Szegedy et al. | 2013 | [ALIGN][DL] | [Link](https://arxiv.org/abs/1312.6199) | **[CORE]** Generate adversarial examples with FGSM and PGD; measure attack success vs. epsilon. |
| 167 | Distilling the Knowledge in a Neural Network — Hinton, Vinyals & Dean | 2015 | [SYS][DL] | [Link](https://arxiv.org/abs/1503.02531) | **[CORE]** Distill ResNet-18 into a smaller CNN on CIFAR-10; compare with same-size model trained from scratch. |
| 168 | Stochastic Weight Averaging (SWA) — Izmailov et al. | 2018 | [ML][DL] | [Link](https://arxiv.org/abs/1803.05407) | Implement SWA; compare final test accuracy and loss landscape flatness vs. SGD. |
| 170 | Node2Vec — Grover & Leskovec | 2016 | [GRAPH] | [Link](https://arxiv.org/abs/1607.00653) | Generate node2vec embeddings for a citation graph; visualize with t-SNE and compare with random walks. |
| 171 | Language Models are Few-Shot Learners (GPT-3) — Brown et al. | 2020 | [LLM] | [Link](https://arxiv.org/abs/2005.14165) | **[CORE]** Use the OpenAI API for 0-shot, 1-shot, and few-shot prompting on arithmetic tasks; plot accuracy vs. shots. |
| 172 | Scaling Laws for Neural Language Models — Kaplan et al. | 2020 | [LLM] | [Link](https://arxiv.org/abs/2001.08361) | Plot power law fits for loss vs. compute and loss vs. parameters using the paper's data. |
| 173 | Denoising Diffusion Probabilistic Models (DDPM) — Ho, Jain & Abbeel | 2020 | [GEN] | [Link](https://arxiv.org/abs/2006.11239) | **[CORE]** Implement DDPM for the 2D Swiss roll distribution; then train on MNIST. |
| 174 | Retrieval-Augmented Generation (RAG) — Lewis et al. | 2020 | [LLM][NLP] | [Link](https://arxiv.org/abs/2005.11401) | **[CORE]** Build a Q&A system over local documents using FAISS + an LLM; evaluate accuracy with and without retrieval. |
| 175 | An Image is Worth 16x16 Words (ViT) — Dosovitskiy et al. | 2020 | [VIS][DL] | [Link](https://arxiv.org/abs/2010.11929) | **[CORE]** Implement ViT for CIFAR-10; compare with ResNet-18; visualize attention maps. |
| 176 | T5 — Raffel et al. | 2019 | [NLP][LLM] | [Link](https://arxiv.org/abs/1910.10683) | Fine-tune T5-small for CNN/DailyMail summarization; evaluate with ROUGE. |
| 178 | AlphaFold 2 — Jumper et al. | 2021 | [DL][FOUND] | [Link](https://www.nature.com/articles/s41586-021-03819-2) | Read and diagram the Evoformer architecture; use ESMFold to predict a protein structure. |
| 179 | Learning Transferable Visual Models From Natural Language Supervision (CLIP) — Radford et al. | 2021 | [VIS][NLP][MULTI] | [Link](https://arxiv.org/abs/2103.00020) | **[CORE]** Use CLIP for zero-shot classification on CIFAR-100; compute zero-shot vs. linear probe accuracy. |
| 182 | Switch Transformers (MoE) — Fedus, Zoph & Shazeer | 2021 | [LLM][SYS] | [Link](https://arxiv.org/abs/2101.03961) | Implement a simplified MoE layer with top-k gating; visualize expert load balance. |
| 190 | Masked Autoencoders Are Scalable Vision Learners (MAE) — He et al. | 2021 | [VIS][DL] | [Link](https://arxiv.org/abs/2111.06377) | Implement MAE pre-training on CIFAR-10 with 75% mask ratio; fine-tune and compare with supervised baseline. |
| 195 | NeRF — Mildenhall et al. | 2020 | [VIS] | [Link](https://arxiv.org/abs/2003.08934) | **[CORE]** Implement a tiny NeRF for 2D image regression (positional encoding + MLP). |
| 206 | How Powerful are Graph Neural Networks? — Xu et al. | 2018 | [GRAPH] | [Link](https://arxiv.org/abs/1810.00826) | Implement GIN; compare expressivity with GCN on the WL isomorphism test. |
| 211 | Training Language Models to Follow Instructions (InstructGPT) — Ouyang et al. | 2022 | [LLM][ALIGN] | [Link](https://arxiv.org/abs/2203.02155) | **[CORE]** Use TRL to fine-tune GPT-2 with PPO on a sentiment task; compare before and after alignment. |
| 212 | Constitutional AI — Bai et al. | 2022 | [ALIGN] | [Link](https://arxiv.org/abs/2212.08073) | Implement a simple constitutional self-critique prompt loop; measure helpfulness vs. harmlessness trade-off. |
| 213 | Chain-of-Thought Prompting — Wei et al. | 2022 | [LLM][REASON] | [Link](https://arxiv.org/abs/2201.11903) | **[CORE]** Prompt an LLM on GSM8K with and without CoT; compare accuracy and error modes. |
| 215 | Latent Diffusion Models (Stable Diffusion) — Rombach et al. | 2022 | [GEN][VIS] | [Link](https://arxiv.org/abs/2112.10752) | **[CORE]** Use `diffusers` for text-to-image; systematically vary guidance scale and measure prompt adherence. |
| 216 | FlashAttention — Dao et al. | 2022 | [SYS][DL] | [Link](https://arxiv.org/abs/2205.14135) | Install `flash-attn`; benchmark training throughput improvement on a sequence classification task. |
| 217 | ReAct — Yao et al. | 2022 | [AGENT][REASON] | [Link](https://arxiv.org/abs/2210.03629) | **[CORE]** Implement a ReAct agent with a Wikipedia search tool; compare with chain-of-thought only. |
| 220 | Chinchilla — Hoffmann et al. | 2022 | [LLM] | [Link](https://arxiv.org/abs/2203.15556) | Replot the Chinchilla scaling law; compare optimal data-to-parameter ratio with Kaplan et al. |
| 225 | Whisper — Radford et al. | 2022 | [SPEECH] | [Link](https://arxiv.org/abs/2212.04356) | **[CORE]** Use Whisper to transcribe audio; measure WER across accents and languages. |
| 227 | LLaMA — Touvron et al. | 2023 | [LLM] | [Link](https://arxiv.org/abs/2302.13971) | **[CORE]** Use Llama 3 via Ollama; fine-tune a 7B model with LoRA on a custom domain. |
| 230 | Toolformer — Schick et al. | 2023 | [AGENT] | [Link](https://arxiv.org/abs/2302.04761) | **[CORE]** Design a prompt for calculator tool use; test on arithmetic problems. |
| 231 | Tree of Thoughts — Yao et al. | 2023 | [REASON][LLM] | [Link](https://arxiv.org/abs/2305.10601) | **[CORE]** Implement ToT for the Game of 24; compare with CoT and self-consistency. |
| 233 | Generative Agents — Park et al. | 2023 | [AGENT] | [Link](https://arxiv.org/abs/2304.03442) | **[CORE]** Build a small agent simulation with memory, reflection, and planning. |
| 235 | Mamba — Gu & Dao | 2023 | [DL][SYS] | [Link](https://arxiv.org/abs/2312.00752) | **[CORE]** Train Mamba on WikiText-2; compare perplexity and throughput with a Transformer. |
| 236 | LoRA — Hu et al. | 2021 | [LLM][SYS] | [Link](https://arxiv.org/abs/2106.09685) | **[CORE]** Fine-tune Llama with LoRA using `peft`; compare trainable parameters with full fine-tuning. |
| 237 | Direct Preference Optimization (DPO) — Rafailov et al. | 2023 | [ALIGN][LLM] | [Link](https://arxiv.org/abs/2305.18290) | **[CORE]** Fine-tune GPT-2 with DPO on a preference dataset; compare alignment with PPO-based RLHF. |
| 240 | QLoRA — Dettmers et al. | 2023 | [SYS][LLM] | [Link](https://arxiv.org/abs/2305.14314) | Fine-tune Llama 2 7B with QLoRA on a single GPU; measure memory usage vs. full fine-tuning. |
| 241 | Segment Anything Model (SAM) — Kirillov et al. | 2023 | [VIS] | [Link](https://arxiv.org/abs/2304.02643) | **[CORE]** Use SAM to segment objects in your own images; compare point, box, and automatic prompts. |
| 242 | LLaVA — Liu et al. | 2023 | [VIS][LLM][MULTI] | [Link](https://arxiv.org/abs/2304.08485) | **[CORE]** Use LLaVA to describe images and answer visual questions; test on VQA benchmark. |
| 250 | Reflexion — Shinn et al. | 2023 | [AGENT][REASON] | [Link](https://arxiv.org/abs/2303.11366) | Implement a self-reflection agent for coding tasks; measure pass@1 before and after reflection. |

---

## 🟡 STAGE 2 — LLM & RLHF Era (Papers 251–600)

| # | Paper | Year | Tags | 🔗 Link | 🔧 What to Implement |
|---|-------|------|------|---------|---------------------|
| 251 | Lost in the Middle — Liu et al. | 2023 | [LLM] | [Link](https://arxiv.org/abs/2307.03172) | Evaluate long-context retrieval with documents at different positions; plot the U-shaped accuracy curve. |
| 252 | FlashAttention 2 — Dao | 2023 | [SYS] | [Link](https://arxiv.org/abs/2307.08691) | Benchmark FA2 vs FA1 on sequences of length 2K, 8K, 32K; plot tokens/sec. |
| 253 | RWKV — Peng et al. | 2023 | [DL][LLM] | [Link](https://arxiv.org/abs/2305.13048) | Train RWKV on WikiText-103; compare perplexity and inference memory with a same-size Transformer. |
| 255 | ControlNet — Zhang & Agrawala | 2023 | [GEN][VIS] | [Link](https://arxiv.org/abs/2302.05543) | Use ControlNet with Stable Diffusion for pose-guided generation; compare with unconditional. |
| 264 | Towards Monosemanticity — Bricken et al. | 2023 | [ALIGN] | [Link](https://transformer-circuits.pub/2023/monosemantic-features/index.html) | Use sparse autoencoders on GPT-2 activations; find 5 interpretable features and verify them with probing. |
| 265 | Representation Engineering — Zou et al. | 2023 | [ALIGN] | [Link](https://arxiv.org/abs/2310.01405) | Implement RepE to extract a "honesty" direction; use it to steer model outputs. |
| 272 | GPTQ — Frantar et al. | 2022 | [SYS][LLM] | [Link](https://arxiv.org/abs/2210.17323) | Quantize Llama 7B to 4-bit with GPTQ; measure perplexity degradation and inference speedup. |
| 273 | vLLM — Kwon et al. | 2023 | [SYS][LLM] | [Link](https://arxiv.org/abs/2309.06180) | Set up vLLM for LLM serving; benchmark throughput vs. naive batching. |
| 276 | 3D Gaussian Splatting — Kerbl et al. | 2023 | [VIS] | [Link](https://arxiv.org/abs/2308.04079) | **[CORE]** Reconstruct a 3D scene from a multi-view video using the official code. |
| 280 | In-context Learning and Induction Heads — Olsson et al. | 2022 | [LLM][ALIGN] | [Link](https://arxiv.org/abs/2209.11895) | Manually inspect attention patterns in a small transformer; identify heads that copy previous tokens. |
| 281 | Let's Think Step by Step — Kojima et al. | 2022 | [REASON] | [Link](https://arxiv.org/abs/2205.11916) | Test "Let's think step by step" on 5 reasoning benchmarks; compare with standard prompting. |
| 284 | Grouped-Query Attention (GQA) — Ainslie et al. | 2023 | [SYS][LLM] | [Link](https://arxiv.org/abs/2305.13245) | Implement GQA alongside MHA and MQA; measure KV-cache memory savings on a fixed context length. |
| 301 | DeepSeek-R1 — DeepSeek AI | 2025 | [REASON][RL] | [Link](https://arxiv.org/abs/2501.12948) | **[CORE]** Use a distilled R1 model on MATH; trace its step-by-step reasoning on hard problems. |
| 303 | Scaling LLM Test-Time Compute Optimally — Snell et al. | 2024 | [REASON][LLM] | [Link](https://arxiv.org/abs/2408.03314) | Implement best-of-N sampling and majority voting; measure accuracy vs. compute budget on GSM8K. |
| 307 | Gemini 1.5 — Google DeepMind | 2024 | [LLM][MULTI] | [Link](https://arxiv.org/abs/2403.05530) | **[CORE]** Test 1M-context book QA using Gemini Flash; measure retrieval accuracy vs. position. |
| 308 | Llama 3 — Meta AI | 2024 | [LLM] | [Link](https://arxiv.org/abs/2407.21783) | **[CORE]** Fine-tune Llama 3.1 8B with LoRA on a custom domain; evaluate before and after. |
| 318 | Scaling and Evaluating Sparse Autoencoders — Gao et al. | 2024 | [ALIGN] | [Link](https://arxiv.org/abs/2406.04093) | **[CORE]** Use `sae-lens` to extract features from GPT-2; find 5 interpretable features and describe them. |
| 326 | The Unreasonable Effectiveness of Recurrent Neural Networks — Karpathy | 2015 | [DL] | [Link](https://karpathy.github.io/2015/05/21/rnn-effectiveness/) | Train a char-RNN on Shakespeare; generate text at temperatures 0.5, 1.0, 1.5; compare quality. |
| 327 | Understanding LSTM Networks — Olah | 2015 | [DL] | [Link](https://colah.github.io/posts/2015-08-Understanding-LSTMs/) | Implement LSTM from scratch; visualize gate activations on a synthetic sequence. |
| 329 | Grad-CAM — Selvaraju et al. | 2016 | [VIS][ALIGN] | [Link](https://arxiv.org/abs/1610.02391) | Implement Grad-CAM; compare class activation maps for correct vs. misclassified images. |
| 336 | Policy Gradient Methods for RL — Sutton et al. | 2000 | [RL] | [Link](https://papers.nips.cc/paper/1999/hash/464d828b85b0bed98e80ade0a5c43b0f-Abstract.html) | Implement REINFORCE with a learned baseline; compare variance vs. without baseline. |
| 337 | Double Q-Learning — van Hasselt | 2010 | [RL] | [Link](https://papers.nips.cc/paper_files/paper/2010/hash/091d584fcea301d1179470c9b578e3f-Abstract.html) | Implement Double DQN; compare overestimation bias vs. vanilla DQN on CartPole. |
| 338 | Curiosity-Driven Exploration — Pathak et al. | 2017 | [RL] | [Link](https://arxiv.org/abs/1705.05363) | Implement the ICM forward model; test on a sparse-reward MiniGrid environment. |
| 340 | Dreamer — Hafner et al. | 2019 | [RL] | [Link](https://arxiv.org/abs/1912.01603) | Implement DreamerV1's world model (RSSM) for a continuous control environment. |
| 342 | MADDPG — Lowe et al. | 2017 | [RL] | [Link](https://arxiv.org/abs/1706.02275) | Implement MADDPG for a cooperative multi-agent particle environment. |
| 344 | QR-DQN — Dabney et al. | 2017 | [RL] | [Link](https://arxiv.org/abs/1710.10044) | Implement QR-DQN; visualize the return distribution at different states. |
| 351 | Fairness and Machine Learning — Barocas, Hardt & Narayanan | 2019 | [ALIGN] | [Link](https://fairmlbook.org) | Compute demographic parity, equalized odds, and calibration for a loan approval model. |
| 362 | Siamese Networks for One-Shot Recognition — Koch et al. | 2015 | [ML] | [Link](https://www.cs.cmu.edu/~rsalakhu/papers/oneshot1.pdf) | Train a Siamese network on Omniglot; measure few-shot accuracy vs. random baseline. |
| 364 | Prototypical Networks — Snell, Swersky & Zemel | 2017 | [ML] | [Link](https://arxiv.org/abs/1703.05175) | **[CORE]** Implement ProtoNet on miniImageNet; compare 1-shot and 5-shot accuracy. |
| 379 | On the Measure of Intelligence — Chollet | 2019 | [FOUND][ALIGN] | [Link](https://arxiv.org/abs/1911.01547) | Understand the ARC benchmark; run a baseline LLM on 10 ARC tasks and analyze failures. |
| 385 | The Annotated Transformer — Rush | 2018 | [NLP][DL] | [Link](https://nlp.seas.harvard.edu/2018/04/03/attention.html) | Code through every line; reproduce the WMT-14 training curve on a small dataset. |
| 389 | Luong Attention — Luong, Pham & Manning | 2015 | [NLP] | [Link](https://arxiv.org/abs/1508.04025) | Implement both global and local Luong attention; compare alignment quality with Bahdanau. |
| 394 | SQuAD — Rajpurkar et al. | 2016 | [NLP] | [Link](https://arxiv.org/abs/1606.05250) | Fine-tune BERT on SQuAD v2.0; report exact match and F1 scores. |
| 397 | Sentence-BERT — Reimers & Gurevych | 2019 | [NLP] | [Link](https://arxiv.org/abs/1908.10084) | Generate sentence embeddings; evaluate on STS-Benchmark; compare with averaging word embeddings. |
| 400 | BART — Lewis et al. | 2019 | [NLP][LLM] | [Link](https://arxiv.org/abs/1910.13461) | Fine-tune BART for CNN/DailyMail summarization; compare ROUGE with T5. |
| 406 | DeepFace — Taigman et al. | 2014 | [VIS] | [Link](https://openaccess.thecvf.com/content_cvpr_2014/papers/Taigman_DeepFace_Closing_the_2014_CVPR_paper.pdf) | Train a face verification model using contrastive loss on LFW. |
| 407 | FaceNet — Schroff et al. | 2015 | [VIS] | [Link](https://arxiv.org/abs/1503.03832) | Implement triplet loss; train face embeddings and measure rank-1 accuracy on a small dataset. |
| 412 | DETR — Carion et al. | 2020 | [VIS] | [Link](https://arxiv.org/abs/2005.12872) | Fine-tune DETR on a small detection dataset; visualize cross-attention maps per object query. |
| 430 | ConvNeXt — Liu et al. | 2022 | [VIS] | [Link](https://arxiv.org/abs/2201.03545) | Train ConvNeXt-Tiny on CIFAR-100; compare with Swin-Tiny on accuracy and FPS. |
| 442 | DDIM — Song, Meng & Ermon | 2020 | [GEN] | [Link](https://arxiv.org/abs/2010.02502) | Implement DDIM deterministic sampling; compare image quality at 10, 50, and 1000 steps. |
| 443 | Classifier-Free Diffusion Guidance — Ho & Salimans | 2022 | [GEN] | [Link](https://arxiv.org/abs/2207.12598) | Implement CFG for a class-conditional DDPM; plot FID vs. guidance scale. |
| 444 | Consistency Models — Song et al. | 2023 | [GEN] | [Link](https://arxiv.org/abs/2303.01469) | Train a consistency model; compare one-step generation quality with DDPM. |
| 445 | Flow Matching — Lipman et al. | 2022 | [GEN] | [Link](https://arxiv.org/abs/2210.02747) | Implement conditional flow matching for a 2D Gaussian→moon distribution. |
| 483 | WebGPT — Nakano et al. | 2021 | [AGENT] | [Link](https://arxiv.org/abs/2112.09332) | Build a browser-assisted QA system with a search tool; compare answer accuracy with no retrieval. |
| 494 | AutoGen — Wu et al. | 2023 | [AGENT] | [Link](https://arxiv.org/abs/2308.08155) | Build a 2-agent conversation framework; implement a coder + debugger pair for a coding task. |
| 499 | SWE-bench — Jimenez et al. | 2023 | [AGENT] | [Link](https://arxiv.org/abs/2310.06770) | Run a baseline agent on 5 SWE-bench issues; analyze which error types cause failures. |
| 504 | PAL — Gao et al. | 2022 | [REASON][AGENT] | [Link](https://arxiv.org/abs/2211.10435) | Implement program-aided reasoning with a Python executor; compare with CoT on math benchmarks. |
| 517 | Self-Consistency — Wang et al. | 2022 | [REASON] | [Link](https://arxiv.org/abs/2203.11171) | Implement majority voting over 10 CoT samples; plot accuracy vs. number of samples. |
| 554 | Group Relative Policy Optimization (GRPO) — Shao et al. | 2024 | [ALIGN][RL] | [Link](https://arxiv.org/abs/2402.03300) | Implement GRPO; compare with PPO on a simple RLHF task. |
| 563 | SwiGLU — Shazeer | 2020 | [DL][SYS] | [Link](https://arxiv.org/abs/2002.05202) | Replace the Transformer FFN activation with SwiGLU; compare perplexity with ReLU and GELU. |
| 564 | Rotary Position Embeddings (RoPE) — Su et al. | 2021 | [DL][SYS] | [Link](https://arxiv.org/abs/2104.09864) | Implement RoPE; verify relative position invariance and compare with sinusoidal on a small LM. |
| 573 | Byte Pair Encoding (BPE) — Sennrich et al. | 2015 | [NLP][SYS] | [Link](https://arxiv.org/abs/1508.07909) | Implement BPE tokenization from scratch; compare vocabulary coverage on a multilingual corpus. |
| 596 | SimCLR — Chen et al. | 2020 | [ML][VIS] | [Link](https://arxiv.org/abs/2002.05709) | Implement SimCLR on CIFAR-10; evaluate linear probe accuracy vs. supervised baseline. |
| 597 | MoCo — He et al. | 2019 | [ML][VIS] | [Link](https://arxiv.org/abs/1911.05722) | Implement momentum contrast with a memory queue; compare with SimCLR. |

---

## 🟠 STAGE 3 — Specialized Domains & Advanced Topics (Papers 601–935)

| # | Paper | Year | Tags | 🔗 Link | 🔧 What to Implement |
|---|-------|------|------|---------|---------------------|
| 601 | BYOL — Grill et al. | 2020 | [ML][VIS] | [Link](https://arxiv.org/abs/2006.07733) | Implement BYOL (no negative pairs); compare with SimCLR on linear probing accuracy. |
| 602 | Barlow Twins — Zbontar et al. | 2021 | [ML][VIS] | [Link](https://arxiv.org/abs/2103.03230) | Implement the cross-correlation redundancy reduction loss; visualize the correlation matrix during training. |
| 606 | Bayesian Neural Networks — MacKay | 1992 | [ML] | [Link](https://www.semanticscholar.org/paper/A-Practical-Bayesian-Framework-for-Backpropagation-MacKay/9a09e40fefeef03c3f0e1ade2afc5f8d1e2e0e5c) | Implement a BNN with variational inference (mean-field); compare predictive uncertainty with standard NN. |
| 607 | Dropout as a Bayesian Approximation — Gal & Ghahramani | 2015 | [ML][DL] | [Link](https://arxiv.org/abs/1506.02142) | Implement MC Dropout; visualize predictive uncertainty on out-of-distribution inputs. |
| 609 | Normalizing Flows — Papamakarios et al. | 2019 | [ML][GEN] | [Link](https://arxiv.org/abs/1912.02762) | Implement RealNVP for 2D data; visualize the learned transformation from noise to data. |
| 616 | AI Clinician — Komorowski et al. | 2018 | [ML][RL] | [Link](https://www.nature.com/articles/s41591-018-0213-5) | Implement offline RL policy evaluation (OPE) on a simplified clinical dataset. |
| 617 | Deep Learning for Detecting Diabetic Retinopathy — Gulshan et al. | 2016 | [VIS][ML] | [Link](https://jamanetwork.com/journals/jama/fullarticle/2588763) | Fine-tune a ResNet for binary retinopathy classification; compute AUC and plot ROC curve. |
| 619 | CheXNet — Rajpurkar et al. | 2017 | [VIS][ML] | [Link](https://arxiv.org/abs/1711.05225) | Train a DenseNet-121 on a chest X-ray dataset; compute AUC for each pathology class. |
| 624 | ESMFold — Lin et al. | 2022 | [DL] | [Link](https://www.science.org/doi/10.1126/science.ade2574) | Use ESMFold to predict the structure of a known protein; compare with AlphaFold using TM-score. |
| 630 | SGD with Momentum — Polyak | 1964 | [FOUND][ML] | [Link](https://www.sciencedirect.com/science/article/pii/0041555364901375) | Implement SGD with heavy-ball momentum; compare convergence on a 2D quadratic vs. plain SGD. |
| 635 | AdamW — Loshchilov & Hutter | 2017 | [ML] | [Link](https://arxiv.org/abs/1711.05101) | Implement AdamW; compare weight decay behavior with Adam+L2 regularization. |
| 636 | LAMB — You et al. | 2019 | [ML][SYS] | [Link](https://arxiv.org/abs/1904.00962) | Implement LAMB; compare large-batch training stability with AdamW on a small LM. |
| 640 | Cyclical Learning Rates — Smith | 2015 | [ML] | [Link](https://arxiv.org/abs/1506.01186) | Implement a cyclical LR scheduler; use the LR range test to find optimal bounds. |
| 643 | Lion Optimizer — Chen et al. | 2023 | [ML][SYS] | [Link](https://arxiv.org/abs/2302.06675) | Implement Lion; compare memory usage and convergence with Adam on image classification. |
| 647 | Understanding Deep Learning Requires Rethinking Generalization — Zhang et al. | 2016 | [FOUND][DL] | [Link](https://arxiv.org/abs/1611.03530) | Train a ResNet to memorize CIFAR-10 with random labels; observe that it converges with 0 training loss. |
| 649 | Neural Tangent Kernel — Jacot et al. | 2018 | [FOUND][DL] | [Link](https://arxiv.org/abs/1806.07572) | Compute the empirical NTK for a small MLP; visualize it changing vs. being static at infinite width. |
| 654 | Automatic Prompt Optimization — Pryzant et al. | 2023 | [LLM] | [Link](https://arxiv.org/abs/2305.03495) | Implement a simple gradient-free prompt optimizer using LLM feedback; improve accuracy on a task. |
| 656 | DSPy — Khattab et al. | 2023 | [LLM][AGENT] | [Link](https://arxiv.org/abs/2310.03714) | Build a 2-module DSPy pipeline for RAG; compile with BootstrapFewShot; compare with manual prompting. |
| 662 | Dense Passage Retrieval (DPR) — Karpukhin et al. | 2020 | [NLP] | [Link](https://arxiv.org/abs/2004.04906) | Implement DPR with a BERT bi-encoder; compare top-5 retrieval recall vs. BM25. |
| 665 | BM25 — Robertson & Zaragoza | 2009 | [NLP] | [Link](https://www.nowpublishers.com/article/Details/INR-019) | Implement BM25 from scratch; run on the MS-MARCO dev set and compute MRR@10. |
| 669 | GraphRAG — Edge et al. | 2024 | [LLM][GRAPH] | [Link](https://arxiv.org/abs/2404.16130) | Build a graph-based RAG pipeline; compare community summarization with naive chunk retrieval. |
| 672 | Score-Based Generative Models — Song & Ermon | 2019 | [GEN] | [Link](https://arxiv.org/abs/1907.05600) | Train a noise-conditional score network on 2D toy data; sample using Langevin dynamics. |
| 674 | Elucidating the Design Space of Diffusion Models (EDM) — Karras et al. | 2022 | [GEN] | [Link](https://arxiv.org/abs/2206.00364) | Implement the EDM preconditioning; compare with DDPM on FID at the same NFE budget. |
| 680 | A Survey of RLHF — Kaufmann et al. | 2023 | [RL][ALIGN] | [Link](https://arxiv.org/abs/2312.14925) | Read the survey; implement a minimal preference-based reward model from scratch. |
| 712 | Linformer — Wang et al. | 2020 | [DL][SYS] | [Link](https://arxiv.org/abs/2006.04768) | Implement linear attention via low-rank projection; benchmark memory vs. standard attention. |
| 718 | xLSTM — Beck et al. | 2024 | [DL] | [Link](https://arxiv.org/abs/2405.04517) | Implement the mLSTM (matrix memory) cell; compare with standard LSTM on a long-range task. |
| 719 | Mamba 2 — Dao & Gu | 2024 | [DL][SYS] | [Link](https://arxiv.org/abs/2405.21060) | Understand the SSD equivalence between SSMs and structured attention; implement a toy version. |
| 724 | GRU — Cho et al. | 2014 | [DL][NLP] | [Link](https://arxiv.org/abs/1409.1259) | Implement a GRU cell from scratch; compare with LSTM on a character-level LM. |
| 771 | FedAvg — McMahan et al. | 2016 | [ML][SYS] | [Link](https://arxiv.org/abs/1602.05629) | Implement federated averaging with 5 simulated clients; compare communication-accuracy trade-off. |
| 773 | Deep Learning with Differential Privacy — Abadi et al. | 2016 | [ML][ALIGN] | [Link](https://arxiv.org/abs/1607.00133) | Add DP-SGD to a classifier; measure privacy budget ε vs. accuracy. |
| 777 | Membership Inference Attacks — Shokri et al. | 2017 | [ALIGN][ML] | [Link](https://arxiv.org/abs/1610.05820) | Implement a shadow model membership inference attack; measure AUC. |
| 782 | DARTS — Liu, Simonyan & Yang | 2018 | [DL][ML] | [Link](https://arxiv.org/abs/1806.09055) | Implement DARTS for a toy architecture space on CIFAR-10; compare found architecture with random baseline. |
| 788 | N-BEATS — Oreshkin et al. | 2019 | [ML] | [Link](https://arxiv.org/abs/1905.10437) | Train N-BEATS on ETT time series; compare with LSTM on MAE and MAPE. |
| 792 | PatchTST — Nie et al. | 2022 | [ML] | [Link](https://arxiv.org/abs/2211.14730) | Apply PatchTST to a multivariate forecasting task; compare with Informer. |
| 798 | LightGBM — Ke et al. | 2017 | [ML] | [Link](https://papers.nips.cc/paper/2017/hash/6449f44a102fde848669bdd9eb6b76fa-Abstract.html) | Train LightGBM on a tabular dataset; compare training speed and accuracy with XGBoost. |
| 800 | TabNet — Arik & Pfister | 2019 | [ML] | [Link](https://arxiv.org/abs/1908.07442) | Train TabNet on a Kaggle tabular competition; visualize the feature selection masks. |
| 806 | Isolation Forest — Liu et al. | 2008 | [ML] | [Link](https://ieeexplore.ieee.org/document/4781136) | Implement Isolation Forest for anomaly detection; compare with LOF and One-Class SVM. |
| 807 | Matrix Factorization for Recommender Systems — Koren et al. | 2009 | [ML] | [Link](https://ieeexplore.ieee.org/document/5197422) | Implement SVD++ for the MovieLens dataset; compute RMSE. |
| 808 | Neural Collaborative Filtering — He et al. | 2017 | [ML] | [Link](https://arxiv.org/abs/1708.05031) | Implement NeuMF; compare HR@10 with matrix factorization. |
| 817 | PointNet — Qi et al. | 2016 | [VIS] | [Link](https://arxiv.org/abs/1612.00593) | Implement PointNet for 3D shape classification on ModelNet40; verify permutation invariance. |
| 857 | Wav2Vec 2.0 — Baevski et al. | 2020 | [SPEECH][ML] | [Link](https://arxiv.org/abs/2006.11477) | Fine-tune Wav2Vec 2.0 on LibriSpeech 10h; compare WER with a supervised baseline. |
| 858 | HuBERT — Hsu et al. | 2021 | [SPEECH][ML] | [Link](https://arxiv.org/abs/2106.07447) | Fine-tune HuBERT for a downstream ASR task; compare representations with Wav2Vec 2.0. |
| 862 | DeepSeek-Coder — Guo et al. | 2024 | [LLM] | [Link](https://arxiv.org/abs/2401.14196) | Evaluate DeepSeek-Coder on HumanEval and MBPP; compare with StarCoder and CodeLlama. |
| 865 | SWE-agent — Yang et al. | 2024 | [AGENT][LLM] | [Link](https://arxiv.org/abs/2405.15793) | Run SWE-agent on 5 GitHub issues; analyze failure modes. |
| 881 | Causal Inference in Statistics: A Primer — Pearl et al. | 2016 | [FOUND][ML] | [Link](https://www.wiley.com/en-us/Causal+Inference+in+Statistics%3A+A+Primer-p-9781119186847) | Implement the backdoor criterion; apply it to a synthetic dataset to estimate a causal effect. |
| 886 | Invariant Risk Minimization — Arjovsky et al. | 2019 | [ML][ALIGN] | [Link](https://arxiv.org/abs/1907.02893) | Implement IRM; compare with ERM on a dataset with spurious correlations. |
| 896 | SE(3)-Transformers — Fuchs et al. | 2020 | [DL][GRAPH] | [Link](https://arxiv.org/abs/2006.10503) | Implement an E(n)-equivariant GNN layer; verify equivariance numerically. |
| 897 | E(n) Equivariant GNN — Satorras et al. | 2021 | [GRAPH][DL] | [Link](https://arxiv.org/abs/2102.09844) | Train EGNN for molecular property prediction on QM9; compare with non-equivariant MLP. |
| 909 | Explainable AI (XAI) — Arrieta et al. | 2019 | [ALIGN] | [Link](https://arxiv.org/abs/1910.10045) | Apply SHAP, LIME, and Integrated Gradients to the same model; compare explanations. |
| 910 | SHAP — Lundberg & Lee | 2017 | [ML][ALIGN] | [Link](https://arxiv.org/abs/1705.07874) | Implement kernel SHAP; apply to a trained XGBoost model on a tabular dataset. |
| 911 | LIME — Ribeiro et al. | 2016 | [ML][ALIGN] | [Link](https://arxiv.org/abs/1602.04938) | Implement LIME for image classification; visualize superpixel importance. |
| 915 | Concept Bottleneck Models — Koh et al. | 2020 | [ML][ALIGN] | [Link](https://arxiv.org/abs/2007.04612) | Train a CBM on a dataset with concept labels; test concept-based interventions. |
| 924 | Sparse Coding in the Visual Cortex — Olshausen & Field | 1996 | [FOUND][VIS] | [Link](https://www.nature.com/articles/381607a0) | Implement sparse coding with ISTA; train on image patches and visualize learned dictionary atoms. |
| 926 | Claude 3.5 Sonnet System Card — Anthropic | 2024 | [LLM][ALIGN] | [Link](https://www.anthropic.com/claude/sonnet) | Read the safety evaluations; design a red-teaming prompt set targeting one identified risk category. |
| 930 | Persona Hub — Chan et al. | 2024 | [LLM] | [Link](https://arxiv.org/abs/2406.20094) | Use the persona hub to generate a synthetic instruction-tuning dataset; fine-tune a small model. |

---

## 📊 Summary

| Metric | Value |
|--------|-------|
| Ilya Sutskever's top 30 papers | 30 |
| Core curriculum papers | 905 |
| Papers with [CORE] tasks | 130+ |
| Earliest paper | 1943 |
| Latest paper | 2025 |
| Papers removed (no impl. / off-topic) | ~100 |

---

## 🔗 Essential Resources

| Resource | URL |
|----------|-----|
| Papers with Code | [paperswithcode.com](https://paperswithcode.com) |
| arXiv cs.AI | [arxiv.org/list/cs.AI/recent](https://arxiv.org/list/cs.AI/recent) |
| arXiv cs.LG | [arxiv.org/list/cs.LG/recent](https://arxiv.org/list/cs.LG/recent) |
| Hugging Face Papers | [huggingface.co/papers](https://huggingface.co/papers) |
| Semantic Scholar | [semanticscholar.org](https://semanticscholar.org) |
| NeurIPS Proceedings | [papers.nips.cc](https://papers.nips.cc) |
| ICML Proceedings | [proceedings.mlr.press](https://proceedings.mlr.press) |
| ICLR OpenReview | [openreview.net](https://openreview.net) |
| ACL Anthology | [aclanthology.org](https://aclanthology.org) |
| CVPR/ICCV/ECCV | [openaccess.thecvf.com](https://openaccess.thecvf.com) |

---

*Start with Ilya's Top 30 for the fastest path to 90% coverage. Then work through Stage 1 [CORE] tasks before branching into specialized domains.*
