# 500 Go Projects to Master Golang

> Organized by level (Beginner → Advanced) and domain. Each project teaches real skills.
> Start from the top and work your way down.

---

## 🟢 BEGINNER PROJECTS (1–100)

### CLI Tools & Utilities

1. **Hello CLI** — A CLI that greets the user by name using `os.Args`
2. **Unit Converter** — Convert km↔miles, kg↔lbs, C↔F from the terminal
3. **Simple Calculator** — +, -, *, / from command-line arguments
4. **Word Counter** — Count words, lines, and characters in a file (like `wc`)
5. **File Renamer** — Batch rename files in a directory with a prefix/suffix
6. **Directory Lister** — List files in a directory with size and modified date
7. **Duplicate File Finder** — Find duplicate files using MD5 hashing
8. **Random Password Generator** — Generate secure passwords with configurable length and symbols
9. **Coin Flipper** — Flip a coin N times and show statistics
10. **Dice Roller** — Roll N dice with M sides, show results and totals
11. **Number Guessing Game** — CLI game where the computer picks a number
12. **Hangman** — Terminal hangman game with word list from a file
13. **Countdown Timer** — Counts down from N seconds with a terminal display
14. **Stopwatch** — Start/stop/lap stopwatch in the terminal
15. **To-Do List (CLI)** — Add, list, complete, and delete tasks saved to a JSON file
16. **Notes App (CLI)** — Create and search plaintext notes from the terminal
17. **Budget Tracker (CLI)** — Log income/expenses, show balance from a CSV file
18. **Flashcard App** — Study flashcards stored in a text file
19. **Quiz App** — Multiple-choice quiz loaded from a JSON file
20. **Mad Libs Generator** — Fill in blanks in story templates
21. **Roman Numeral Converter** — Convert integers to/from Roman numerals
22. **Base64 Encoder/Decoder** — Encode and decode strings/files in Base64
23. **Caesar Cipher** — Encrypt and decrypt text with a shift key
24. **Morse Code Translator** — Convert text to/from Morse code
25. **ASCII Art Generator** — Convert text to large ASCII block letters
26. **Color Picker (Terminal)** — Display all 256 terminal colors with their codes
27. **File Splitter** — Split a large file into N equal parts
28. **File Joiner** — Rejoin split files back into one
29. **Line Sorter** — Sort lines of a text file alphabetically or by length
30. **CSV to JSON Converter** — Read a CSV file and output it as JSON

### Simple Web Projects

31. **Static File Server** — Serve a directory of files over HTTP
32. **"Hello World" API** — REST endpoint returning `{"message": "hello"}`
33. **JSON Echo Server** — POST JSON, get it back with a timestamp added
34. **Simple Form Handler** — HTML form that POSTs to Go and echoes input
35. **Random Quote API** — Returns a random quote from a hardcoded list
36. **IP Address Lookup** — API that returns the caller's IP and user-agent
37. **URL Shortener (in-memory)** — Shorten URLs stored in a map, redirect on visit
38. **Simple Pastebin** — POST text, get a shareable link back
39. **Hit Counter** — Webpage that tracks and displays visit count
40. **Guestbook** — Simple form-based guestbook stored in a JSON file

### Networking Basics

41. **TCP Echo Server** — Server that echoes back whatever you send it
42. **UDP Ping** — Send a UDP packet and wait for a response
43. **Port Scanner** — Scan a host for open ports in a range
44. **Simple Chat (TCP)** — Two terminals chat over TCP sockets
45. **Network Interface Lister** — List all network interfaces and their IPs
46. **Ping Tool** — Implement a basic ping using ICMP (raw sockets)
47. **HTTP Client** — Fetch a URL and print status code + headers
48. **Download Manager (basic)** — Download a file from a URL with progress bar
49. **DNS Lookup Tool** — Resolve a domain to its IP addresses
50. **WHOIS Client** — Query WHOIS servers for domain info

### File & Data Processing

51. **Log Parser** — Parse Apache/Nginx access logs and count requests per IP
52. **CSV Analyzer** — Read a CSV and compute min/max/avg for numeric columns
53. **JSON Pretty Printer** — Read ugly JSON and output it formatted
54. **Config File Reader** — Parse a `.ini` or `.toml` config file
55. **File Watcher** — Watch a file for changes and print a notification
56. **Directory Size Calculator** — Recursively calculate total size of a directory
57. **File Backup Tool** — Copy changed files from source to destination
58. **Text Search Tool** — Search for a pattern in files (basic `grep`)
59. **Template Renderer** — Use `text/template` to render a report from data
60. **Markdown to HTML** — Convert basic Markdown (headers, bold, links) to HTML

### Math & Logic (as programs)

61. **Prime Number Sieve** — Output all primes up to N, save to file
62. **Statistics Calculator** — Mean, median, mode, std dev for a list of numbers
63. **Matrix Multiplier** — Multiply two matrices read from files
64. **Currency Converter** — Fetch live rates from a free API and convert
65. **Loan Calculator** — Compute monthly payment given principal, rate, term
66. **Tip Calculator** — Split bill with tip among N people
67. **BMI Calculator** — Calculate and categorize BMI
68. **Age Calculator** — Calculate exact age in years, months, and days
69. **Timezone Converter** — Convert a time between two timezones
70. **Calendar Generator** — Print a month calendar to the terminal

### Games (Terminal)

71. **Tic-Tac-Toe** — Two-player terminal game
72. **Snake (Terminal)** — Classic Snake game in the terminal using ANSI codes
73. **Minesweeper (Terminal)** — Basic minesweeper in the terminal
74. **Memory Card Game** — Flip cards in the terminal to find matching pairs
75. **Word Scramble** — Unscramble shuffled words, keep score
76. **Typing Speed Test** — Measure WPM and accuracy in the terminal
77. **Number Wordle** — Guess a 4-digit number (Mastermind clone)
78. **Story Adventure (Text RPG)** — Simple choose-your-own-adventure with JSON story tree
79. **Blackjack** — Single-player Blackjack against the computer
80. **Rock Paper Scissors (with AI)** — Play RPS, AI learns your patterns

### System Utilities

81. **System Info Tool** — Print CPU, RAM, OS, hostname info
82. **Process Lister** — List running processes like `ps aux`
83. **Disk Usage Tool** — Show disk usage per directory (like `du`)
84. **Environment Variable Manager** — List, get, and set env vars via CLI
85. **Cron Job Runner** — Run a shell command on a schedule
86. **Log Rotator** — Archive log files older than N days
87. **Simple Shell** — A minimal shell that runs commands via `os/exec`
88. **Command History Tool** — Parse and search `.bash_history` or `.zsh_history`
89. **File Permission Checker** — Walk a directory and flag world-writable files
90. **Uptime Monitor (CLI)** — Check if a list of URLs return 200 OK

### Miscellaneous Beginner

91. **QR Code Generator** — Generate a QR code PNG from a URL
92. **Weather CLI** — Fetch and display weather for a city using a free API
93. **Joke of the Day** — Fetch a random joke from a public API
94. **Hacker News Reader** — Show top HN stories in the terminal
95. **Pomodoro Timer** — 25-min work / 5-min break timer with notifications
96. **Habit Tracker** — Mark habits daily, show streaks, save to JSON
97. **Contact Book (CLI)** — Add/search/delete contacts saved to a file
98. **Expense Splitter** — Split group expenses and show who owes whom
99. **Simple Cipher App** — Encrypt files with XOR cipher using a key
100. **README Generator** — Ask questions via CLI and generate a README.md

---

## 🔵 INTERMEDIATE PROJECTS (101–280)

### CLI Tools (Intermediate)

101. **`git` Status Summary** — Parse `git log` and `git diff` to print a project summary
102. **Project Scaffolder** — Generate a Go project boilerplate from a template
103. **Interactive Menu (TUI)** — Use `bubbletea` to build a navigable terminal menu
104. **Terminal Dashboard** — Show CPU/RAM/network stats in a live-updating TUI
105. **Database CLI Client** — Connect to SQLite/PostgreSQL and run queries interactively
106. **SSH Key Manager** — List, generate, and copy SSH keys via CLI
107. **Dotfile Manager** — Symlink your dotfiles to a central repo
108. **Multi-file Search & Replace** — Regex find-and-replace across a codebase
109. **Code Line Counter** — Count lines of code by language in a repo
110. **Dependency Graph Visualizer** — Parse Go imports and output a DOT graph
111. **Git Commit Linter** — Enforce conventional commits via a git hook
112. **Changelog Generator** — Generate a CHANGELOG.md from git commit history
113. **Release Tagger** — Automate semantic versioning and git tagging
114. **Benchmark Runner** — Run Go benchmarks and compare against a baseline
115. **Test Coverage Reporter** — Parse `go test -cover` output and generate HTML report
116. **Secret Scanner** — Scan a repo for accidentally committed secrets/API keys
117. **Dead Code Finder** — Find unused functions in a Go package
118. **Import Organizer** — Sort and group imports in Go files
119. **Config Validator** — Validate YAML/JSON/TOML config files against a schema
120. **CLI Progress Bar Library** — Build a reusable animated progress bar

### Web APIs (Intermediate)

121. **RESTful Blog API** — CRUD for posts and comments with SQLite
122. **User Auth API** — Registration, login, JWT tokens, refresh tokens
123. **File Upload API** — Upload files, store metadata in DB, serve them back
124. **Image Resizer API** — Upload an image, get back resized versions
125. **Webhook Receiver** — Receive, log, and replay webhooks
126. **Rate-Limited API** — Add per-IP rate limiting to any HTTP handler
127. **API Key Manager** — Issue, revoke, and validate API keys
128. **GraphQL API** — Simple GraphQL server with `gqlgen`
129. **RSS Feed Generator** — Generate RSS/Atom feeds for a blog
130. **OpenAPI Spec Server** — Auto-generate Swagger docs from Go handlers
131. **Mock API Server** — Load a JSON file and serve it as a REST API
132. **Reverse Proxy** — Forward requests to a backend, add headers
133. **API Gateway** — Route requests to multiple microservices
134. **Health Check Server** — `/health` and `/ready` endpoints with dependency checks
135. **Feature Flag Server** — Toggle features on/off via an API
136. **A/B Testing Server** — Randomly assign users to variants, track conversions
137. **Short Link Analytics** — URL shortener that tracks clicks, referrers, browsers
138. **Pastebin with Expiry** — Pastes auto-delete after N minutes/hours
139. **Bookmark API** — Save, tag, and search bookmarks
140. **Recipe API** — CRUD for recipes with ingredient search

### Web Applications

141. **Blog with Admin Panel** — Full blog with markdown rendering and an admin UI
142. **Wiki Engine** — Create and link wiki pages with versioning
143. **Task Manager (Web)** — Kanban-style task board with drag-and-drop
144. **Event Calendar** — Create and display events on a monthly calendar
145. **Polling App** — Create polls, vote, see live results
146. **Survey Builder** — Build multi-step surveys and collect responses
147. **Invoice Generator** — Fill in details, generate a printable PDF invoice
148. **Expense Tracker (Web)** — Log expenses, show charts by category/month
149. **Budget Planner** — Set budgets per category, track spending vs budget
150. **Job Board** — Post and search job listings with filters
151. **Classified Ads** — Post and browse ads by category and location
152. **Directory Listing Site** — Searchable directory of businesses/people
153. **Leaderboard App** — Submit scores, display ranked leaderboard
154. **Feedback Widget** — Embed a feedback button on any site, collect submissions
155. **Form Builder** — Drag-and-drop form creator, collect and export submissions
156. **Subscription Newsletter** — Subscribe, send newsletters, track opens
157. **Link in Bio Page** — A customizable link page like Linktree
158. **Portfolio CMS** — Manage and display your portfolio projects
159. **Restaurant Menu Site** — Display menu with categories, dietary filters
160. **Appointment Booker** — Show available slots, let users book appointments

### Databases & Storage

161. **ORM from Scratch** — Build a simple struct-to-SQL mapper
162. **Migration Tool** — Apply and rollback SQL migrations from files
163. **Query Builder** — Chainable API to build SQL queries safely
164. **Database Seeder** — Populate a DB with realistic fake data
165. **Database Backup Tool** — Dump and restore PostgreSQL/SQLite databases
166. **Connection Pool Monitor** — Track and display DB connection pool stats
167. **Redis Cache Wrapper** — Cache function results in Redis with TTL
168. **Session Store** — Store user sessions in Redis or a DB
169. **Job Queue** — Background job queue backed by PostgreSQL or Redis
170. **Outbox Pattern** — Reliably publish events from DB transactions

### Networking & Protocols

171. **HTTP/2 Server** — Build an HTTP/2 server with push support
172. **WebSocket Chat** — Multi-room chat using WebSockets
173. **WebSocket Live Feed** — Stream live data (stock prices, scores) via WebSocket
174. **gRPC Service** — Define a proto, implement server and client
175. **gRPC Gateway** — Expose a gRPC service as a REST API
176. **SMTP Client** — Send emails with attachments via raw SMTP
177. **IMAP Client** — Read and search emails from an IMAP mailbox
178. **FTP Client** — Upload and download files from an FTP server
179. **SFTP Client** — Transfer files securely over SSH
180. **SSH Client** — Run commands on remote servers via SSH
181. **SSH Server** — Accept SSH connections and run a fake shell
182. **Telnet Server** — Accept Telnet connections with a simple menu
183. **NAT Traversal Tool** — Punch through NAT for P2P connections
184. **SOCKS5 Proxy** — Build a SOCKS5 proxy server
185. **HTTP Tunnel** — Tunnel TCP connections over HTTP
186. **DNS Resolver** — Build a recursive DNS resolver from scratch
187. **mDNS Announcer** — Announce a service on the local network
188. **NTP Client** — Sync time from an NTP server
189. **SNMP Monitor** — Poll network devices via SNMP
190. **Packet Sniffer** — Capture and display network packets using `gopacket`

### Concurrency Projects

191. **Worker Pool** — Process jobs with a fixed number of goroutines
192. **Pipeline** — Multi-stage data processing pipeline with channels
193. **Fan-out / Fan-in** — Distribute work and collect results concurrently
194. **Rate Limiter** — Token bucket or leaky bucket rate limiter
195. **Circuit Breaker** — Stop calling a failing service after N errors
196. **Semaphore** — Limit concurrent access to a shared resource
197. **Concurrent Web Crawler** — Crawl a website with bounded goroutines
198. **Parallel Image Processor** — Resize/filter images concurrently
199. **Concurrent File Downloader** — Download multiple files simultaneously
200. **Merge Sort (Concurrent)** — Parallel merge sort using goroutines

### DevOps & Automation

201. **CI Pipeline Runner** — Read a YAML config and run build/test steps
202. **Docker Image Builder** — Trigger Docker builds via the Docker API
203. **Container Health Checker** — Monitor running containers and restart unhealthy ones
204. **Kubernetes Pod Lister** — List pods across namespaces using the K8s client
205. **Helm Chart Validator** — Validate Helm chart templates and values
206. **Terraform State Parser** — Read and summarize a `terraform.tfstate` file
207. **AWS S3 Sync** — Sync a local directory to/from an S3 bucket
208. **AWS Lambda Deployer** — Package and deploy a Lambda function from CLI
209. **GCP Storage Browser** — List and download GCS bucket objects
210. **GitHub Actions Runner** — Trigger and monitor GitHub Actions workflows via API
211. **Deployment Notifier** — Post a Slack/Teams message on every deployment
212. **Config Drift Detector** — Compare live infra config vs desired state
213. **Secret Rotation Tool** — Rotate database passwords and update Kubernetes secrets
214. **Cert Expiry Monitor** — Check TLS certificate expiry for a list of domains
215. **Uptime Monitor (Web)** — Check URLs periodically, store history, show dashboard
216. **Alerting Engine** — Evaluate rules against metrics and send alerts
217. **Runbook Executor** — Run predefined runbooks in response to alerts
218. **Infrastructure Cost Estimator** — Parse cloud bills and forecast monthly cost
219. **Log Aggregator** — Collect logs from multiple sources into one stream
220. **Metrics Collector** — Scrape Prometheus metrics and store in a TSDB

### Data Processing & ETL

221. **CSV Pipeline** — Read, transform, validate, and write CSV data
222. **JSON Transformer** — Map JSON fields using a template/spec file
223. **XML Parser & Converter** — Parse complex XML and convert to JSON
224. **Excel Report Generator** — Read data from DB and write to `.xlsx`
225. **PDF Data Extractor** — Extract text and tables from PDF files
226. **Parquet Reader** — Read and query Apache Parquet files
227. **Data Deduplicator** — Remove duplicate records from large datasets
228. **Data Validator** — Validate rows against a schema, report errors
229. **ETL Framework** — Pluggable extract-transform-load pipeline
230. **Change Data Capture** — Stream DB changes from PostgreSQL WAL

### Security Tools

231. **Password Hasher** — Hash and verify passwords with bcrypt/argon2
232. **JWT Validator** — Decode, validate, and inspect JWT tokens
233. **TLS Inspector** — Show TLS certificate chain for a domain
234. **HTTPS Enforcer Middleware** — Redirect HTTP to HTTPS, add security headers
235. **CSRF Protection Library** — Generate and validate CSRF tokens
236. **SQL Injection Detector** — Scan SQL queries for injection vulnerabilities
237. **XSS Scanner** — Check a website for reflected XSS vulnerabilities
238. **Subdomain Enumerator** — Discover subdomains via DNS brute-force
239. **Directory Brute-Forcer** — Find hidden paths on a web server
240. **Hash Cracker** — Crack MD5/SHA1 hashes using a wordlist

### Parsers & Compilers

241. **JSON Parser** — Parse JSON from scratch without `encoding/json`
242. **CSV Parser** — Parse CSV with quoted fields, escapes, custom delimiters
243. **Markdown Parser** — Convert Markdown to HTML tokens
244. **TOML Parser** — Parse a TOML config file from scratch
245. **Expression Evaluator** — Evaluate math expressions like `3 + 4 * (2 - 1)`
246. **Regex Engine (basic)** — Implement a subset of regex (`.`, `*`, `+`)
247. **Template Engine** — Build a simple `{{ variable }}` template renderer
248. **Ini File Parser** — Parse `.ini` files with sections and key-value pairs
249. **Brainfuck Interpreter** — Interpret Brainfuck programs
250. **Lisp Interpreter** — Implement a basic Lisp/Scheme interpreter

---

## 🔴 ADVANCED PROJECTS (281–420)

### Distributed Systems

281. **Key-Value Store** — In-memory KV store with a TCP API (like Redis)
282. **Persistent KV Store** — Add write-ahead logging and snapshotting to the above
283. **Distributed KV Store** — Replicate the KV store across multiple nodes
284. **Raft Consensus** — Implement the Raft consensus algorithm
285. **Leader Election** — Use ZooKeeper or etcd for distributed leader election
286. **Consistent Hashing** — Build a consistent hash ring for load distribution
287. **Distributed Cache** — Shared cache with consistent hashing and replication
288. **Message Broker** — Simple pub/sub message broker (like a mini NATS)
289. **Event Sourcing Framework** — Store state as a sequence of events
290. **CQRS System** — Separate read and write models with event sync
291. **Saga Orchestrator** — Coordinate multi-service transactions with compensation
292. **Two-Phase Commit** — Implement 2PC for distributed transactions
293. **Vector Clocks** — Track causality in a distributed system
294. **CRDTs** — Implement a G-Counter and LWW-Register CRDT
295. **Gossip Protocol** — Build a gossip-based membership protocol
296. **Chord DHT** — Implement the Chord distributed hash table
297. **MapReduce Engine** — Execute MapReduce jobs across multiple workers
298. **Distributed Task Scheduler** — Schedule tasks across a cluster of workers
299. **Service Mesh (basic)** — Sidecar proxy with mTLS and load balancing
300. **Distributed Tracing** — Propagate trace context across services, send to Jaeger

### Databases from Scratch

301. **B-Tree Implementation** — Build a B-tree with insert, delete, search
302. **LSM Tree** — Build a Log-Structured Merge-Tree (like LevelDB)
303. **WAL (Write-Ahead Log)** — Implement crash-safe write-ahead logging
304. **Simple SQL Engine** — Parse and execute SELECT/INSERT/UPDATE/DELETE
305. **Column Store** — Store data column-by-column for analytical queries
306. **Full-Text Search Engine** — Build an inverted index with TF-IDF ranking
307. **Time-Series Database** — Store and query time-stamped metrics efficiently
308. **Graph Database** — Store nodes and edges, traverse with BFS/DFS
309. **Document Store** — Store JSON documents with index-based queries
310. **Buffer Pool Manager** — Manage a fixed pool of memory pages (like a DB buffer)

### Runtimes & Language Tools

311. **Bytecode VM** — Design a bytecode format and write a stack-based VM
312. **Garbage Collector** — Implement mark-and-sweep GC for a toy language
313. **Compiler Frontend** — Lexer + parser + AST for a toy language
314. **LLVM IR Generator** — Compile a toy language to LLVM IR
315. **JIT Compiler (basic)** — Generate machine code at runtime for simple expressions
316. **Debugger** — Attach to a Go process and inspect goroutines/variables
317. **Profiler** — Sample goroutine stacks and generate a flame graph
318. **Memory Leak Detector** — Track allocations and flag leaks
319. **Code Coverage Tool** — Instrument Go source code to track line coverage
320. **Go Linter** — Write a custom `go/analysis` linter pass

### Operating Systems / Low-Level

321. **FUSE Filesystem** — Mount a custom filesystem using `bazil.org/fuse`
322. **Encrypted Filesystem** — AES-encrypt files transparently in a FUSE mount
323. **Virtual Filesystem** — In-memory filesystem with POSIX-like semantics
324. **Tar Archive Tool** — Create and extract `.tar.gz` archives from scratch
325. **Process Supervisor** — Start, monitor, and restart child processes
326. **Memory Allocator** — Implement `malloc`/`free` using `mmap`
327. **System Call Tracer** — Trace system calls made by a process (like `strace`)
328. **Namespace Isolator** — Run a process in its own PID/net namespace (basic container)
329. **cgroups Controller** — Limit CPU/memory of a process using cgroups v2
330. **OCI Container Runtime** — Implement a minimal OCI-compliant container runtime

### Networking (Advanced)

331. **TCP Stack** — Implement TCP over raw sockets (handshake, data, teardown)
332. **HTTP/1.1 Server from Scratch** — Parse raw TCP bytes into HTTP requests
333. **HTTP/2 Implementation** — Implement HTTP/2 framing and multiplexing
334. **QUIC Client** — Connect to a QUIC server and transfer data
335. **TLS 1.3 Handshake** — Implement the TLS 1.3 handshake from scratch
336. **VPN (WireGuard-like)** — Create an encrypted tunnel with a TUN interface
337. **Load Balancer** — L4/L7 load balancer with health checks and algorithms
338. **Service Discovery** — Register and discover services via a central registry
339. **BGP Speaker** — Implement basic BGP route announcements
340. **P2P File Sharing** — Bittorrent-inspired P2P file transfer

### Observability & Platform

341. **Prometheus Exporter** — Export custom metrics for scraping
342. **OpenTelemetry Collector** — Collect traces and metrics from Go apps
343. **Log Shipper** — Tail log files and ship to Elasticsearch/Loki
344. **APM Agent** — Auto-instrument HTTP handlers with latency/error metrics
345. **Chaos Monkey** — Randomly kill/degrade services to test resilience
346. **Feature Store** — Store and serve ML features with versioning
347. **Shadow Traffic Tool** — Mirror production traffic to a staging environment
348. **Canary Release Controller** — Gradually shift traffic to a new version
349. **SLO Tracker** — Calculate error budgets from SLI metrics
350. **Incident Response Bot** — Auto-create incidents, page on-call, post updates

### AI / ML Adjacent

351. **Vector Database** — Store embeddings and find nearest neighbors (cosine similarity)
352. **LLM API Client** — CLI tool wrapping OpenAI/Anthropic API
353. **RAG Pipeline** — Chunk documents, embed, store, retrieve for LLM context
354. **Prompt Templating Engine** — Manage and version prompts with variables
355. **AI Chat TUI** — Terminal chat interface with streaming AI responses
356. **Code Review Bot** — Post AI-generated code review comments on PRs
357. **Semantic Search Engine** — Search documents by meaning using embeddings
358. **Sentiment Analyzer** — Call an NLP API and classify text sentiment
359. **Recommendation Engine** — Collaborative filtering for items/users
360. **Anomaly Detector** — Detect anomalies in time-series data

---

## 🟣 EXPERT / PRODUCTION PROJECTS (421–500)

### Full Production Systems

421. **E-commerce Platform** — Products, cart, orders, payments, admin panel
422. **Multi-tenant SaaS Boilerplate** — Auth, billing, team management, RBAC
423. **Real-time Collaboration Tool** — Google Docs-like editing with OT/CRDT
424. **Video Streaming Server** — Upload, transcode, and stream video with HLS
425. **Live Streaming Platform** — RTMP ingest, transcode, WebRTC delivery
426. **Online Multiplayer Game Server** — Authoritative game server with tick loop
427. **Payment Processing System** — Stripe integration with webhooks, retries, idempotency
428. **Notification Platform** — Email, SMS, push, in-app notifications with preferences
429. **Search Platform** — Indexing pipeline + query engine with relevance ranking
430. **Analytics Platform** — Ingest events, aggregate, query, visualize

### Developer Tools

431. **Go Language Server (LSP)** — Implement Language Server Protocol for a toy language
432. **Code Playground** — Web IDE that compiles and runs Go code in a sandbox
433. **API Testing Tool** — Define API tests in YAML, run them, report failures
434. **Load Testing Tool** — Send concurrent HTTP requests, report latency percentiles
435. **Chaos Engineering Platform** — Inject latency, errors, partitions into services
436. **Database Schema Diff** — Compare two DB schemas and generate a migration
437. **OpenAPI Code Generator** — Generate Go server stubs from an OpenAPI spec
438. **gRPC Mock Server** — Serve mock responses for a `.proto` file
439. **GraphQL Explorer** — Web UI to browse and query a GraphQL schema
440. **Dependency Vulnerability Scanner** — Check `go.sum` against CVE databases

### Infrastructure Tools

441. **Kubernetes Operator** — Custom controller for a CRD (e.g., auto-scaling apps)
442. **Kubernetes Admission Webhook** — Validate/mutate pods on creation
443. **Service Mesh Control Plane** — Manage sidecar proxies via xDS API
444. **Cloud Cost Optimizer** — Identify idle resources and suggest savings
445. **GitOps Controller** — Sync Kubernetes state from a Git repo
446. **Secrets Manager** — Store, rotate, and audit secrets with audit trail
447. **Certificate Authority** — Issue and revoke TLS certificates
448. **Internal PKI** — Manage an internal CA with OCSP and CRL
449. **DNS Server** — Authoritative DNS server for internal zones
450. **IPAM System** — Track and allocate IP addresses across a network

### Data & Streaming

451. **Stream Processing Engine** — Process events from Kafka with windowing and aggregation
452. **Change Streams Processor** — Process MongoDB/PostgreSQL change streams
453. **Data Lakehouse Ingestor** — Write Parquet files to S3 with partitioning
454. **Real-time Dashboard Backend** — Push live metrics to browser via SSE/WebSocket
455. **Workflow Engine** — DAG-based workflow executor with retries and dependencies
456. **Batch Processing Framework** — Schedule and run batch jobs with checkpointing
457. **Event Bus** — In-process and distributed event bus with middleware
458. **Schema Registry** — Store and enforce Avro/Protobuf schemas for topics
459. **Data Catalog** — Discover, document, and search datasets
460. **Data Quality Monitor** — Profile datasets and alert on quality degradation

### Security & Compliance

461. **Zero Trust Auth Proxy** — Authenticate every request regardless of network
462. **OAuth2 Authorization Server** — Full OAuth2 server (auth code, PKCE, refresh)
463. **SAML Identity Provider** — Implement SAML 2.0 IdP for SSO
464. **Secrets Vault** — HSM-backed secrets storage with access policies
465. **Audit Logging System** — Tamper-evident audit log with integrity verification
466. **RBAC Engine** — Role-based access control with inheritance and constraints
467. **Policy Engine (OPA-like)** — Evaluate Rego-like policies against JSON input
468. **Threat Intelligence Feed** — Aggregate and serve IP/domain reputation data
469. **SIEM (basic)** — Correlate security events and generate alerts
470. **Honeypot** — Fake SSH/HTTP server that logs attacker interactions

### Specialized Domains

471. **Blockchain (basic)** — PoW blockchain with transactions and mining
472. **Smart Contract VM** — Stack-based VM for executing smart contract bytecode
473. **Cryptocurrency Wallet** — Generate keys, sign transactions, broadcast to testnet
474. **Trading Bot** — Connect to a crypto exchange, execute strategy
475. **Algorithmic Trading Backtester** — Test strategies against historical data
476. **IoT Device Gateway** — Accept MQTT messages, route to processing pipeline
477. **SCADA Data Collector** — Poll Modbus/OPC-UA devices and store readings
478. **Drone Fleet Manager** — Track drone positions and send mission commands
479. **GPS Tracker Server** — Accept GPS updates from devices, store and display tracks
480. **Emergency Alert System** — Broadcast alerts to subscribers via multiple channels

### Open Source / Community

481. **Go Module Proxy** — Serve Go modules from a private registry
482. **Package Registry (like npm)** — Upload, version, and download packages
483. **Dependency License Checker** — Scan `go.mod` and report license compatibility
484. **Code Review Platform** — PR-style review tool for any text-based file
485. **Documentation Site Generator** — Generate a docs site from Go source comments
486. **API Changelog Diff** — Detect breaking changes between two API versions
487. **Developer Portal** — Self-service portal for API keys, docs, and sandbox
488. **Internal Tooling Hub** — Central web app for team scripts and runbooks
489. **On-call Rotation Manager** — Manage schedules, escalations, and overrides
490. **Postmortem Tracker** — Record, review, and learn from incidents

### Capstone Projects

491. **Build your own Redis** — TCP server, RESP protocol, strings/lists/sets/hashes/sorted sets, persistence
492. **Build your own Git** — Init, add, commit, branch, merge, diff, log
493. **Build your own Docker** — Namespaces, cgroups, image layers, OCI runtime
494. **Build your own Nginx** — HTTP server, virtual hosts, reverse proxy, static files, TLS
495. **Build your own Kafka** — Topics, partitions, producers, consumers, offsets, replication
496. **Build your own Kubernetes** — API server, scheduler, controller, kubelet (simplified)
497. **Build your own PostgreSQL** — Storage engine, query parser, executor, WAL, MVCC
498. **Build your own Prometheus** — Scraper, TSDB, PromQL evaluator, alert manager
499. **Build your own Terraform** — HCL parser, state management, plan/apply lifecycle
500. **Build your own Programming Language** — Lexer, parser, AST, bytecode compiler, VM, REPL

---

## 📚 Recommended Go Packages to Learn Along the Way

| Domain | Packages |
|---|---|
| CLI | `cobra`, `urfave/cli`, `bubbletea`, `lipgloss` |
| Web | `chi`, `gin`, `echo`, `fiber`, `net/http` |
| Database | `database/sql`, `sqlx`, `gorm`, `pgx`, `bun` |
| gRPC | `google.golang.org/grpc`, `protobuf` |
| Testing | `testify`, `gomock`, `httptest`, `testcontainers` |
| Config | `viper`, `koanf`, `envconfig` |
| Logging | `zap`, `zerolog`, `slog` |
| Tracing | `opentelemetry-go`, `jaeger-client` |
| Async | `errgroup`, `sync`, `channels` |
| Cloud | `aws-sdk-go-v2`, `google-cloud-go`, `azure-sdk` |

---

## 🗺️ Suggested Learning Path

```
Weeks 1–4:    Projects 1–100    (Basics, CLI, simple web)
Weeks 5–12:   Projects 101–200  (REST APIs, DBs, networking)
Weeks 13–20:  Projects 201–280  (Concurrency, DevOps, parsers)
Weeks 21–32:  Projects 281–420  (Distributed systems, low-level)
Weeks 33–52:  Projects 421–500  (Production systems, capstones)
```

> **Tip:** Don't build all 500. Pick 2–3 from each section that excite you, finish them, then move to the next level. Completion beats breadth.
