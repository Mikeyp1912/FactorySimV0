# FactorySimV0


This README documents the project structure, roadmap, and development principles for the v0 codebase.

---

## Project Goals

- Build a fully-understandable and maintainable UE5 C++ codebase  
- Implement clean and modular gameplay architecture  
- Support scalable factory mechanics:
  - Building placement  
  - Grid-based world alignment  
  - Conveyor belts (with spline preview)  
  - Item transport  
  - Power, crafting, automation, and expansion (future milestones)

FactorySimV0 is built on a **milestone-based development plan**.

---

# Project Structure (C++ Source)



---

# Milestone Progress

This project is developed using a structured milestone plan.

## Milestone 0 — Core Player + Game Shell
- [ ] New C++ UE5 project + Git setup  
- [ ] Custom `FactoryGameMode`  
- [ ] Custom `FactoryPlayerController`  
- [ ] Custom `FactoryCharacter`  
- [ ] Basic HUD showing current mode  

## Milestone 1 — Grid + Simple Building Placement
- [ ] GridService (world <-> grid conversion)  
- [ ] BuildingBase actor  
- [ ] PlacementComponent with state machine  
- [ ] Ghost building actor  
- [ ] Snapping to grid  
- [ ] Valid/Invalid placement (occupancy)  

## Milestone 2 — Building Ports + Inventory
- [ ] Add InPort and OutPort components
- [ ] Add InventoryComponent
- [ ] Connect building placement to inventory/UI
- [ ] 
## Milestone 3 — Conveyor Preview + Placement
- [ ] ConveyorGhost actor (spline + instanced mesh)
- [ ] Detect port snapping (input/output)
- [ ] Conveyor placement workflow (start -> drag -> confirm)
- [ ] Path validity: length, slope, obstruction
- [ ] Real Conveyor actor spawning

## Milestone 4 — Item Transport
- [ ] Conveyor item slots  
- [ ] Move items along spline  
- [ ] Deliver items into building inventories  

## Milestone 5 — Power, Automation, Crafting, etc.
- [ ] Power graph  
- [ ] Crafting machines  
- [ ] Resource extractors  
- [ ] Automation tiers  

---

# Core Gameplay Loop (High-Level)

1. **Player explores the world**  
2. **Places buildings on a snapped grid**  
3. **Connects machines with conveyors**  
4. **Items travel between machines**  
5. **Machines craft outputs from inputs**  
6. **Player expands into higher tiers of automation**

---

# Development Philosophy

FactorySimV0 is built with these principles:

### **1. Understand every subsystem**
No mystery code.  
Every class and method should be easily explainable.

### **2. Small, composable systems**
- Placement logic lives in `PlacementComponent`
- Grid logic in `GridService`
- Conveyor visuals and logic inside `AConveyor`

### **3. Ghost preview for every placeable**
Real vs Ghost actors prevent bugs and simplify placement logic.

### **4. C++ first, Blueprint where appropriate**
C++ handles systems and logic; Blueprint handles UI and artist iteration.

---

# Requirements

- Unreal Engine **5.5**  
- Visual Studio 2022 / Rider / VSCode  
- Windows 10/11  
- Git  

---

# License

This is a personal learning and development project.  
No license yet — **all rights reserved** until further notice.

---

# Contact / Notes

This project is part of an ongoing learning journey in:

- Unreal Engine 5  
- Game architecture  
- Systems programming  
- C++ design patterns  


---
