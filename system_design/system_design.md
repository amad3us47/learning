# 100 Products: What to Build to Master System Design

For each famous product, implement the **simplified core feature** listed below.  
Start with the beginner projects, then work your way up.

---

## 📱 Messaging (10 Products)

| # | Product | What to Build (Mini Project) | Core Concept Mastered |
|---|---------|-----------------------------|----------------------|
| 1 | WhatsApp | 1:1 encrypted chat with online/offline indicators | End-to-end encryption, presence |
| 2 | Slack | Channel-based chat with full-text search (inverted index) | Real-time pub/sub, search |
| 3 | Discord | WebSocket server with "guilds" that shard by guild ID | WebSocket gateway, sharding |
| 4 | Telegram | Bot API wrapper + "secret chat" with self-destructing messages | MTProto style, ephemeral |
| 5 | iMessage | Push notification server (APNS mock) + delivery receipts | Push notifications, delivery ack |
| 6 | Messenger | Inbox fanout simulator: write to all friends' inboxes on message | Fan-out on write |
| 7 | Signal | Implement the Double Ratchet (simplified) in Python | Signal protocol, sealed sender |
| 8 | WeChat | Mini program launcher + integrated mock payment | Superapp architecture |
| 9 | Twitter DM | Group DM with read receipts and ephemeral toggle | Conversation threading, ephemeral |
| 10 | Zoom Chat | Persistent chat alongside a mock video room (no video) | Sidebar chat, file sharing |

---

## 🎬 Streaming (10 Products)

| # | Product | What to Build (Mini Project) | Core Concept Mastered |
|---|---------|-----------------------------|----------------------|
| 11 | Netflix | HLS server that serves the same video at 3 bitrates | Adaptive bitrate, CDN |
| 12 | YouTube | Video upload pipeline: transcode with FFmpeg, store chunks | Transcoding pipeline |
| 13 | Spotify | Offline sync: download playlists, mark as available offline | Offline-first, sync |
| 14 | Twitch | RTMP ingest server + chat sidecar (mock concurrent viewers) | Low-latency ingest, chat scaling |
| 15 | Disney+ | Multi-CDN selector: choose between 2 mock CDNs based on latency | Multi-CDN, DRM (mock) |
| 16 | Hulu | Dynamic ad insertion: splice a pre-roll ad into a video stream | Ad insertion, VOD+live hybrid |
| 17 | TikTok | For-You feed: rank 10 videos using a simple ML model (e.g., popularity + recency) | Ranking, short-form CDN |
| 18 | SoundCloud | Waveform generator from MP3 + timestamped comments | Waveform visualization, comments |
| 19 | Apple Music | Cross-device sync: update play queue across browser and mobile | Device sync, spatial audio mock |
| 20 | Clubhouse | Live audio room with speaker queue (WebSocket + basic audio relay) | Live audio, speaker queue |

---

## 👥 Social Networks (10 Products)

| # | Product | What to Build (Mini Project) | Core Concept Mastered |
|---|---------|-----------------------------|----------------------|
| 21 | Instagram | Feed ranking by time + likes (EdgeRank clone) | Feed ranking, Stories mock |
| 22 | Facebook | Social graph: friends-of-friends recommendation | Graph traversal, ad targeting mock |
| 23 | Twitter | Fanout service: push to followers (small accounts), pull (large) | Hybrid fanout, timeline |
| 24 | LinkedIn | Connection graph + job recommendation by skill match | Graph, job matching |
| 25 | Reddit | Upvote ranking using Wilson score + subreddit sharding | Wilson score, subreddit partitioning |
| 26 | Pinterest | Visual search: simple image feature extraction (color histogram) | Visual search, board saves |
| 27 | Snapchat | Ephemeral media: message deletes after viewing (in-memory TTL) | Ephemeral, Snap Map (mock) |
| 28 | Quora | Answer ranking by upvotes + topic graph (DAG of topics) | Q&A ranking, topic graph |
| 29 | Yelp | Proximity search with geohash (find restaurants near lat/lon) | Geo-sharding, review trust |
| 30 | Tumblr | Reblog graph: track original post through reblogs (linked list) | Reblog chain, dashboard fanout |

---

## 🚗 Marketplace & Ride-hailing (10 Products)

| # | Product | What to Build (Mini Project) | Core Concept Mastered |
|---|---------|-----------------------------|----------------------|
| 31 | Uber | Real-time driver–rider matching using geohash cells | Geohash, proximity matching |
| 32 | Lyft | ETA predictor: simple straight-line distance + traffic multiplier | ETA prediction, supply-demand |
| 33 | DoorDash | 3-sided matching: dasher, restaurant, customer – simple greedy | 3-sided marketplace |
| 34 | Airbnb | Double-ended booking: prevent double booking with optimistic lock | Double-ended booking, dynamic pricing |
| 35 | Swiggy | Live order tracking: update status via WebSocket | Hyperlocal tracking |
| 36 | Zomato | Restaurant catalog search with filters (veg, rating, price) | Food discovery, order pipeline |
| 37 | Ola | Multi-modal: switch between cab/auto/bike (mock routing) | Multi-modal routing |
| 38 | Grab | Superapp: combine food + ride + payment in one session | Superapp architecture |
| 39 | Rappi | 10-min delivery: dark store inventory reservation | Dark stores, rapid logistics |
| 40 | Instacart | Picker routing: assign shopper to nearest store (geohash) | Inventory sync, picker routing |

---

## 🔍 Search (10 Products)

| # | Product | What to Build (Mini Project) | Core Concept Mastered |
|---|---------|-----------------------------|----------------------|
| 41 | Google Search | Crawl 1000 pages, build inverted index, rank with TF-IDF | Crawling, inverted index, TF-IDF |
| 42 | Elasticsearch | Distributed inverted index: shard documents across 2 nodes | Sharding, relevance scoring |
| 43 | Bing | Knowledge graph: store (entity, relation, entity) triple store | Knowledge graph, ads auction mock |
| 44 | Google Maps | Dijkstra on a small road graph (50 nodes) + tile server | Graph routing, tile CDN |
| 45 | Typeahead | Trie with top 10 suggestions per prefix (in memory) | Prefix search, low latency |
| 46 | Lucene | Segment merging: merge two small inverted indexes into one | Segment merge, query parsing |
| 47 | Algolia | Typo tolerance: Levenshtein distance in autocomplete | Typo tolerance, instant results |
| 48 | DuckDuckGo | Bang shortcuts: redirect `!w cats` to Wikipedia | Bang routing, privacy-first |
| 49 | Wolfram Alpha | Expression parser for unit conversion (e.g., "10 km to miles") | Computational engine |
| 50 | Perplexity AI | RAG pipeline: retrieve top 3 documents, feed to LLM (mock) | RAG, citation grounding |

---

## 🗄️ Storage & Databases (10 Products)

| # | Product | What to Build (Mini Project) | Core Concept Mastered |
|---|---------|-----------------------------|----------------------|
| 51 | S3 | Object storage: PUT/GET/DELETE with UUID keys | Object storage, replication (mock) |
| 52 | Google Drive | Collaborative editing: simple OT with two clients | OT, conflict resolution |
| 53 | Dropbox | Block-level sync: split file into 1KB blocks, upload only changed blocks | Delta sync, block hashing |
| 54 | iCloud | CRDT-based counter (increment/decrement across devices) | CRDT, device sync |
| 55 | HDFS | Write-once file: split into 64MB blocks, store on 3 data nodes | Block storage, NameNode |
| 56 | Cassandra | Wide-column store: partition key + clustering columns | Consistent hashing, tunable consistency |
| 57 | Redis | In-memory hash store + TTL eviction (simple timer) | TTL, pub/sub (basic) |
| 58 | DynamoDB | Key-value with DynamoDB Streams: capture changes to a changelog | Streams, single-digit ms |
| 59 | PostgreSQL | B-tree index: implement a simple B-tree for integers | B-tree, MVCC (simulate) |
| 60 | MongoDB | Document model with sharding: range shard on `_id` | Document DB, aggregation pipeline (basic) |

---

## 🛒 E-commerce (10 Products)

| # | Product | What to Build (Mini Project) | Core Concept Mastered |
|---|---------|-----------------------------|----------------------|
| 61 | Amazon | Product catalog (SQL) + shopping cart (session storage) | Catalog, cart, recommendations (simple) |
| 62 | eBay | Auction engine: bid, highest bid wins after deadline | Auction, real-time bidding mock |
| 63 | Shopify | Multi-tenant storefront: each store gets subdomain | Multi-tenant, checkout flow |
| 64 | Etsy | Handmade search: filter by “made by artist” | Marketplace search, seller analytics |
| 65 | Flipkart | Flash sale: rate-limit orders per product (token bucket) | Traffic spike handling |
| 66 | Alibaba | Live commerce: chat + product link in same WebSocket | Live commerce, 11.11 scale mock |
| 67 | Booking.com | Hotel availability grid: show dates with price (2D array) | Availability, A/B testing framework |
| 68 | Expedia | Flight + hotel bundle: combine two APIs into one price | Bundling, GDS mock |
| 69 | Chewy | Subscription auto-ship: cron job to create orders every 30 days | Subscription, pet personalization |
| 70 | Walmart | Omnichannel: reserve item in store for pickup (click-and-collect) | Omnichannel inventory |

---

## 💳 Payments (10 Products)

| # | Product | What to Build (Mini Project) | Core Concept Mastered |
|---|---------|-----------------------------|----------------------|
| 71 | Stripe | Idempotent API: same `idempotency_key` does not charge twice | Idempotency keys, webhooks |
| 72 | PayPal | Digital wallet: hold balance, send/receive, chargeback simulation | Wallet, chargeback workflow |
| 73 | Venmo | Social P2P: post transaction to feed + ledger double-entry | Ledger design, ACH mock |
| 74 | Google Pay | NFC tokenization: generate one-time token for purchase (simulate) | Tokenization, UPI mock |
| 75 | Apple Pay | Secure Enclave mock: sign transaction with private key (simulate) | Secure Enclave, in-app pay |
| 76 | Square | POS protocol: process card swipe (simulate with random card ID) | POS hardware, merchant analytics |
| 77 | Razorpay | UPI payment: collect VPA, call mock bank API | UPI, subscription billing |
| 78 | Braintree | Payment vault: store card token, use for future payments | Vault, marketplace splits |
| 79 | Wise | Mid-market FX: convert USD to EUR using real API + pooled account | FX rates, pooled accounts |
| 80 | Coinbase | Order book: match buy/sell orders (simple price-time priority) | Exchange order book, hot/cold wallet |

---

## ⚙️ Infrastructure & Platform (10 Products)

| # | Product | What to Build (Mini Project) | Core Concept Mastered |
|---|---------|-----------------------------|----------------------|
| 81 | AWS EC2 | VM provisioner: start/stop containers (Docker) as “instances” | VM provisioning, auto-scaling (basic) |
| 82 | Kubernetes | Scheduler: bin-pack containers onto nodes (first-fit) | Scheduling, service mesh mock |
| 83 | Kafka | Distributed log: produce to partitions, consumer groups rebalance | Partitions, consumer groups |
| 84 | Nginx | L7 load balancer: round-robin between two backend servers | Reverse proxy, health checks |
| 85 | Cloudflare CDN | Edge cache: cache static assets with TTL, origin shield | Edge caching, anycast (mock) |
| 86 | Rate Limiter | Token bucket per user (Redis or in-memory) | Token bucket, sliding window |
| 87 | URL Shortener | Base62 encode ID, store in DB, redirect with 301 | Base62, redirect, click analytics |
| 88 | API Gateway | Auth middleware + rate limiting + request logging | Auth, throttling, routing |
| 89 | Zookeeper | Leader election: use etcd or simple consensus (RAFT mock) | Leader election, ZAB protocol |
| 90 | Prometheus + Grafana | Pull metrics: expose /metrics endpoint, scrape, plot | Pull-based metrics, TSDB, alerting |

---

## 🧰 Productivity & Developer Tools (10 Products)

| # | Product | What to Build (Mini Project) | Core Concept Mastered |
|---|---------|-----------------------------|----------------------|
| 91 | Google Docs | Collaborative editing: two cursors, OT for text insert | OT/CRDT, version history |
| 92 | Notion | Block-based DB: each page is a list of blocks (text, image) | Block storage, real-time sync |
| 93 | Jira | Issue workflow: state machine (To Do → In Progress → Done) | Workflow, JQL search (basic) |
| 94 | GitHub | Git server: init, commit, log (use libgit2 or simple blob storage) | Git DAG, PR workflow mock |
| 95 | Figma | Multiplayer canvas: WebSocket sends drawing events (mouse move) | CRDT for design, WebGL mock |
| 96 | Zoom | WebRTC signaling server: exchange SDP offer/answer | WebRTC, multi-party mixer (mock) |
| 97 | Trello | Drag-and-drop board: update card position via WebSocket | Real-time sync, kanban |
| 98 | Confluence | Wiki engine: markdown pages with permissions (RBAC) | Rich-text storage, permissions |
| 99 | Airtable | Spreadsheet-database: tabular data with formula support (simple) | Hybrid model, API layer |
| 100 | Linear | Local-first issue sync: IndexedDB + sync when online | Local-first, offline sync, full-text search |

---

## How to Use This List

1. **Pick one product** from beginner-friendly (e.g., URL Shortener, Rate Limiter, Typeahead).
2. **Implement the “What to Build”** in your language of choice (Go, Python, Node, Rust, etc.).
3. **Compare with the real product’s blog post** – note the differences (they use far more sophistication, but your core is the same).
4. **Move to the next** – each product teaches a unique concept.

After building 20–30 of these, you will have mastered the vast majority of system design patterns used in production.

---

*100 products, 100 mini-projects – one concept at a time.*
