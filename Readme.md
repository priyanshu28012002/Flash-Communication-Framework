# Flash Communication Framework

## Overview

**Flash** is a low-latency communication framework designed for deterministic, selective, and priority-controlled message transport across:

* Inter-process channels (IPC)
* Network links
* Serial interfaces

Unlike conventional middleware where all topics are broadcast across the network, Flash provides **fine-grained control over message routing**, allowing developers to explicitly define where each topic is transmitted. This eliminates unnecessary bandwidth usage, reduces latency, and improves system determinism.

---

## Motivation

In distributed robotic and real-time systems, broadcasting all topics introduces:

* unnecessary network load
* increased latency
* nondeterministic delivery
* wasted CPU cycles

Flash solves this by enabling **selective topic propagation** and **communication mode control**.

---

## Core Features

### 1. Selective Topic Sharing

Each topic can be configured to communicate through:

* local process only
* network only
* serial only
* hybrid routes

This allows bandwidth to be reserved only for critical data.

---

### 2. Communication Mode Control

Each channel can explicitly define its transport:

| Mode    | Description                 |
| ------- | --------------------------- |
| IPC     | Shared memory or local pipe |
| Network | TCP/UDP                     |
| Serial  | UART / RS-485 / USB serial  |

---

### 3. Channel Architecture

Flash supports both:

* single-channel communication
* multi-channel communication

Multi-channel mode allows prioritization between channels.

---

### 4. Priority Scheduling

Messages can be assigned priority levels.

Example use case:

| Message          | Priority |
| ---------------- | -------- |
| Emergency Stop   | Highest  |
| Command Velocity | High     |
| Telemetry        | Medium   |
| Logs             | Low      |

This ensures **safety-critical commands always override motion commands**.

---

### 5. Access Permissions (Safety Layer)

Each topic can be configured with access restrictions:

* Read-Only
* Write-Only
* Read/Write

This prevents unintended publishing or subscription and adds a layer of runtime safety enforcement.

---
## Design Goals

Flash is engineered with the following principles:

* deterministic latency
* minimal overhead
* explicit routing
* modular architecture
* safety-aware communication
* real-time compatibility
* zero-copy transport
* encryption layer
* distributed discovery
* real-time scheduler integration

---

## Why Flash?

Flash is designed for systems where **latency, determinism, and safety matter more than convenience broadcasting**. It provides developers with explicit control over communication paths, priorities, and permissions.

---
