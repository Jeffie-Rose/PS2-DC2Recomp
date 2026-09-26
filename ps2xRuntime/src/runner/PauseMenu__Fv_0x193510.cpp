#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PauseMenu__Fv
// Address: 0x193510 - 0x1937b8
void PauseMenu__Fv_0x193510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PauseMenu__Fv_0x193510");
#endif

    switch (ctx->pc) {
        case 0x193570u: goto label_193570;
        case 0x19358cu: goto label_19358c;
        case 0x1935a4u: goto label_1935a4;
        case 0x1935d8u: goto label_1935d8;
        case 0x193624u: goto label_193624;
        case 0x193634u: goto label_193634;
        case 0x193644u: goto label_193644;
        case 0x193664u: goto label_193664;
        case 0x193674u: goto label_193674;
        case 0x193690u: goto label_193690;
        case 0x1936e8u: goto label_1936e8;
        case 0x1936f8u: goto label_1936f8;
        case 0x193704u: goto label_193704;
        case 0x193710u: goto label_193710;
        case 0x19371cu: goto label_19371c;
        case 0x193728u: goto label_193728;
        case 0x193734u: goto label_193734;
        case 0x19374cu: goto label_19374c;
        case 0x193760u: goto label_193760;
        case 0x193774u: goto label_193774;
        case 0x19377cu: goto label_19377c;
        case 0x193794u: goto label_193794;
        case 0x1937a0u: goto label_1937a0;
        default: break;
    }

    ctx->pc = 0x193510u;

    // 0x193510: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x193510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x193514: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x193514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x193518: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19351c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19351cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193524: 0x8f838b54  lw          $v1, -0x74AC($gp)
    ctx->pc = 0x193524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937428)));
    // 0x193528: 0x1064006b  beq         $v1, $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x193528u;
    {
        const bool branch_taken_0x193528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x19352Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193528u;
            // 0x19352c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193528) {
            ctx->pc = 0x1936D8u;
            goto label_1936d8;
        }
    }
    ctx->pc = 0x193530u;
    // 0x193530: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x193530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193534: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x193534u;
    {
        const bool branch_taken_0x193534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x193538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193534u;
            // 0x193538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193534) {
            ctx->pc = 0x1936A0u;
            goto label_1936a0;
        }
    }
    ctx->pc = 0x19353Cu;
    // 0x19353c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19353Cu;
    {
        const bool branch_taken_0x19353c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19353c) {
            ctx->pc = 0x19355Cu;
            goto label_19355c;
        }
    }
    ctx->pc = 0x193544u;
    // 0x193544: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x193544u;
    {
        const bool branch_taken_0x193544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x193544) {
            ctx->pc = 0x193554u;
            goto label_193554;
        }
    }
    ctx->pc = 0x19354Cu;
    // 0x19354c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x19354Cu;
    {
        const bool branch_taken_0x19354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19354Cu;
            // 0x193550: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19354c) {
            ctx->pc = 0x1936E0u;
            goto label_1936e0;
        }
    }
    ctx->pc = 0x193554u;
label_193554:
    // 0x193554: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x193554u;
    {
        const bool branch_taken_0x193554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193554u;
            // 0x193558: 0xaf828b54  sw          $v0, -0x74AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193554) {
            ctx->pc = 0x1936DCu;
            goto label_1936dc;
        }
    }
    ctx->pc = 0x19355Cu;
label_19355c:
    // 0x19355c: 0x8f918b50  lw          $s1, -0x74B0($gp)
    ctx->pc = 0x19355cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937424)));
    // 0x193560: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x193560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x193564: 0x24847b60  addiu       $a0, $a0, 0x7B60
    ctx->pc = 0x193564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
    // 0x193568: 0xc0bb538  jal         func_2ED4E0
    ctx->pc = 0x193568u;
    SET_GPR_U32(ctx, 31, 0x193570u);
    ctx->pc = 0x19356Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193568u;
            // 0x19356c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193570u; }
        if (ctx->pc != 0x193570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193570u; }
        if (ctx->pc != 0x193570u) { return; }
    }
    ctx->pc = 0x193570u;
label_193570:
    // 0x193570: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193570u;
    {
        const bool branch_taken_0x193570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193570u;
            // 0x193574: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193570) {
            ctx->pc = 0x193580u;
            goto label_193580;
        }
    }
    ctx->pc = 0x193578u;
    // 0x193578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19357c: 0xaf828b50  sw          $v0, -0x74B0($gp)
    ctx->pc = 0x19357cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937424), GPR_U32(ctx, 2));
label_193580:
    // 0x193580: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x193580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x193584: 0xc0bb538  jal         func_2ED4E0
    ctx->pc = 0x193584u;
    SET_GPR_U32(ctx, 31, 0x19358Cu);
    ctx->pc = 0x193588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193584u;
            // 0x193588: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19358Cu; }
        if (ctx->pc != 0x19358Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19358Cu; }
        if (ctx->pc != 0x19358Cu) { return; }
    }
    ctx->pc = 0x19358Cu;
label_19358c:
    // 0x19358c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19358Cu;
    {
        const bool branch_taken_0x19358c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19358Cu;
            // 0x193590: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19358c) {
            ctx->pc = 0x193598u;
            goto label_193598;
        }
    }
    ctx->pc = 0x193594u;
    // 0x193594: 0xaf808b50  sw          $zero, -0x74B0($gp)
    ctx->pc = 0x193594u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937424), GPR_U32(ctx, 0));
label_193598:
    // 0x193598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19359c: 0xc0bb548  jal         func_2ED520
    ctx->pc = 0x19359Cu;
    SET_GPR_U32(ctx, 31, 0x1935A4u);
    ctx->pc = 0x1935A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19359Cu;
            // 0x1935a0: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935A4u; }
        if (ctx->pc != 0x1935A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935A4u; }
        if (ctx->pc != 0x1935A4u) { return; }
    }
    ctx->pc = 0x1935A4u;
label_1935a4:
    // 0x1935a4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1935a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1935a8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1935a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1935ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1935acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1935b0: 0x0  nop
    ctx->pc = 0x1935b0u;
    // NOP
    // 0x1935b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1935b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1935b8: 0x0  nop
    ctx->pc = 0x1935b8u;
    // NOP
    // 0x1935bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1935BCu;
    {
        const bool branch_taken_0x1935bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1935C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1935BCu;
            // 0x1935c0: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1935bc) {
            ctx->pc = 0x1935CCu;
            goto label_1935cc;
        }
    }
    ctx->pc = 0x1935C4u;
    // 0x1935c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1935c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1935c8: 0xaf828b50  sw          $v0, -0x74B0($gp)
    ctx->pc = 0x1935c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937424), GPR_U32(ctx, 2));
label_1935cc:
    // 0x1935cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1935ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1935d0: 0xc0bb548  jal         func_2ED520
    ctx->pc = 0x1935D0u;
    SET_GPR_U32(ctx, 31, 0x1935D8u);
    ctx->pc = 0x1935D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1935D0u;
            // 0x1935d4: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935D8u; }
        if (ctx->pc != 0x1935D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1935D8u; }
        if (ctx->pc != 0x1935D8u) { return; }
    }
    ctx->pc = 0x1935D8u;
label_1935d8:
    // 0x1935d8: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x1935d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
    // 0x1935dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1935dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1935e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1935e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1935e4: 0x0  nop
    ctx->pc = 0x1935e4u;
    // NOP
    // 0x1935e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1935e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1935ec: 0x0  nop
    ctx->pc = 0x1935ecu;
    // NOP
    // 0x1935f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1935F0u;
    {
        const bool branch_taken_0x1935f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1935F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1935F0u;
            // 0x1935f4: 0x3c0101e7  lui         $at, 0x1E7 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1935f0) {
            ctx->pc = 0x1935FCu;
            goto label_1935fc;
        }
    }
    ctx->pc = 0x1935F8u;
    // 0x1935f8: 0xaf808b50  sw          $zero, -0x74B0($gp)
    ctx->pc = 0x1935f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937424), GPR_U32(ctx, 0));
label_1935fc:
    // 0x1935fc: 0x8c228e74  lw          $v0, -0x718C($at)
    ctx->pc = 0x1935fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938228)));
    // 0x193600: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193600u;
    {
        const bool branch_taken_0x193600 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x193604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193600u;
            // 0x193604: 0x8f838b50  lw          $v1, -0x74B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193600) {
            ctx->pc = 0x193610u;
            goto label_193610;
        }
    }
    ctx->pc = 0x193608u;
    // 0x193608: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x19360c: 0xac208e90  sw          $zero, -0x7170($at)
    ctx->pc = 0x19360cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938256), GPR_U32(ctx, 0));
label_193610:
    // 0x193610: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193614: 0x12230007  beq         $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x193614u;
    {
        const bool branch_taken_0x193614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x193618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193614u;
            // 0x193618: 0xac238e74  sw          $v1, -0x718C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294938228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193614) {
            ctx->pc = 0x193634u;
            goto label_193634;
        }
    }
    ctx->pc = 0x19361Cu;
    // 0x19361c: 0xc064218  jal         func_190860
    ctx->pc = 0x19361Cu;
    SET_GPR_U32(ctx, 31, 0x193624u);
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193624u; }
        if (ctx->pc != 0x193624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193624u; }
        if (ctx->pc != 0x193624u) { return; }
    }
    ctx->pc = 0x193624u;
label_193624:
    // 0x193624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19362c: 0xc063818  jal         func_18E060
    ctx->pc = 0x19362Cu;
    SET_GPR_U32(ctx, 31, 0x193634u);
    ctx->pc = 0x193630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19362Cu;
            // 0x193630: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193634u; }
        if (ctx->pc != 0x193634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193634u; }
        if (ctx->pc != 0x193634u) { return; }
    }
    ctx->pc = 0x193634u;
label_193634:
    // 0x193634: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x193634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x193638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19363c: 0xc0bb538  jal         func_2ED4E0
    ctx->pc = 0x19363Cu;
    SET_GPR_U32(ctx, 31, 0x193644u);
    ctx->pc = 0x193640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19363Cu;
            // 0x193640: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193644u; }
        if (ctx->pc != 0x193644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193644u; }
        if (ctx->pc != 0x193644u) { return; }
    }
    ctx->pc = 0x193644u;
label_193644:
    // 0x193644: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x193644u;
    {
        const bool branch_taken_0x193644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193644) {
            ctx->pc = 0x193680u;
            goto label_193680;
        }
    }
    ctx->pc = 0x19364Cu;
    // 0x19364c: 0x8f828b50  lw          $v0, -0x74B0($gp)
    ctx->pc = 0x19364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937424)));
    // 0x193650: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x193650u;
    {
        const bool branch_taken_0x193650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193650u;
            // 0x193654: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193650) {
            ctx->pc = 0x19367Cu;
            goto label_19367c;
        }
    }
    ctx->pc = 0x193658u;
    // 0x193658: 0xaf808b44  sw          $zero, -0x74BC($gp)
    ctx->pc = 0x193658u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937412), GPR_U32(ctx, 0));
    // 0x19365c: 0xc064218  jal         func_190860
    ctx->pc = 0x19365Cu;
    SET_GPR_U32(ctx, 31, 0x193664u);
    ctx->pc = 0x193660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19365Cu;
            // 0x193660: 0xaf828b54  sw          $v0, -0x74AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193664u; }
        if (ctx->pc != 0x193664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193664u; }
        if (ctx->pc != 0x193664u) { return; }
    }
    ctx->pc = 0x193664u;
label_193664:
    // 0x193664: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193668: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x193668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19366c: 0xc063818  jal         func_18E060
    ctx->pc = 0x19366Cu;
    SET_GPR_U32(ctx, 31, 0x193674u);
    ctx->pc = 0x193670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19366Cu;
            // 0x193670: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193674u; }
        if (ctx->pc != 0x193674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193674u; }
        if (ctx->pc != 0x193674u) { return; }
    }
    ctx->pc = 0x193674u;
label_193674:
    // 0x193674: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x193674u;
    {
        const bool branch_taken_0x193674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193674) {
            ctx->pc = 0x193680u;
            goto label_193680;
        }
    }
    ctx->pc = 0x19367Cu;
label_19367c:
    // 0x19367c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19367cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193680:
    // 0x193680: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x193680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x193684: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x193684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x193688: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x193688u;
    SET_GPR_U32(ctx, 31, 0x193690u);
    ctx->pc = 0x19368Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193688u;
            // 0x19368c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193690u; }
        if (ctx->pc != 0x193690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193690u; }
        if (ctx->pc != 0x193690u) { return; }
    }
    ctx->pc = 0x193690u;
label_193690:
    // 0x193690: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x193690u;
    {
        const bool branch_taken_0x193690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193690) {
            ctx->pc = 0x1936DCu;
            goto label_1936dc;
        }
    }
    ctx->pc = 0x193698u;
    // 0x193698: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x193698u;
    {
        const bool branch_taken_0x193698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19369Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193698u;
            // 0x19369c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193698) {
            ctx->pc = 0x1936DCu;
            goto label_1936dc;
        }
    }
    ctx->pc = 0x1936A0u;
label_1936a0:
    // 0x1936a0: 0xc7818b44  lwc1        $f1, -0x74BC($gp)
    ctx->pc = 0x1936a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1936a4: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1936a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x1936a8: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1936a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x1936ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1936acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1936b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1936b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1936b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1936b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1936b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1936b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1936bc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1936bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1936c0: 0x0  nop
    ctx->pc = 0x1936c0u;
    // NOP
    // 0x1936c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1936C4u;
    {
        const bool branch_taken_0x1936c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1936C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1936C4u;
            // 0x1936c8: 0xe7808b44  swc1        $f0, -0x74BC($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937412), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936c4) {
            ctx->pc = 0x1936DCu;
            goto label_1936dc;
        }
    }
    ctx->pc = 0x1936CCu;
    // 0x1936cc: 0xe7828b44  swc1        $f2, -0x74BC($gp)
    ctx->pc = 0x1936ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937412), bits); }
    // 0x1936d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1936D0u;
    {
        const bool branch_taken_0x1936d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1936D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1936D0u;
            // 0x1936d4: 0xaf848b54  sw          $a0, -0x74AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937428), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936d0) {
            ctx->pc = 0x1936DCu;
            goto label_1936dc;
        }
    }
    ctx->pc = 0x1936D8u;
label_1936d8:
    // 0x1936d8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1936d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1936dc:
    // 0x1936dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1936dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1936e0:
    // 0x1936e0: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1936E0u;
    SET_GPR_U32(ctx, 31, 0x1936E8u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1936E8u; }
        if (ctx->pc != 0x1936E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1936E8u; }
        if (ctx->pc != 0x1936E8u) { return; }
    }
    ctx->pc = 0x1936E8u;
label_1936e8:
    // 0x1936e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1936e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1936ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1936ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1936f0: 0xc04d104  jal         func_134410
    ctx->pc = 0x1936F0u;
    SET_GPR_U32(ctx, 31, 0x1936F8u);
    ctx->pc = 0x1936F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1936F0u;
            // 0x1936f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1936F8u; }
        if (ctx->pc != 0x1936F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1936F8u; }
        if (ctx->pc != 0x1936F8u) { return; }
    }
    ctx->pc = 0x1936F8u;
label_1936f8:
    // 0x1936f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1936f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1936fc: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1936FCu;
    SET_GPR_U32(ctx, 31, 0x193704u);
    ctx->pc = 0x193700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1936FCu;
            // 0x193700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193704u; }
        if (ctx->pc != 0x193704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193704u; }
        if (ctx->pc != 0x193704u) { return; }
    }
    ctx->pc = 0x193704u;
label_193704:
    // 0x193704: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x193704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193708: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x193708u;
    SET_GPR_U32(ctx, 31, 0x193710u);
    ctx->pc = 0x19370Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193708u;
            // 0x19370c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193710u; }
        if (ctx->pc != 0x193710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193710u; }
        if (ctx->pc != 0x193710u) { return; }
    }
    ctx->pc = 0x193710u;
label_193710:
    // 0x193710: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x193710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193714: 0xc04d424  jal         func_135090
    ctx->pc = 0x193714u;
    SET_GPR_U32(ctx, 31, 0x19371Cu);
    ctx->pc = 0x193718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193714u;
            // 0x193718: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19371Cu; }
        if (ctx->pc != 0x19371Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19371Cu; }
        if (ctx->pc != 0x19371Cu) { return; }
    }
    ctx->pc = 0x19371Cu;
label_19371c:
    // 0x19371c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193720: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x193720u;
    SET_GPR_U32(ctx, 31, 0x193728u);
    ctx->pc = 0x193724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193720u;
            // 0x193724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193728u; }
        if (ctx->pc != 0x193728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193728u; }
        if (ctx->pc != 0x193728u) { return; }
    }
    ctx->pc = 0x193728u;
label_193728:
    // 0x193728: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x193728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19372c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x19372Cu;
    SET_GPR_U32(ctx, 31, 0x193734u);
    ctx->pc = 0x193730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19372Cu;
            // 0x193730: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193734u; }
        if (ctx->pc != 0x193734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193734u; }
        if (ctx->pc != 0x193734u) { return; }
    }
    ctx->pc = 0x193734u;
label_193734:
    // 0x193734: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x193734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19373c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19373cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193740: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x193740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193744: 0xc04d320  jal         func_134C80
    ctx->pc = 0x193744u;
    SET_GPR_U32(ctx, 31, 0x19374Cu);
    ctx->pc = 0x193748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193744u;
            // 0x193748: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19374Cu; }
        if (ctx->pc != 0x19374Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19374Cu; }
        if (ctx->pc != 0x19374Cu) { return; }
    }
    ctx->pc = 0x19374Cu;
label_19374c:
    // 0x19374c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19374cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193758: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x193758u;
    SET_GPR_U32(ctx, 31, 0x193760u);
    ctx->pc = 0x19375Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193758u;
            // 0x19375c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193760u; }
        if (ctx->pc != 0x193760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193760u; }
        if (ctx->pc != 0x193760u) { return; }
    }
    ctx->pc = 0x193760u;
label_193760:
    // 0x193760: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x193760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x193764: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x193764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193768: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x193768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x19376c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x19376Cu;
    SET_GPR_U32(ctx, 31, 0x193774u);
    ctx->pc = 0x193770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19376Cu;
            // 0x193770: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193774u; }
        if (ctx->pc != 0x193774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193774u; }
        if (ctx->pc != 0x193774u) { return; }
    }
    ctx->pc = 0x193774u;
label_193774:
    // 0x193774: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x193774u;
    SET_GPR_U32(ctx, 31, 0x19377Cu);
    ctx->pc = 0x193778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193774u;
            // 0x193778: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19377Cu; }
        if (ctx->pc != 0x19377Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19377Cu; }
        if (ctx->pc != 0x19377Cu) { return; }
    }
    ctx->pc = 0x19377Cu;
label_19377c:
    // 0x19377c: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x19377cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x193780: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x193780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x193784: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x193784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x193788: 0x24847390  addiu       $a0, $a0, 0x7390
    ctx->pc = 0x193788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29584));
    // 0x19378c: 0xc054ee8  jal         func_153BA0
    ctx->pc = 0x19378Cu;
    SET_GPR_U32(ctx, 31, 0x193794u);
    ctx->pc = 0x193790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19378Cu;
            // 0x193790: 0xac2274dc  sw          $v0, 0x74DC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 29916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193794u; }
        if (ctx->pc != 0x193794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193794u; }
        if (ctx->pc != 0x193794u) { return; }
    }
    ctx->pc = 0x193794u;
label_193794:
    // 0x193794: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x193794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x193798: 0xc056cb0  jal         func_15B2C0
    ctx->pc = 0x193798u;
    SET_GPR_U32(ctx, 31, 0x1937A0u);
    ctx->pc = 0x19379Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193798u;
            // 0x19379c: 0x24847390  addiu       $a0, $a0, 0x7390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937A0u; }
        if (ctx->pc != 0x1937A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1937A0u; }
        if (ctx->pc != 0x1937A0u) { return; }
    }
    ctx->pc = 0x1937A0u;
label_1937a0:
    // 0x1937a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1937a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1937a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1937a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1937a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1937a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1937ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1937acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1937b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1937B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1937B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1937B0u;
            // 0x1937b4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1937B8u;
}
