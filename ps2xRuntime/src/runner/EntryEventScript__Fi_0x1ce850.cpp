#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EntryEventScript__Fi
// Address: 0x1ce850 - 0x1ce9e4
void EntryEventScript__Fi_0x1ce850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntryEventScript__Fi_0x1ce850");
#endif

    switch (ctx->pc) {
        case 0x1ce888u: goto label_1ce888;
        case 0x1ce8c4u: goto label_1ce8c4;
        case 0x1ce8e4u: goto label_1ce8e4;
        case 0x1ce900u: goto label_1ce900;
        case 0x1ce92cu: goto label_1ce92c;
        case 0x1ce93cu: goto label_1ce93c;
        case 0x1ce94cu: goto label_1ce94c;
        case 0x1ce968u: goto label_1ce968;
        case 0x1ce994u: goto label_1ce994;
        case 0x1ce9c0u: goto label_1ce9c0;
        case 0x1ce9d4u: goto label_1ce9d4;
        default: break;
    }

    ctx->pc = 0x1ce850u;

    // 0x1ce850: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ce850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ce854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ce858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce85c: 0x8f838d74  lw          $v1, -0x728C($gp)
    ctx->pc = 0x1ce85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
    // 0x1ce860: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x1ce860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
    // 0x1ce864: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CE864u;
    {
        const bool branch_taken_0x1ce864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE864u;
            // 0x1ce868: 0xaf838ac0  sw          $v1, -0x7540($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce864) {
            ctx->pc = 0x1CE890u;
            goto label_1ce890;
        }
    }
    ctx->pc = 0x1CE86Cu;
    // 0x1ce86c: 0x8f888ad0  lw          $t0, -0x7530($gp)
    ctx->pc = 0x1ce86cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1ce870: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x1ce870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ce874: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ce874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1ce878: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1ce878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce87c: 0x24a571d0  addiu       $a1, $a1, 0x71D0
    ctx->pc = 0x1ce87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29136));
    // 0x1ce880: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1CE880u;
    SET_GPR_U32(ctx, 31, 0x1CE888u);
    ctx->pc = 0x1CE884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE880u;
            // 0x1ce884: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE888u; }
        if (ctx->pc != 0x1CE888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE888u; }
        if (ctx->pc != 0x1CE888u) { return; }
    }
    ctx->pc = 0x1CE888u;
label_1ce888:
    // 0x1ce888: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1CE888u;
    {
        const bool branch_taken_0x1ce888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce888) {
            ctx->pc = 0x1CE93Cu;
            goto label_1ce93c;
        }
    }
    ctx->pc = 0x1CE890u;
label_1ce890:
    // 0x1ce890: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ce890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ce894: 0x8022e4bc  lb          $v0, -0x1B44($at)
    ctx->pc = 0x1ce894u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960316)));
    // 0x1ce898: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CE898u;
    {
        const bool branch_taken_0x1ce898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE898u;
            // 0x1ce89c: 0x24860001  addiu       $a2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce898) {
            ctx->pc = 0x1CE8ECu;
            goto label_1ce8ec;
        }
    }
    ctx->pc = 0x1CE8A0u;
    // 0x1ce8a0: 0x28c1000a  slti        $at, $a2, 0xA
    ctx->pc = 0x1ce8a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1ce8a4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE8A4u;
    {
        const bool branch_taken_0x1ce8a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce8a4) {
            ctx->pc = 0x1CE8CCu;
            goto label_1ce8cc;
        }
    }
    ctx->pc = 0x1CE8ACu;
    // 0x1ce8ac: 0x8f888ad0  lw          $t0, -0x7530($gp)
    ctx->pc = 0x1ce8acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1ce8b0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ce8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1ce8b4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1ce8b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ce8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ce8bc: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1CE8BCu;
    SET_GPR_U32(ctx, 31, 0x1CE8C4u);
    ctx->pc = 0x1CE8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8BCu;
            // 0x1ce8c0: 0x24a571f0  addiu       $a1, $a1, 0x71F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8C4u; }
        if (ctx->pc != 0x1CE8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8C4u; }
        if (ctx->pc != 0x1CE8C4u) { return; }
    }
    ctx->pc = 0x1CE8C4u;
label_1ce8c4:
    // 0x1ce8c4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1CE8C4u;
    {
        const bool branch_taken_0x1ce8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce8c4) {
            ctx->pc = 0x1CE93Cu;
            goto label_1ce93c;
        }
    }
    ctx->pc = 0x1CE8CCu;
label_1ce8cc:
    // 0x1ce8cc: 0x8f888ad0  lw          $t0, -0x7530($gp)
    ctx->pc = 0x1ce8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1ce8d0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ce8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1ce8d4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1ce8d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ce8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ce8dc: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1CE8DCu;
    SET_GPR_U32(ctx, 31, 0x1CE8E4u);
    ctx->pc = 0x1CE8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8DCu;
            // 0x1ce8e0: 0x24a57210  addiu       $a1, $a1, 0x7210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8E4u; }
        if (ctx->pc != 0x1CE8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE8E4u; }
        if (ctx->pc != 0x1CE8E4u) { return; }
    }
    ctx->pc = 0x1CE8E4u;
label_1ce8e4:
    // 0x1ce8e4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1CE8E4u;
    {
        const bool branch_taken_0x1ce8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce8e4) {
            ctx->pc = 0x1CE93Cu;
            goto label_1ce93c;
        }
    }
    ctx->pc = 0x1CE8ECu;
label_1ce8ec:
    // 0x1ce8ec: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1ce8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1ce8f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8f4: 0x2484e430  addiu       $a0, $a0, -0x1BD0
    ctx->pc = 0x1ce8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960176));
    // 0x1ce8f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE8F8u;
    {
        const bool branch_taken_0x1ce8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE8F8u;
            // 0x1ce8fc: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8f8) {
            ctx->pc = 0x1CE90Cu;
            goto label_1ce90c;
        }
    }
    ctx->pc = 0x1CE900u;
label_1ce900:
    // 0x1ce900: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x1ce900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1ce904: 0xa0660060  sb          $a2, 0x60($v1)
    ctx->pc = 0x1ce904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ce908: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ce908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ce90c:
    // 0x1ce90c: 0x0  nop
    ctx->pc = 0x1ce90cu;
    // NOP
    // 0x1ce910: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1ce910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ce914: 0x8066008c  lb          $a2, 0x8C($v1)
    ctx->pc = 0x1ce914u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1ce918: 0x14c2fff9  bne         $a2, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CE918u;
    {
        const bool branch_taken_0x1ce918 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ce918) {
            ctx->pc = 0x1CE900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ce900;
        }
    }
    ctx->pc = 0x1CE920u;
    // 0x1ce920: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ce920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ce924: 0xc0b497c  jal         func_2D25F0
    ctx->pc = 0x1CE924u;
    SET_GPR_U32(ctx, 31, 0x1CE92Cu);
    ctx->pc = 0x1CE928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE924u;
            // 0x1ce928: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D25F0u;
    if (runtime->hasFunction(0x2D25F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D25F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE92Cu; }
        if (ctx->pc != 0x1CE92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapPath__FPcPc_0x2d25f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE92Cu; }
        if (ctx->pc != 0x1CE92Cu) { return; }
    }
    ctx->pc = 0x1CE92Cu;
label_1ce92c:
    // 0x1ce92c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ce92cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1ce930: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ce930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ce934: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x1CE934u;
    SET_GPR_U32(ctx, 31, 0x1CE93Cu);
    ctx->pc = 0x1CE938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE934u;
            // 0x1ce938: 0x24a57228  addiu       $a1, $a1, 0x7228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE93Cu; }
        if (ctx->pc != 0x1CE93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE93Cu; }
        if (ctx->pc != 0x1CE93Cu) { return; }
    }
    ctx->pc = 0x1CE93Cu;
label_1ce93c:
    // 0x1ce93c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1ce93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1ce940: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1ce940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ce944: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1CE944u;
    SET_GPR_U32(ctx, 31, 0x1CE94Cu);
    ctx->pc = 0x1CE948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE944u;
            // 0x1ce948: 0x24847230  addiu       $a0, $a0, 0x7230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE94Cu; }
        if (ctx->pc != 0x1CE94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE94Cu; }
        if (ctx->pc != 0x1CE94Cu) { return; }
    }
    ctx->pc = 0x1CE94Cu;
label_1ce94c:
    // 0x1ce94c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce950: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ce950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1ce954: 0xac20f584  sw          $zero, -0xA7C($at)
    ctx->pc = 0x1ce954u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964612), GPR_U32(ctx, 0));
    // 0x1ce958: 0x2484f560  addiu       $a0, $a0, -0xAA0
    ctx->pc = 0x1ce958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964576));
    // 0x1ce95c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce960: 0xc04e780  jal         func_139E00
    ctx->pc = 0x1CE960u;
    SET_GPR_U32(ctx, 31, 0x1CE968u);
    ctx->pc = 0x1CE964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE960u;
            // 0x1ce964: 0xac20f57c  sw          $zero, -0xA84($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE968u; }
        if (ctx->pc != 0x1CE968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE968u; }
        if (ctx->pc != 0x1CE968u) { return; }
    }
    ctx->pc = 0x1CE968u;
label_1ce968:
    // 0x1ce968: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce96c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ce96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ce970: 0x8c23f584  lw          $v1, -0xA7C($at)
    ctx->pc = 0x1ce970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964612)));
    // 0x1ce974: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x1ce974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1ce978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ce978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce97c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1ce980: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ce980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ce984: 0x8c22f580  lw          $v0, -0xA80($at)
    ctx->pc = 0x1ce984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964608)));
    // 0x1ce988: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1ce988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ce98c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x1CE98Cu;
    SET_GPR_U32(ctx, 31, 0x1CE994u);
    ctx->pc = 0x1CE990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE98Cu;
            // 0x1ce990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE994u; }
        if (ctx->pc != 0x1CE994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE994u; }
        if (ctx->pc != 0x1CE994u) { return; }
    }
    ctx->pc = 0x1CE994u;
label_1ce994:
    // 0x1ce994: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CE994u;
    {
        const bool branch_taken_0x1ce994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce994) {
            ctx->pc = 0x1CE9D4u;
            goto label_1ce9d4;
        }
    }
    ctx->pc = 0x1CE99Cu;
    // 0x1ce99c: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x1ce99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1ce9a0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1ce9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1ce9a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE9A4u;
    {
        const bool branch_taken_0x1ce9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE9A4u;
            // 0x1ce9a8: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9a4) {
            ctx->pc = 0x1CE9B4u;
            goto label_1ce9b4;
        }
    }
    ctx->pc = 0x1CE9ACu;
    // 0x1ce9ac: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1ce9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1ce9b0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1ce9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ce9b4:
    // 0x1ce9b4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ce9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1ce9b8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1CE9B8u;
    SET_GPR_U32(ctx, 31, 0x1CE9C0u);
    ctx->pc = 0x1CE9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE9B8u;
            // 0x1ce9bc: 0x2484f560  addiu       $a0, $a0, -0xAA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE9C0u; }
        if (ctx->pc != 0x1CE9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE9C0u; }
        if (ctx->pc != 0x1CE9C0u) { return; }
    }
    ctx->pc = 0x1CE9C0u;
label_1ce9c0:
    // 0x1ce9c0: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1ce9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
    // 0x1ce9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9cc: 0xc095408  jal         func_255020
    ctx->pc = 0x1CE9CCu;
    SET_GPR_U32(ctx, 31, 0x1CE9D4u);
    ctx->pc = 0x1CE9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE9CCu;
            // 0x1ce9d0: 0x24c6f560  addiu       $a2, $a2, -0xAA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255020u;
    if (runtime->hasFunction(0x255020u)) {
        auto targetFn = runtime->lookupFunction(0x255020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE9D4u; }
        if (ctx->pc != 0x1CE9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEventScript__FPcPcP9mgCMemory_0x255020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE9D4u; }
        if (ctx->pc != 0x1CE9D4u) { return; }
    }
    ctx->pc = 0x1CE9D4u;
label_1ce9d4:
    // 0x1ce9d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce9d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ce9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE9DCu;
            // 0x1ce9e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE9E4u;
}
